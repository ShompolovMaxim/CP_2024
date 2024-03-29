#include "loadintervalsdialog.h"
#include "ui_loadintervalsdialog.h"
#include "doubleformatter.h"

#include <vector>
#include <algorithm>

LoadIntervalsDialog::LoadIntervalsDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoadIntervalsDialog)
{
    ui->setupUi(this);
}

LoadIntervalsDialog::~LoadIntervalsDialog()
{
    delete ui;
}

void LoadIntervalsDialog::clear() {
    ts.clear();
    intervals.clear();
    oldIntervals.clear();
    intervalsD.clear();
    oldIntervalsD.clear();
    ui->data->setText(QString());
}

void LoadIntervalsDialog::UpdateData() {
    ui->amount->setValue(intervals.size() - 1);
    std::string data;
    if (intervals.size() <= 2001) {
        for(size_t i = 0; i + 1 < intervals.size(); ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervals[i], 3) + ";\t" + DoubleFormatter::format(intervals[i+1], 3) + ")\n";
        }
    } else {
        for(size_t i = 0; i < 1000; ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervals[i], 3) + ";\t" + DoubleFormatter::format(intervals[i+1], 3) + ")\n";
        }
        data += "...........................\n";
        for(size_t i = intervals.size() - 1001; i + 1 < intervals.size(); ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervals[i], 3) + ";\t" + DoubleFormatter::format(intervals[i+1], 3) + ")\n";
        }
    }
    ui->data->document()->setPlainText(QString::fromStdString(data));

    ui->amount_2->setValue(intervalsD.size() - 1);
    data = "";
    if (intervals.size() <= 2001) {
        for(size_t i = 0; i + 1 < intervalsD.size(); ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervalsD[i], 3) + ";\t" + DoubleFormatter::format(intervalsD[i+1], 3) + ")\n";
        }
    } else {
        for(size_t i = 0; i < 1000; ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervalsD[i], 3) + ";\t" + DoubleFormatter::format(intervalsD[i+1], 3) + ")\n";
        }
        data += "...........................\n";
        for(size_t i = intervalsD.size() - 1001; i + 1 < intervalsD.size(); ++i) {
            data += "u" + std::to_string(i+1) + ":\t[" + DoubleFormatter::format(intervalsD[i], 3) + ";\t" + DoubleFormatter::format(intervalsD[i+1], 3) + ")\n";
        }
    }
    ui->data_2->document()->setPlainText(QString::fromStdString(data));
}

void LoadIntervalsDialog::setMaxMin(double mn, double mx, double mxD) {
    ui->max->setValue(mx);
    ui->min->setValue(mn);
    ui->max_2->setValue(mxD);
}

void LoadIntervalsDialog::on_generateButton_clicked()
{
    intervals.clear();
    double mx = *std::max_element(ts.begin(), ts.end()) + ui->d2->value();
    double mn = *std::min_element(ts.begin(), ts.end()) - ui->d1->value();
    if (mx == mn) {
        if (mx == 0) {
            mx += 0.5;
            mn -= 0.5;
        } else {
            mn -= std::abs(mx) * 0.1;
            mx += std::abs(mx) * 0.1;
        }
    }
    if (ui->generationMethod->currentIndex() == 0) {
        applyDistributionBasedLengthMethod(mn, mx, false);
    }
    if (ui->generationMethod->currentIndex() == 1) {
        applyAverageBasedLengthMethod(mn, mx, false);
    }
    if (ui->generationMethod->currentIndex() == 2) {
        applyHalfAverageBasedLengthMethod(mn, mx, false);
    }
    if (ui->generationMethod->currentIndex() == 4) {
        applyAmountMethod(mn, mx, false);
    }
    if (ui->generationMethod->currentIndex() == 3) {
        applyNaturalPartitionMethod(mn, mx, false);
    }
    UpdateData();
}

void LoadIntervalsDialog::applyDistributionBasedLengthMethod(double mn, double mx, bool toD) {
    double intL = 1;
    double diffSum = 0;
    std::vector<double> diff;
    std::vector<double> wTs;
    if (toD) {
        wTs = tsD;
    } else {
        wTs = ts;
    }
    for (size_t i = 0; i + 1 < wTs.size(); ++i) {
        diffSum += std::abs(wTs[i + 1] - wTs[i]);
        diff.push_back(std::abs(wTs[i + 1] - wTs[i]));
    }
    double avgDiff = diffSum / (wTs.size() - 1);
    double base = 0.1;
    if (avgDiff > 1) {
        base = 1;
        while (base * 10 < avgDiff) {
            base *= 10;
        }
    }
    std::sort(diff.begin(), diff.end());
    intL = 0.0;
    size_t lessCount = 0;
    while (lessCount < diff.size() && diff.size() >= lessCount + diff.size() / 2) {
        intL += base;
        while (lessCount < diff.size() && diff[lessCount] <= intL) {
            ++lessCount;
        }
    }
    intL -= base;
    if (intL == 0) {
        intL = base * 2;
    }
    if (intL == 0) {
        intL = mx - mn;
    }
    for (double cur = mn; cur - intL < mx; cur += intL) {
        if (toD) {
            intervalsD.push_back(cur);
        } else {
            intervals.push_back(cur);
        }
    }
}

void LoadIntervalsDialog::applyAverageBasedLengthMethod(double mn, double mx, bool toD) {
    double intL = 1;
    double diffSum = 0;
    std::vector<double> diff;
    std::vector<double> wTs;
    if (toD) {
        wTs = tsD;
    } else {
        wTs = ts;
    }
    for (size_t i = 0; i + 1 < wTs.size(); ++i) {
        diffSum += std::abs(wTs[i + 1] - wTs[i]);
        diff.push_back(std::abs(wTs[i + 1] - wTs[i]));
    }
    double avgDiff = diffSum / (wTs.size() - 1) / 2;
    double base = 0.1;
    if (avgDiff > 1) {
        base = 1;
        while (base * 10 < avgDiff) {
            base *= 10;
        }
    }
    intL = std::round(avgDiff / base) * base;
    if (intL == 0) {
        intL = mx - mn;
    }
    for (double cur = mn; cur - intL < mx; cur += intL) {
        if (toD) {
            intervalsD.push_back(cur);
        } else {
            intervals.push_back(cur);
        }
    }
}

void LoadIntervalsDialog::applyHalfAverageBasedLengthMethod(double mn, double mx, bool toD) {
    double intL = 1;
    double diffSum = 0;
    std::vector<double> diff;
    std::vector<double> wTs;
    if (toD) {
        wTs = tsD;
    } else {
        wTs = ts;
    }
    for (size_t i = 0; i + 1 < wTs.size(); ++i) {
        diffSum += std::abs(wTs[i + 1] - wTs[i]);
        diff.push_back(std::abs(wTs[i + 1] - wTs[i]));
    }
    double avgDiff = diffSum / (wTs.size() - 1) / 2;
    double base = 0.1;
    if (avgDiff > 1) {
        base = 1;
        while (base * 10 < avgDiff) {
            base *= 10;
        }
    }
    intL = std::round(avgDiff / base) * base * 2;
    if (intL == 0) {
        intL = mx - mn;
    }
    for (double cur = mn; cur - intL < mx; cur += intL) {
        if (toD) {
            intervalsD.push_back(cur);
        } else {
            intervals.push_back(cur);
        }
    }
}

void LoadIntervalsDialog::applyNaturalPartitionMethod(double mn, double mx, bool toD) {
    double dist = mx - mn;
    double msd = 1;
    if (msd >= dist) {
        while (msd >= dist) {
            msd *= 0.1;
        }
    } else {
        while (msd * 10 < dist) {
            msd *= 10;
        }
    }
    int range = 0;
    mn = std::floor(mn / msd) * msd;
    mx = std::ceil(mx / msd) * msd;
    std::vector<double> ints;
    while (range * msd < mx - mn) {
        ++range;
    }
    if (range == 3 || range == 6 || range == 9) {
        ints.push_back(mn);
        ints.push_back(mn + msd * (range / 3));
        ints.push_back(mn + msd * (2 * range / 3));
        ints.push_back(mn + msd * range);
    }
    if (range == 7) {
        ints.push_back(mn);
        ints.push_back(mn + msd * 2);
        ints.push_back(mn + msd * 5);
        ints.push_back(mn + msd * 7);
    }
    if (range == 2 || range == 4 || range == 8) {
        ints.push_back(mn);
        ints.push_back(mn + msd * range / 4);
        ints.push_back(mn + msd * range / 2);
        ints.push_back(mn + msd * 3 * range / 4);
        ints.push_back(mn + msd * range);
    }
    if (range == 1 || range == 5 || range == 10) {
        ints.push_back(mn);
        ints.push_back(mn + msd * range / 5);
        ints.push_back(mn + msd * 2 * range / 5);
        ints.push_back(mn + msd * 3 * range / 5);
        ints.push_back(mn + msd * 4 * range / 5);
        ints.push_back(mn + msd * range);
    }
    if (toD) {
        intervalsD = ints;
    } else {
        intervals = ints;
    }
}

void LoadIntervalsDialog::applyAmountMethod(double mn, double mx, bool toD) {
    double intL;
    intL = (mx - mn) / (toD ? ui->amount_2->value() : ui->amount->value())* 1.00000000001;
    for (double cur = mn; cur - intL < mx; cur += intL) {
        if (toD) {
            intervalsD.push_back(cur);
        } else {
            intervals.push_back(cur);
        }
    }
}


void LoadIntervalsDialog::on_applyButton_clicked()
{
    this->close();
}

void LoadIntervalsDialog::updateOld() {
    oldIntervals = intervals;
    oldIntervalsD = intervalsD;
}


void LoadIntervalsDialog::on_generateButton_2_clicked()
{
    intervalsD.clear();
    double mx = *std::max_element(tsD.begin(), tsD.end()) + ui->d2_2->value();
    double mn = 0;
    if (mx == mn) {
        mx += 0.5;
    }
    if (ui->generationMethod_2->currentIndex() == 0) {
        applyDistributionBasedLengthMethod(mn, mx, true);
    }
    if (ui->generationMethod_2->currentIndex() == 1) {
        applyAverageBasedLengthMethod(mn, mx, true);
    }
    if (ui->generationMethod_2->currentIndex() == 2) {
        applyHalfAverageBasedLengthMethod(mn, mx, true);
    }
    if (ui->generationMethod_2->currentIndex() == 4) {
        applyAmountMethod(mn, mx, true);
    }
    if (ui->generationMethod_2->currentIndex() == 3) {
        applyNaturalPartitionMethod(mn, mx, true);
    }
    UpdateData();
}

void LoadIntervalsDialog::setFT(bool f) {
    ui->tabWidget->setTabEnabled(1, f);
}



void LoadIntervalsDialog::on_LoadIntervalsDialog_rejected()
{
    haveChanged = intervals != oldIntervals;
    haveChangedD = intervalsD != oldIntervalsD;
    oldIntervals = intervals;
    oldIntervalsD = intervalsD;
    emit intervalsLoaded();
}

double LoadIntervalsDialog::getD1() {
    return ui->d1->value();
}

double LoadIntervalsDialog::getD2() {
    return ui->d2->value();
}

double LoadIntervalsDialog::getD() {
    return ui->d2_2->value();
}

void LoadIntervalsDialog::setD1(double d) {
    ui->d1->setValue(d);
}

void LoadIntervalsDialog::setD2(double d) {
    ui->d2->setValue(d);
}

void LoadIntervalsDialog::setD(double d) {
    ui->d2_2->setValue(d);
}

void LoadIntervalsDialog::retranslate() {
    ui->retranslateUi(this);
}


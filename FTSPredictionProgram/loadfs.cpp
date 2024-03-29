#include "loadfs.h"
#include "ui_loadfs.h"
#include "doubleformatter.h"

LoadFS::LoadFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoadFS)
{
    ui->setupUi(this);
}

LoadFS::~LoadFS()
{
    delete ui;
}

void LoadFS::clear() {
    ts.clear();
    intervals.clear();
    fss.clear();
    oldFss.clear();
    fssD.clear();
    oldFssD.clear();
    ui->data->setText(QString());
    ui->data_2->setText(QString());
}

void LoadFS::clearFTS() {
    ts.clear();
    intervals.clear();
    fss.clear();
    oldFss.clear();
    ui->data->setText(QString());

}

void LoadFS::clearFT() {
    ts.clear();
    intervals.clear();
    fssD.clear();
    oldFssD.clear();
    ui->data_2->setText(QString());
}

void LoadFS::UpdateData() {
    std::string data;
    if (fss.size() <= 400) {
        for(size_t i = 0; i < fss.size(); ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < fss[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fss[i][j], 3) + (j + 1 == fss[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
    } else {
        for(size_t i = 0; i < 200; ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < 200; ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fss[i][j], 3) + (j + 1 == fss[i].size() ? "" : ",\t");
            }
            data += "...,\t";
            for (size_t j = fss[i].size() - 200; j < fss[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fss[i][j], 3) + (j + 1 == fss[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
        data += "...........................\n\n";
        for(size_t i = fss.size() - 200; i < fss.size(); ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < 200; ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fss[i][j], 3) + (j + 1 == fss[i].size() ? "" : ",\t");
            }
            data += "...,\t";
            for (size_t j = fss[i].size() - 200; j < fss[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fss[i][j], 3) + (j + 1 == fss[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
    }

    ui->data->document()->setPlainText(QString::fromStdString(data));


    data = "";
    if (fssD.size() <= 400) {
        for(size_t i = 0; i < fssD.size(); ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < fssD[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fssD[i][j], 3) + (j + 1 == fssD[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
    } else {
        for(size_t i = 0; i < 200; ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < 200; ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fssD[i][j], 3) + (j + 1 == fssD[i].size() ? "" : ",\t");
            }
            data += "...,\t";
            for (size_t j = fssD[i].size() - 200; j < fssD[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fssD[i][j], 3) + (j + 1 == fssD[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
        data += "...........................\n\n";
        for(size_t i = fssD.size() - 200; i < fssD.size(); ++i) {
            data += "A" + std::to_string(i + 1) + " =\t{";
            for (size_t j = 0; j < 200; ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fssD[i][j], 3) + (j + 1 == fssD[i].size() ? "" : ",\t");
            }
            data += "...,\t";
            for (size_t j = fssD[i].size() - 200; j < fssD[i].size(); ++j) {
                data += "u" + std::to_string(j+1) + "/" + DoubleFormatter::format(fssD[i][j], 3) + (j + 1 == fssD[i].size() ? "" : ",\t");
            }
            data += "}\n\n";
        }
    }

    ui->data_2->document()->setPlainText(QString::fromStdString(data));
}

void LoadFS::on_fuzzifyButton_clicked()
{
    if (ui->fuzzifyMethod->currentIndex() == 0) {
        size_t ints = intervals.size() - 1;
        fss = std::vector<std::vector<double>>(ints, std::vector<double>(ints));
        fss[0][0] = 1;
        fss[ints - 1][ints - 1] = 1;
        if (ints > 1) {
            fss[0][1] = 0.5;
            fss[ints - 1][ints - 2] = 0.5;
        }
        for (size_t i = 1; i + 1 < ints; ++i) {
            fss[i][i-1] = 0.5;
            fss[i][i] = 1;
            fss[i][i+1] = 0.5;
        }

    }
    if (ui->fuzzifyMethod->currentIndex() == 1) {
        size_t ints = intervals.size() - 1;
        fss = std::vector<std::vector<double>>(ints, std::vector<double>(ints));
        for (int64_t i = 0; i < ints; ++i) {
            if (i - 3 >= 0) {
                fss[i][i-3] = 0.25;
            }
            if (i - 2 >= 0) {
                fss[i][i-2] = 0.5;
            }
            if (i - 1 >= 0) {
                fss[i][i-1] = 0.75;
            }
            fss[i][i] = 1;
            if (i + 1 < ints) {
                fss[i][i+1] = 0.75;
            }
            if (i + 2 < ints) {
                fss[i][i+2] = 0.5;
            }
            if (i + 3 < ints) {
                fss[i][i+3] = 0.25;
            }
        }
    }
    UpdateData();
}


void LoadFS::on_applyButton_clicked()
{
    this->close();
}

void LoadFS::updateOld() {
    oldFss = fss;
    oldFssD = fssD;
}


void LoadFS::on_fuzzifyButton_2_clicked()
{
    if (ui->fuzzifyMethod_2->currentIndex() == 0) {
        size_t ints = intervalsD.size() - 1;
        fssD = std::vector<std::vector<double>>(ints, std::vector<double>(ints));
        fssD[0][0] = 1;
        fssD[ints - 1][ints - 1] = 1;
        if (ints > 1) {
            fssD[0][1] = 0.5;
            fssD[ints - 1][ints - 2] = 0.5;
        }
        for (size_t i = 1; i + 1 < ints; ++i) {
            fssD[i][i-1] = 0.5;
            fssD[i][i] = 1;
            fssD[i][i+1] = 0.5;
        }

    }
    if (ui->fuzzifyMethod_2->currentIndex() == 1) {
        size_t ints = intervalsD.size() - 1;
        fssD = std::vector<std::vector<double>>(ints, std::vector<double>(ints));
        for (int64_t i = 0; i < ints; ++i) {
            if (i - 3 >= 0) {
                fssD[i][i-3] = 0.25;
            }
            if (i - 2 >= 0) {
                fssD[i][i-2] = 0.5;
            }
            if (i - 1 >= 0) {
                fssD[i][i-1] = 0.75;
            }
            fssD[i][i] = 1;
            if (i + 1 < ints) {
                fssD[i][i+1] = 0.75;
            }
            if (i + 2 < ints) {
                fssD[i][i+2] = 0.5;
            }
            if (i + 3 < ints) {
                fssD[i][i+3] = 0.25;
            }
        }
    }
    UpdateData();
}

void LoadFS::setFT(bool f, int n) {
    ui->tabWidget->setTabEnabled(n, f);
}


void LoadFS::on_LoadFS_rejected()
{
    haveChanged = oldFss != fss || oldFssD != fssD;
    oldFss = fss;
    oldFssD = fssD;
    emit fssGot();
}

void LoadFS::retranslate() {
    ui->retranslateUi(this);
}

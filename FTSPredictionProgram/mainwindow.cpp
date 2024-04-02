#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "doubleformatter.h"

#include <set>
#include <utility>
#include <fstream>
#include <algorithm>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->showMaximized();
    loadDataWindow = new LoadDataWindow();
    loadDataWindow->setModal(true);
    loadIntervalsDialog = new LoadIntervalsDialog();
    loadIntervalsDialog->setModal(true);
    loadFS = new LoadFS();
    loadFS->setModal(true);
    showDataDialog = new ShowDataDialog();
    showDataDialog->setModal(true);
    makeNoteWindow = new MakeNoteWindow();
    makeNoteWindow->setModal(true);
    helpDialog = new HelpDialog();
    helpDialog->setModal(true);
    connect(loadDataWindow, &LoadDataWindow::dataLoaded, this, &MainWindow::dataLoaded);
    connect(loadIntervalsDialog, &LoadIntervalsDialog::intervalsLoaded, this, &MainWindow::intervalsLoaded);
    connect(loadFS, &LoadFS::fssGot, this, &MainWindow::fssGot);
    connect(ui->saveAction, SIGNAL(triggered()), this, SLOT(onMenuSave()));
    connect(ui->saveAsAction, SIGNAL(triggered()), this, SLOT(onMenuSaveAs()));
    connect(ui->openAction, SIGNAL(triggered()), this, SLOT(onMenuLoad()));
    connect(ui->helpAction, SIGNAL(triggered()), this, SLOT(openHelp()));
    wGraphic = ui->graph;
    wGraphic->addGraph(wGraphic->xAxis, wGraphic->yAxis);
    wGraphic->addGraph(wGraphic->xAxis, wGraphic->yAxis);
    wGraphic->addGraph(wGraphic->xAxis, wGraphic->yAxis);
    QPen inputTsGraph = QPen(Qt::blue);
    inputTsGraph.setWidth(2);
    QPen predictedTsGraph = QPen(Qt::green);
    predictedTsGraph.setWidth(2);
    QPen predictedOverTsGraph = QPen(Qt::red);
    predictedOverTsGraph.setWidth(2);
    wGraphic->graph(0)->setPen(inputTsGraph);
    wGraphic->graph(1)->setPen(predictedTsGraph);
    wGraphic->graph(2)->setPen(predictedOverTsGraph);
    wGraphic->legend->setVisible(true);
    QActionGroup* predictMethod = new QActionGroup(this);
    predictMethod->addAction(ui->predictFTS);
    predictMethod->addAction(ui->predictWithFT);
    QActionGroup* language = new QActionGroup(this);
    language->addAction(ui->actionEnglish);
    language->addAction(ui->actionRussian);
    std::ifstream in("settings");
    bool method;
    bool languageS;
    in>>method>>languageS;
    ui->predictFTS->setChecked(method);
    ui->predictWithFT->setChecked(!method);
    ui->actionRussian->setChecked(languageS);
    ui->actionEnglish->setChecked(!languageS);
    if (ui->actionEnglish->isChecked()) {
        translator.load(QString(":/i18n/FTSPredictionProgram_en_US"));
        wGraphic->graph(0)->setName("Initial series");
        wGraphic->graph(1)->setName("Predicted value");
        wGraphic->graph(2)->setName("Predicted values\nof initial TS");
    } else {
        translator.load(QString(":/i18n/FTSPredictionProgram_ru_RU"));
        wGraphic->graph(0)->setName("Введённый ряд");
        wGraphic->graph(1)->setName("Предсказанное значение");
        wGraphic->graph(2)->setName("Предсказанные значения\nизначального ВР");
    }

    retranslate();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showGraph() {
    // Input
    double mx = 0;
    double mn = 0;
    if (!loadDataWindow->ts.empty()){
        QVector<double> x(loadDataWindow->ts.size()), y(loadDataWindow->ts.size());
        for (size_t i = 0; i < loadDataWindow->ts.size(); ++i) {
            x[i] = i + 1;
            y[i] = loadDataWindow->ts[i];
        }
        mx = *std::max_element(loadDataWindow->ts.begin(), loadDataWindow->ts.end());
        mn = *std::min_element(loadDataWindow->ts.begin(), loadDataWindow->ts.end());
        wGraphic->graph(0)->setData(x, y);
    } else {
        wGraphic->graph(0)->data()->clear();
    }
    // Predicted
    if (!predictedTs.empty()){
        mx = std::max(mx, *std::max_element(predictedTs.begin(), predictedTs.end()));
        mn = std::min(mn,*std::min_element(predictedTs.begin(), predictedTs.end()));
        QVector<double> x = QVector<double>(predictedTs.size() + 1);
        QVector<double> y = QVector<double>(predictedTs.size() + 1);
        x[0] = loadDataWindow->ts.size();
        y[0] = loadDataWindow->ts[loadDataWindow->ts.size() - 1];
        for (size_t i = 0; i < predictedTs.size(); ++i) {
            x[i + 1] = i + 1 + loadDataWindow->ts.size();
            y[i + 1] = predictedTs[i];
        }
        wGraphic->graph(1)->setData(x, y);
    } else {
        wGraphic->graph(1)->data()->clear();
    }
    if (!predictedOverTs.empty()) {
        mx = std::max(mx, *std::max_element(predictedOverTs.begin(), predictedOverTs.end()));
        mn = std::min(mn, *std::min_element(predictedOverTs.begin(), predictedOverTs.end()));
        QVector<double> x(predictedOverTs.size());
        for (size_t i = 0; i < predictedOverTs.size(); ++i) {
            x[i] = i + 2 + ui->predictWithFT->isChecked();
        }
        wGraphic->graph(2)->setData(x, predictedOverTs);
    } else {
        wGraphic->graph(2)->data()->clear();
    }
    if (mx == mn) {
        if (mx == 0) {
            mx += 0.5;
            mn -= 0.5;
        } else {
            mn += 0.1 * mx;
            mx += 0.1 * mx;
        }
    } else {
        double dist = mx - mn;
        mn -= 0.1 * dist;
        mx += 0.1 * dist;
    }
    if (!loadDataWindow->ts.empty() || !predictedTs.empty() || !predictedOverTs.empty()) {
        wGraphic->xAxis->setRange(0.5, (loadDataWindow->ts.size() + predictedTs.size()) * 1.2);
        wGraphic->yAxis->setRange(mn, mx);
    }
    wGraphic->replot();
}

void MainWindow::fitToStatus() {
    bool afterData = false;
    bool afterFss = false;
    bool afterPredict = false;
    if (pStatus == NO_DATA_LOADED) {
        loadDataWindow->clear();
        predictedTs.clear();
        predictedOverTs.clear();
        loadIntervalsDialog->clear();
        loadFS->clear();
        loadFS->setFT(false, 0);
        loadFS->setFT(false, 1);
        ftsOut = "";
        traceOut = "";
        ui->predictedValue->setValue(0);
        ui->average->setValue(0);
        ui->median->setValue(0);
        ui->max->setValue(0);
        ui->min->setValue(0);
        ui->outputAccuracy->setValue(0);
    }
    if (pStatus == DATA_LOADING) {
        predictedTs.clear();
        predictedOverTs.clear();
        loadIntervalsDialog->clear();
        ui->outputAccuracy->setValue(0);
        loadFS->clear();
        loadFS->setFT(false, 0);
        loadFS->setFT(false, 1);
        ftsOut = "";
        traceOut = "";
        ui->predictedValue->setValue(0);
    }
    if (pStatus == DATA_LOADED) {
        predictedTs.clear();
        predictedOverTs.clear();
        loadIntervalsDialog->clear();
        loadFS->clear();
        loadFS->setFT(false, 0);
        loadFS->setFT(false, 1);
        ui->outputAccuracy->setValue(0);
        ftsOut = "";
        traceOut = "";
        ui->predictedValue->setValue(0);
        afterData = true;
    }
    if (pStatus == FS_LOADING) {
        predictedTs.clear();
        predictedOverTs.clear();
        ui->outputAccuracy->setValue(0);
        ftsOut = "";
        traceOut = "";
        ui->predictedValue->setValue(0);
        afterData = true;
    }
    if (pStatus == FS_LOADED) {
        predictedTs.clear();
        predictedOverTs.clear();
        ui->outputAccuracy->setValue(0);
        ftsOut = "";
        traceOut = "";
        ui->predictedValue->setValue(0);
        afterData = true;
        afterFss = true;
    }
    if (pStatus == PREDICTED) {
        if (!predictedTs.empty()) {
            ui->predictedValue->setValue(predictedTs[0]);
        } else {
            ui->predictedValue->setValue(0);
        }

        afterData = true;
        afterFss = true;
        afterPredict = true;
    }
    ui->getIntervals->setEnabled(afterData);
    ui->getFS->setEnabled(afterData);
    ui->predictButton->setEnabled(afterFss);
    ui->metric->setEnabled(afterFss);
    ui->defuzzificationMethod->setEnabled(afterFss);
    ui->traceButton->setEnabled(afterPredict);
    ui->resultsButton->setEnabled(afterPredict);
    ui->fuzzifyedDataButton->setEnabled(afterPredict);
    showGraph();
}

void MainWindow::on_getData_clicked()
{
    loadDataWindow->setEnglish(ui->actionEnglish->isChecked());
    loadDataWindow->UpdateData();
    loadDataWindow->show();
}


void MainWindow::on_getIntervals_clicked()
{
    loadIntervalsDialog->setFT(ui->predictWithFT->isChecked());
    loadIntervalsDialog->setMaxMin(ui->min->value(), ui->max->value(), *std::max_element(tsD.begin(), tsD.end()));
    loadIntervalsDialog->ts = loadDataWindow->ts;
    loadIntervalsDialog->tsD = tsD;
    loadIntervalsDialog->UpdateData();
    loadIntervalsDialog->show();
}

void MainWindow::dataLoaded() {
    if (loadDataWindow->haveChanged) {
        pStatus = DATA_LOADED;
        if (loadDataWindow->ts.size() < 3) {
            pStatus = DATA_LOADING;
        }
        tsD.clear();
        for (size_t i = 0; i + 1 < loadDataWindow->ts.size(); ++i) {
            tsD.push_back(std::abs(loadDataWindow->ts[i] - loadDataWindow->ts[i+1]));
        }
    }
    calcStats();
    fitToStatus();
}

void MainWindow::calcStats() {
    ui->min->setValue(loadDataWindow->ts.empty() ? 0 : *std::min_element(loadDataWindow->ts.begin(), loadDataWindow->ts.end()));
    ui->max->setValue(loadDataWindow->ts.empty() ? 0 : *std::max_element(loadDataWindow->ts.begin(), loadDataWindow->ts.end()));
    if (!loadDataWindow->ts.empty()) {
        std::vector<double> ts = loadDataWindow->ts;
        std::sort(ts.begin(), ts.end());
        double sum = 0;
        for (double el : ts) {
            sum += el;
        }
        ui->average->setValue(sum / ts.size());
        if (ts.size() % 2 == 1) {
            ui->median->setValue(ts[ts.size() / 2]);
        } else {
            ui->median->setValue((ts[ts.size() / 2 - 1] + ts[ts.size() / 2]) / 2);
        }
    }
}


void MainWindow::intervalsLoaded() {
    if (ui->predictWithFT->isChecked()) {
        loadFS->setFT(!loadIntervalsDialog->intervals.empty(), 0);
        loadFS->setFT(!loadIntervalsDialog->intervalsD.empty(), 1);
    }
    if (loadIntervalsDialog->haveChanged) {
        loadFS->clearFTS();
    }
    if (loadIntervalsDialog->haveChangedD) {
        loadFS->clearFT();
    }
    if (loadIntervalsDialog->haveChanged || (loadIntervalsDialog->haveChangedD && ui->predictWithFT->isChecked())) {
        pStatus = FS_LOADING;
    }
    fitToStatus();
}


void MainWindow::on_getFS_clicked()
{
    loadFS->setFT(!loadIntervalsDialog->intervals.empty(), 0);
    loadFS->setFT(!loadIntervalsDialog->intervalsD.empty(), 1);
    loadFS->ts = loadDataWindow->ts;
    loadFS->intervals = loadIntervalsDialog->intervals;
    loadFS->tsD = tsD;
    loadFS->intervalsD = loadIntervalsDialog->intervalsD;
    loadFS->UpdateData();
    loadFS->show();
}

void MainWindow::fssGot() {
    if (loadFS->haveChanged) {
        if (!loadFS->fss.empty() && (!loadFS->fssD.empty() || !ui->predictWithFT->isChecked())) {
            pStatus = FS_LOADED;
        } else {
            pStatus = FS_LOADING;
        }
    }
    fitToStatus();
}

void MainWindow::on_predictButton_clicked()
{
    if (!ui->predictWithFT->isChecked()) {
        MainWindow::predictFts();
    } else {
        predictFT();
    }
    pStatus = PREDICTED;
    fitToStatus();
}

double MainWindow::defuzzifySong(std::vector<double> fs, const std::vector<double>& intervals) {
    double mx = fs[0];
    for (double memb : fs) {
        mx = std::max(mx, memb);
    }
    size_t mxCount = 0;
    int64_t mxStart = -1;
    int64_t mxEnd = -1;
    bool isConsecutive = true;
    for (int64_t i = 0; i < fs.size(); ++i) {
        if (fs[i] == mx) {
            ++mxCount;
            if (mxStart == -1) {
                mxStart = i;
            }
        }
        if (fs[i] != mx && mxStart != -1 && mxEnd == -1) {
            mxEnd = i;
        }
        if (fs[i] == mx && mxEnd != -1) {
            isConsecutive = false;
        }
    }
    if (mxEnd == -1) {
        mxEnd = fs.size();
    }
    if (mxCount == 1) {
        return (intervals[mxStart] + intervals[mxStart + 1]) / 2;
    }
    if (isConsecutive) {
        return (intervals[mxEnd] + intervals[mxStart]) / 2;
    }
    return defuzzifyCentroid(fs, intervals);

}

double MainWindow::defuzzifyCentroid(std::vector<double> fs, const std::vector<double>& intervals) {
    double normCf = 0;
    for (double membership : fs) {
        normCf += membership;
    }
    for (size_t i = 0; i < fs.size(); ++i) {
        fs[i] /= normCf;
    }
    double predValue = 0;
    for (size_t i = 0; i < fs.size(); ++i) {
        predValue += fs[i] * (intervals[i] + intervals[i + 1]) / 2;
    }
    return predValue;
}

void MainWindow::predictFT() {
    traceOut = "Ряд нечётних значений, характеризующих падение / стабильность / рост:\n";
    std::vector<size_t> xToInt(loadDataWindow->ts.size());
    std::vector<std::vector<double>> v(tsD.size(), std::vector<double>(3));
    std::vector<std::vector<double>> a;
    for (size_t i = 0; i < loadDataWindow->ts.size(); ++i) {
        for (size_t j = 0; j + 1 < loadIntervalsDialog->intervals.size(); ++j) {
            if (loadIntervalsDialog->intervals[j + 1] > loadDataWindow->ts[i]) {
                xToInt[i] = j;
                break;
            }
        }
    }
    for (size_t i = 0; i < v.size(); ++i) {
        if (xToInt[i] == xToInt[i+1]) {
            v[i][0] = 0.5;
            v[i][1] = 1;
            v[i][2] = 0.5;
        }
        if (xToInt[i] < xToInt[i+1]) {
            v[i][0] = 0;
            v[i][1] = 0.5;
            v[i][2] = 1;
        }
        if (xToInt[i] > xToInt[i+1]) {
            v[i][0] = 1;
            v[i][1] = 0.5;
            v[i][2] = 0;
        }
    }
    ftsOut = "Ряд нечётних значений, характеризующих падение / стабильность / рост:\n";
    for (size_t i = 0; i < v.size(); ++i) {
        ftsOut+=std::to_string(i + 1) + ":\t";
        for (double memb: v[i]) {
            ftsOut += DoubleFormatter::format(memb, 3) + "\t";
        }
        ftsOut += '\n';
    }
    ftsOut += "\nРяд абслоютных значений первых разностей:\n";
    ftsOut += "Значение:\t";
    for (size_t i = 0; i < loadFS->fssD.size(); ++i){
        ftsOut+= 'A' + std::to_string(i + 1) + '\t';
    }
    ftsOut += '\n';
    for (double el : tsD) {
        size_t int_i = 0;
        while (loadIntervalsDialog->intervalsD[int_i + 1] < el) {
            ++int_i;
        }
        ftsOut += DoubleFormatter::format(el, 3) + ":\t";
        std::vector<double> membership(loadIntervalsDialog->intervalsD.size() - 1, 0);
        for (size_t i = 0; i < loadIntervalsDialog->intervalsD.size() - 1; ++i) {
            if (loadFS->fssD[i][int_i] == 1) {
                membership[i] = 1;
                ftsOut += DoubleFormatter::format(membership[i], 3) + '\t';
                continue;
            }
            if (int_i == 0) {
                membership[i] = (el - loadIntervalsDialog->intervalsD[int_i]) * (loadFS->fssD[i][1] - loadFS->fssD[i][0]) /
                                    (loadIntervalsDialog->intervalsD[int_i + 1] - loadIntervalsDialog->intervalsD[int_i]) + loadFS->fssD[i][0];
                ftsOut += DoubleFormatter::format(membership[i], 3) + '\t';
                continue;
            }
            if (loadFS->fssD[i][int_i - 1] < loadFS->fssD[i][int_i]) {
                membership[i] = (el - loadIntervalsDialog->intervalsD[int_i]) * (loadFS->fssD[i][int_i + 1] - loadFS->fssD[i][int_i]) /
                                    (loadIntervalsDialog->intervalsD[int_i + 1] - loadIntervalsDialog->intervalsD[int_i]) + loadFS->fssD[i][int_i];
                ftsOut += DoubleFormatter::format(membership[i], 3) + '\t';
                continue;
            }
            if (loadFS->fssD[i][int_i - 1] > loadFS->fssD[i][int_i]) {
                membership[i] = (el - loadIntervalsDialog->intervalsD[int_i]) * (loadFS->fssD[i][int_i] - loadFS->fssD[i][int_i - 1]) /
                                    (loadIntervalsDialog->intervalsD[int_i + 1] - loadIntervalsDialog->intervalsD[int_i]) + loadFS->fssD[i][int_i - 1];
            }
            ftsOut += DoubleFormatter::format(membership[i], 3) + '\t';
        }
        ftsOut += '\n';
        a.push_back(membership);
    }
    traceOut += "Отношения:\n";
    predictedTs = std::vector<double>(0);
    std::set<std::pair<size_t, size_t>> relationV;
    for (size_t i = 0; i + 1 < v.size(); ++i) {
        size_t fs1 = 0;
        size_t fs2 = 0;
        for (size_t j = 0; j < v[i].size(); ++j) {
            if (v[i][fs1] < v[i][j]) {
                fs1 = j;
            }
            if (v[i + 1][fs2] < v[i + 1][j]) {
                fs2 = j;
            }
        }
        relationV.insert({fs1, fs2});
    }
    for (const auto& rel: relationV) {
        traceOut += "V" + std::to_string(rel.first) + " -> V" + std::to_string(rel.second) + '\n';
    }
    traceOut += '\n';
    std::vector<std::vector<double>> fssV = {{1, 0.5, 0}, {0.5, 1, 0.5}, {0, 0.5, 1}};
    std::vector<std::vector<double>> rV(3, std::vector<double>(3, 0));
    for (auto& rel : relationV) {
        for (size_t i = 0; i < fssV.size(); ++i) {
            for (size_t j = 0; j < fssV.size(); ++j) {
                rV[i][j] = std::max(rV[i][j], std::min(fssV[rel.first][i], fssV[rel.second][j]));
            }
        }
    }
    traceOut += "Rv = \n";
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            traceOut += DoubleFormatter::format(rV[i][j],3) + "\t";
        }
        traceOut += '\n';
    }
    std::vector<double> newV(3, 0);
    for (size_t i = 0; i < 3; ++i) {
        for (size_t j = 0; j < 3; ++j) {
            newV[j] = std::max(newV[j], std::min(rV[i][j], v[v.size() - 1][i]));
        }
    }
    int newVValue = 0;
    double mx = *std::max_element(newV.begin(), newV.end());
    int sum = 0;
    traceOut += "\nФаззифицированное предсказанное V: ";
    for (double memb: newV) {
        traceOut += DoubleFormatter::format(memb, 3) + ' ';
    }
    traceOut += '\n';
    for (int64_t i = 0; i < 3; ++i) {
        if (newV[i] == mx) {
            sum += i - 1;
        }
    }
    if (sum < 0) {
        newVValue = -1;
    }
    if (sum > 0) {
        newVValue = 1;
    }
    if (sum == 0) {
        newVValue = 0;
    }
    traceOut += "\nПредсказанное значение V: " + DoubleFormatter::format(newVValue, 3) + '\n';
    std::set<std::pair<size_t, size_t>> relationA;
    for (size_t i = 0; i + 1 < a.size(); ++i) {
        size_t fs1 = 0;
        size_t fs2 = 0;
        for (size_t j = 0; j < a[i].size(); ++j) {
            if (a[i][fs1] < a[i][j]) {
                fs1 = j;
            }
            if (a[i + 1][fs2] < a[i + 1][j]) {
                fs2 = j;
            }
        }
        relationA.insert({fs1, fs2});
    }
    traceOut += "\nРяд абслоютных значений первых разностей:\n\nОтношения:\n";
    std::vector<std::vector<double>> rA(loadFS->fssD.size(), std::vector<double>(loadFS->fssD.size(), 0));
    for (auto& rel : relationA) {
        traceOut += 'A' + std::to_string(rel.first) + " -> A" + std::to_string(rel.second) + '\n';
        for (size_t i = 0; i < loadFS->fssD.size(); ++i) {
            for (size_t j = 0; j < loadFS->fssD.size(); ++j) {
                rA[i][j] = std::max(rA[i][j], std::min(loadFS->fssD[rel.first][i], loadFS->fssD[rel.second][j]));
            }
        }
    }
    traceOut += "\nRa = \n";
    for (size_t i = 0; i < rA.size(); ++i) {
        for (size_t j = 0; j < rA.size(); ++j) {
            traceOut += DoubleFormatter::format(rA[i][j],3) + "\t";
        }
        traceOut += '\n';
    }
    std::vector<double> newA(loadFS->fssD.size(), 0);
    for (size_t i = 0; i < loadFS->fssD.size(); ++i) {
        for (size_t j = 0; j < loadFS->fssD.size(); ++j) {
            newA[j] = std::max(newA[j], std::min(rA[i][j], a[a.size() - 1][i]));
        }
    }
    traceOut += "\nФаззифицированное предсказанное A: ";
    for (double memb : newA) {
        traceOut += DoubleFormatter::format(memb, 3) + " ";
    }
    traceOut += '\n';
    double newAValue = 0;
    if (ui->defuzzificationMethod->currentIndex() == 0) {
        newAValue = defuzzifySong(newA, loadIntervalsDialog->intervalsD);
    }
    if (ui->defuzzificationMethod->currentIndex() == 1) {
        newAValue = defuzzifyCentroid(newA, loadIntervalsDialog->intervalsD);
    }
    traceOut += "\nПредсказанное значение A: " + DoubleFormatter::format(newAValue, 3) + '\n';
    predictedTs.push_back(newAValue * newVValue + loadDataWindow->ts[loadDataWindow->ts.size() - 1]);
    predictedOverTs.clear();
    for (size_t pr = 0; pr + 1 < tsD.size(); ++pr) {
        newV = std::vector<double>(3, 0);
        for (size_t i = 0; i < 3; ++i) {
            for (size_t j = 0; j < 3; ++j) {
                newV[j] = std::max(newV[j], std::min(rV[i][j], v[pr][i]));
            }
        }
        mx = *std::max_element(newV.begin(), newV.end());
        sum = 0;
        for (int64_t i = 0; i < 3; ++i) {
            if (newV[i] == mx) {
                sum += i - 1;
            }
        }
        if (sum < 0) {
            newVValue = -1;
        }
        if (sum > 0) {
            newVValue = 1;
        }
        if (sum == 0) {
            newVValue = 0;
        }
        newA = std::vector<double>(loadFS->fssD.size(), 0);
        for (size_t i = 0; i < loadFS->fssD.size(); ++i) {
            for (size_t j = 0; j < loadFS->fssD.size(); ++j) {
                newA[j] = std::max(newA[j], std::min(rA[i][j], a[pr][i]));
            }
        }
        if (ui->defuzzificationMethod->currentIndex() == 0) {
            newAValue = defuzzifySong(newA, loadIntervalsDialog->intervalsD);
        }
        if (ui->defuzzificationMethod->currentIndex() == 1) {
            newAValue = defuzzifyCentroid(newA, loadIntervalsDialog->intervalsD);
        }
        predictedOverTs.push_back(newAValue * newVValue + loadDataWindow->ts[pr + 1]);
    }
    double error = 0;
    for (size_t i = 0; i < predictedOverTs.size(); ++i) {
        if (ui->metric->currentIndex() == 0 || ui->metric->currentIndex() == 1) {
            error += (predictedOverTs[i] - loadDataWindow->ts[i + 2]) * (predictedOverTs[i] - loadDataWindow->ts[i + 2]);
        }
        if (ui->metric->currentIndex() == 2 || ui->metric->currentIndex() == 4) {
            error += std::abs(predictedOverTs[i] - loadDataWindow->ts[i + 2]);
        }
        if (ui->metric->currentIndex() == 3) {
            error += std::abs(predictedOverTs[i] - loadDataWindow->ts[i + 2]) / std::abs(loadDataWindow->ts[i + 2]);
        }
    }
    error /= loadDataWindow->ts.size() - 1;
    if (ui->metric->currentIndex() == 1) {
        error = std::sqrt(error);
    }
    if (ui->metric->currentIndex() == 4) {
        double maseDenom = 0;
        for (size_t i = 0; i + 1 < loadDataWindow->ts.size(); ++i) {
            maseDenom += std::abs(loadDataWindow->ts[i] - loadDataWindow->ts[i+1]);
        }
        maseDenom /= loadDataWindow->ts.size() - 1;
        error /= maseDenom;
    }
    ui->outputAccuracy->setValue(error);
}

void MainWindow::predictFts() {
    // Fuzzify
    std::vector<std::vector<double>> fts;
    for (double el : loadDataWindow->ts) {
        size_t int_i = 0;
        while (loadIntervalsDialog->intervals[int_i + 1] < el) {
            ++int_i;
        }
        std::vector<double> membership(loadIntervalsDialog->intervals.size() - 1, 0);
        for (size_t i = 0; i < loadIntervalsDialog->intervals.size() - 1; ++i) {
            if (loadFS->fss[i][int_i] == 1) {
                membership[i] = 1;
                continue;
            }
            if (int_i == 0) {
                membership[i] = (el - loadIntervalsDialog->intervals[int_i]) * (loadFS->fss[i][1] - loadFS->fss[i][0]) /
                                    (loadIntervalsDialog->intervals[int_i + 1] - loadIntervalsDialog->intervals[int_i]) + loadFS->fss[i][0];
                continue;
            }
            if (loadFS->fss[i][int_i - 1] < loadFS->fss[i][int_i]) {
                membership[i] = (el - loadIntervalsDialog->intervals[int_i]) * (loadFS->fss[i][int_i + 1] - loadFS->fss[i][int_i]) /
                                    (loadIntervalsDialog->intervals[int_i + 1] - loadIntervalsDialog->intervals[int_i]) + loadFS->fss[i][int_i];
                continue;
            }
            if (loadFS->fss[i][int_i - 1] > loadFS->fss[i][int_i]) {
                membership[i] = (el - loadIntervalsDialog->intervals[int_i]) * (loadFS->fss[i][int_i] - loadFS->fss[i][int_i - 1]) /
                                    (loadIntervalsDialog->intervals[int_i + 1] - loadIntervalsDialog->intervals[int_i]) + loadFS->fss[i][int_i - 1];
            }

        }
        fts.push_back(membership);
    }
    // Predict
    // Trace start
    traceOut = "";
    std::vector<std::vector<double>> initialR;
    predictedTs = std::vector<double>(0);
    traceOut += "Отношения:\n";
    std::set<std::pair<size_t, size_t>> relation;
    for (size_t i = 0; i + 1 < fts.size(); ++i) {
        size_t fs1 = 0;
        size_t fs2 = 0;
        for (size_t j = 0; j < fts[i].size(); ++j) {
            if (fts[i][fs1] < fts[i][j]) {
                fs1 = j;
            }
            if (fts[i + 1][fs2] < fts[i + 1][j]) {
                fs2 = j;
            }
        }
        relation.insert({fs1, fs2});
    }
    std::vector<std::vector<double>> r(loadFS->fss.size(), std::vector<double>(loadFS->fss.size(), 0));
    for (auto& rel : relation) {
        traceOut += "A" + std::to_string(rel.first + 1) + " -> A" + std::to_string(rel.second + 1) + "\n";
        for (size_t i = 0; i < loadFS->fss.size(); ++i) {
            for (size_t j = 0; j < loadFS->fss.size(); ++j) {
                r[i][j] = std::max(r[i][j], std::min(loadFS->fss[rel.first][i], loadFS->fss[rel.second][j]));
            }
        }
    }
    initialR = r;
    // Trace end
    // Output R relation
    traceOut += "\nR = \n";
    for (auto& fel: r) {
        for (double memb: fel) {
            traceOut += std::to_string(memb) + "\t";
        }
        traceOut += "\n";
    }
    std::vector<double> f_new_value(loadFS->fss.size(), 0);
    for (size_t i = 0; i < loadFS->fss.size(); ++i) {
        for (size_t j = 0; j < loadFS->fss.size(); ++j) {
            f_new_value[j] = std::max(f_new_value[j], std::min(r[i][j], fts[fts.size() - 1][i]));
        }
    }
    // Defuzzify
    fts.push_back(f_new_value);
    if (ui->defuzzificationMethod->currentIndex() == 0) {
        predictedTs.push_back(defuzzifySong(f_new_value, loadIntervalsDialog->intervals));
    }
    if (ui->defuzzificationMethod->currentIndex() == 1) {
        predictedTs.push_back(defuzzifyCentroid(f_new_value, loadIntervalsDialog->intervals));
    }
    traceOut += "\nФаззифицированное предсказанное значение: ";
    for (double memb : f_new_value) {
        traceOut += std::to_string(memb) + " ";
    }
    traceOut += "\n\nДефаззифицированное значение: " + std::to_string(predictedTs[predictedTs.size() - 1]);
    predictedOverTs.clear();
    double error = 0;
    for (size_t pred = 1; pred < loadDataWindow->ts.size(); ++pred){
        std::vector<double> f_new_value(loadFS->fss.size(), 0);
        for (size_t i = 0; i < loadFS->fss.size(); ++i) {
            for (size_t j = 0; j < loadFS->fss.size(); ++j) {
                f_new_value[j] = std::max(f_new_value[j], std::min(initialR[i][j], fts[pred - 1][i]));
            }
        }
        double value = 0;
        if (ui->defuzzificationMethod->currentIndex() == 0) {
            value = defuzzifySong(f_new_value, loadIntervalsDialog->intervals);
        }
        if (ui->defuzzificationMethod->currentIndex() == 1) {
            value = defuzzifyCentroid(f_new_value, loadIntervalsDialog->intervals);
        }
        predictedOverTs.push_back(value);
        if (ui->metric->currentIndex() == 0 || ui->metric->currentIndex() == 1) {
            error += (value - loadDataWindow->ts[pred]) * (value - loadDataWindow->ts[pred]);
        }
        if (ui->metric->currentIndex() == 2 || ui->metric->currentIndex() == 4) {
            error += std::abs(value - loadDataWindow->ts[pred]);
        }
        if (ui->metric->currentIndex() == 3) {
            error += std::abs(value - loadDataWindow->ts[pred]) / std::abs(loadDataWindow->ts[pred]);
        }
    }
    error /= loadDataWindow->ts.size() - 1;
    if (ui->metric->currentIndex() == 1) {
        error = std::sqrt(error);
    }
    if (ui->metric->currentIndex() == 4) {
        double maseDenom = 0;
        for (size_t i = 0; i + 1 < loadDataWindow->ts.size(); ++i) {
            maseDenom += std::abs(loadDataWindow->ts[i] - loadDataWindow->ts[i+1]);
        }
        maseDenom /= loadDataWindow->ts.size() - 1;
        error /= maseDenom;
    }
    ui->outputAccuracy->setValue(error);
    ftsOut = "Значение\t";
    for (size_t i = 0; i < loadFS->fss.size(); ++i) {
        ftsOut += "A" + std::to_string(i+1) + "\t";
    }
    ftsOut+='\n';
    for (size_t i = 0; i < loadDataWindow->ts.size(); ++i) {
        ftsOut += DoubleFormatter::format(loadDataWindow->ts[i], 3) + ":\t";
        for (double memb: fts[i]) {
            ftsOut += DoubleFormatter::format(memb, 3) + '\t';
        }
        ftsOut += '\n';
    }
    for (size_t i = 0; i < predictedTs.size(); ++i) {
        ftsOut += DoubleFormatter::format(predictedTs[i], 3) + ":\t";
        for (double memb: fts[i + loadDataWindow->ts.size()]) {
            ftsOut += DoubleFormatter::format(memb, 3) + '\t';
        }
        ftsOut += '\n';
    }

}


void MainWindow::on_resultsButton_clicked()
{
    std::string data = ui->actionRussian->isChecked() ? "Предсказанные значения исходного временного ряда:\n" : "Predicted values of initial time series:\n";
    for (size_t i = 0; i < predictedOverTs.size(); ++i) {
        data += std::to_string(i+2 + ui->predictWithFT->isChecked()) + ":\t" + DoubleFormatter::format(predictedOverTs[i], 3) + "\n";
    }
    data += ui->actionRussian->isChecked() ? "\nПредсказанное последующее значение:\n" : "\nPredicted next value:\n";
    for (size_t i = 0; i < predictedTs.size(); ++i) {
        data += std::to_string(i+loadDataWindow->ts.size()+1) + ":\t" + DoubleFormatter::format(predictedTs[i], 3) + "\n";
    }
    showDataDialog->setData(data);
    showDataDialog->setWindowTitle(QString(ui->actionRussian->isChecked() ? "Результаты прогнозирования" : "Prediction results"));
    showDataDialog->show();
}


void MainWindow::on_fuzzifyedDataButton_clicked()
{
    QString data = QString::fromStdString(ftsOut);
    if (ui->actionEnglish->isChecked()) {
        data.replace("Ряд нечётних значений, характеризующих падение / стабильность / рост:", "Series of fuzzy values, characterizing decrease / stability / increse:");
        data.replace("Ряд абслоютных значений первых разностей:", "Series of absolute values of the first differences:");
        data.replace("Значение", "Value");
    }
    showDataDialog->setData(data.toStdString());
    showDataDialog->setWindowTitle(QString(ui->actionRussian->isChecked() ? "Фаззифицированные данные" : "Fuzzified data"));
    showDataDialog->show();
}


void MainWindow::on_traceButton_clicked()
{
    QString data = QString::fromStdString(traceOut);
    if (ui->actionEnglish->isChecked()) {
        data.replace("Ряд нечётних значений, характеризующих падение / стабильность / рост:", "Series of fuzzy values, characterizing decrease / stability / increse:");
        data.replace("Отношения:", "Relations:");
        data.replace("Фаззифицированное предсказанное", "Fuzzified predicted");
        data.replace("Предсказанное значение", "Predicted value");
        data.replace("Ряд абслоютных значений первых разностей:", "Series of the absolute values of the first differences:");
        data.replace("Предсказанное фаззифицированное значение:", "Predicted fuzzified value:");
        data.replace("Дефаззифицированное значение:", "Defuzzified value:");
    }
    showDataDialog->setData(data.toStdString());
    showDataDialog->setWindowTitle(QString(ui->actionRussian->isChecked() ? "Ход выполнения" : "Trace"));
    showDataDialog->show();
}


void MainWindow::on_noteButton_clicked()
{
    makeNoteWindow->show();
}

void MainWindow::onMenuSave() {
    if (fileToSave == "") {
        onMenuSaveAs();
    }
    std::ofstream out(fileToSave);
    out<<loadDataWindow->ts.size()<<' ';
    for (double el : loadDataWindow->ts) {
        out<<el<<' ';
    }
    out<<' ';
    out<<predictedTs.size()<<' ';
    for (double el : predictedTs) {
        out<<el<<' ';
    }
    out<<loadIntervalsDialog->intervals.size()<<' ';
    for (double el : loadIntervalsDialog->intervals) {
        out<<el<<' ';
    }
    out<<loadFS->fss.size()<<' ';
    for (auto& fs : loadFS->fss) {
        for (double el : fs) {
            out<<el<<' ';
        }
        out<<' ';
    }
    out<<predictedOverTs.size()<<' ';
    for (double el : predictedOverTs) {
        out<<el<<' ';
    }
    // new start
    out<<ui->metric->currentIndex()<<' ';
    out<<ui->outputAccuracy->value()<<' ';
    out<<loadIntervalsDialog->getD1()<<' ';
    out<<loadIntervalsDialog->getD2()<<' ';
    out<<loadIntervalsDialog->getD()<<' ';
    out<<ui->defuzzificationMethod->currentIndex()<<' ';
    out<<static_cast<int>(ui->predictWithFT->isChecked())<<' ';
    out<<tsD.size()<<' ';
    for (double el : tsD) {
        out<<el<<' ';
    }
    out<<loadIntervalsDialog->intervalsD.size()<<' ';
    for (double el : loadIntervalsDialog->intervalsD) {
        out<<el<<' ';
    }
    out<<loadFS->fssD.size()<<' ';
    for (auto& fs : loadFS->fssD) {
        for (double el : fs) {
            out<<el<<' ';
        }
        out<<' ';
    }
    // new end
    out<<'\n';
    out<<"#FTS\n";
    out<<ftsOut<<'\n';
    out<<"#Note\n";
    out<<makeNoteWindow->getNote()<<'\n';
    out<<"#Trace\n";
    out<<traceOut<<'\n';
    out<<"#Status\n";
    out<<pStatus;
}

void MainWindow::onMenuSaveAs() {
    if (fileToSave != "") {
        onMenuSave();
    }
    std::string fileName = QFileDialog::getSaveFileName().toStdString();
    if (fileName == "") {
        return;
    }
    fileToSave = fileName;
    onMenuSave();
}

double MainWindow::getDouble(std::ifstream& in) {
    if (!in) {
        throw std::invalid_argument("Input double");
    }
    std::string input;
    in>>input;
    try {
        double res = std::stod(input);
        return res;
    } catch (const std::exception ex) {
        throw std::invalid_argument("Input double");
    }
}

size_t MainWindow::getInt(std::ifstream& in) {
    if (!in) {
        throw std::invalid_argument("Input double");
    }
    std::string input;
    in>>input;
    try {
        size_t res = std::stoull(input);
        return res;
    } catch (const std::exception ex) {
        throw std::invalid_argument("Input double");
    }
}

void MainWindow::onMenuLoad() {
    std::string fileName = QFileDialog::getOpenFileName().toStdString();
    if (fileName == "") {
        return;
    }
    std::ifstream in(fileName);
    std::vector<double> ts;
    std::vector<double> intervals;
    std::vector<std::vector<double>> fss;
    std::vector<double> predicted;
    QVector<double> predictedOver;
    std::vector<double> dTs;
    std::vector<double> intervalsD;
    std::vector<std::vector<double>> fssD;
    std::string ftsOutInput;
    std::string traceOutInput;
    std::string note;
    int stat;
    int metric;
    int defuzzificationMethod;
    int predictMehtod;
    double d1;
    double d2;
    double d;
    double accuracy;
    size_t vSize;
    try {
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            ts.push_back(el);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            predicted.push_back(el);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            intervals.push_back(el);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            std::vector<double> membership;
            for (size_t j = 0; j + 1 < intervals.size(); ++j) {
                double el;
                el = getDouble(in);
                membership.push_back(el);
            }
            fss.push_back(membership);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            predictedOver.push_back(el);
        }
        // new
        metric = getInt(in);
        accuracy = getDouble(in);
        d1 = getDouble(in);
        d2 = getDouble(in);
        d = getDouble(in);
        defuzzificationMethod = getInt(in);
        predictMehtod = getInt(in);
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            dTs.push_back(el);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            double el;
            el = getDouble(in);
            intervalsD.push_back(el);
        }
        vSize = getInt(in);
        for (size_t i = 0; i < vSize; ++i) {
            std::vector<double> membership;
            for (size_t j = 0; j + 1 < intervalsD.size(); ++j) {
                double el;
                el = getDouble(in);
                membership.push_back(el);
            }
            fssD.push_back(membership);
        }
        // end new
        std::string line;
        getline(in, line);
        getline(in, line);
        getline(in, line);
        while (line.empty() || line[0] != '#') {
            ftsOutInput+=line + '\n';
            getline(in, line);
        }
        getline(in, line);
        while (line.empty() || line[0] != '#') {
            note+=line + '\n';
            getline(in, line);
        }
        if (!note.empty()) {
            note = note.substr(0, note.size() - 1);
        }
        getline(in, line);
        while (line.empty() || line[0] != '#') {
            traceOutInput+=line + '\n';
            getline(in, line);
        }
        stat = getInt(in);
    } catch(const std::invalid_argument ex) {
        QMessageBox error;
        error.setWindowTitle(ui->actionRussian ? "Ошибка загрузки!" : "Opening error!");
        error.setText(ui->actionRussian ? "Файл имеет некорректный формат!" : "File is incorrect!");
        error.setIcon(QMessageBox::Critical);
        error.exec();
        in.close();
        return;
    } catch(const std::exception ex) {
        QMessageBox error;
        error.setWindowTitle(ui->actionRussian ? "Ошибка загрузки!" : "Opening error!");
        error.setText(ui->actionRussian ? "Файл имеет некорректный формат!" : "File is incorrect!");
        error.setIcon(QMessageBox::Critical);
        error.exec();
        in.close();
        return;
    }
    in.close();
    // Reading finished
    pStatus = NO_DATA_LOADED;
    fitToStatus();
    loadDataWindow->ts = ts;
    loadIntervalsDialog->intervals = intervals;
    loadFS->fss = fss;
    predictedOverTs = predictedOver;
    predictedTs = predicted;
    ftsOut = ftsOutInput;
    traceOut = traceOutInput;
    makeNoteWindow->setNote(note);
    tsD = dTs;
    loadIntervalsDialog->intervalsD = intervalsD;
    loadFS->fssD = fssD;
    if (stat == 0) {
        pStatus = NO_DATA_LOADED;
    }
    if (stat == 1) {
        pStatus = DATA_LOADED;
    }
    if (stat == 2) {
        pStatus = FS_LOADED;
    }
    if (stat == 3) {
        pStatus = PREDICTED;
    }
    if (stat == 4) {
        pStatus = FS_LOADING;
    }
    if (stat == 5){
        pStatus = DATA_LOADING;
    }
    ui->metric->setCurrentIndex(metric);
    ui->outputAccuracy->setValue(accuracy);
    loadIntervalsDialog->setD1(d1);
    loadIntervalsDialog->setD2(d2);
    loadIntervalsDialog->setD(d);
    ui->defuzzificationMethod->setCurrentIndex(defuzzificationMethod);
    ui->predictWithFT->setChecked(predictMehtod);
    ui->predictFTS->setChecked(!predictMehtod);
    loadDataWindow->updateOld();
    loadIntervalsDialog->updateOld();
    loadFS->updateOld();
    calcStats();
    fitToStatus();
    fileToSave = fileName;
}



void MainWindow::on_predictFTS_triggered()
{
    if (pStatus != NO_DATA_LOADED) {
        pStatus = DATA_LOADED;
    }
    fitToStatus();
    updateSettings();
}


void MainWindow::on_predictWithFT_triggered()
{
    if (pStatus != NO_DATA_LOADED) {
        pStatus = DATA_LOADED;
    }
    fitToStatus();
    updateSettings();
}

void MainWindow::updateSettings() {
    bool method =  ui->predictFTS->isChecked();
    bool language = ui->actionRussian->isChecked();
    std::ofstream out("settings");
    out<<method<<' '<<language;
    out.close();
}

void MainWindow::on_actionRussian_triggered()
{
    translator.load(QString(":/i18n/FTSPredictionProgram_ru_RU"));
    retranslate();
    wGraphic->graph(0)->setName("Введённый ряд");
    wGraphic->graph(1)->setName("Предсказанное значение");
    wGraphic->graph(2)->setName("Предсказанные значения\nизначального ВР");
    wGraphic->replot();
    updateSettings();
}


void MainWindow::on_actionEnglish_triggered()
{
    translator.load(QString(":/i18n/FTSPredictionProgram_en_US"));
    retranslate();
    wGraphic->graph(0)->setName("Initial series");
    wGraphic->graph(1)->setName("Predicted value");
    wGraphic->graph(2)->setName("Predicted values\nof initial TS");
    wGraphic->replot();
    updateSettings();
}

void MainWindow::retranslate() {
    qApp->installTranslator(&translator);
    ui->retranslateUi(this);
    loadDataWindow->retranslate();
    loadIntervalsDialog->retranslate();
    loadFS->retranslate();
    makeNoteWindow->retranslate();
    showDataDialog->retranslate();
    helpDialog->retranslate();
}

void MainWindow::openHelp() {
    helpDialog->show();
}

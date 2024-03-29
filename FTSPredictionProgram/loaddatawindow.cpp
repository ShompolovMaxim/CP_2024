#include "loaddatawindow.h"
#include "ui_loaddatawindow.h"
#include "doubleformatter.h"

#include <string>
#include <fstream>
#include <QFileDialog>
#include <sstream>

LoadDataWindow::LoadDataWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoadDataWindow)
{
    ui->setupUi(this);
}

LoadDataWindow::~LoadDataWindow()
{
    delete ui;
}

void LoadDataWindow::clear() {
    ts.clear();
    oldTs.clear();
    ui->data->setText(QString());
}

void LoadDataWindow::UpdateData() {
    std::string data;
    if (ts.size() <= 2000) {
        for (size_t i = 0; i < ts.size(); ++i) {
            data += std::to_string(i+1) + ":\t" + DoubleFormatter::format(ts[i], 3) + "\n";
        }
    } else {
        for (size_t i = 0; i < 1000; ++i) {
            data += std::to_string(i+1) + ":\t" + DoubleFormatter::format(ts[i], 3) + "\n";
        }
        data += "...........................\n";
        for (size_t i = ts.size() - 1000; i < ts.size(); ++i) {
            data += std::to_string(i+1) + ":\t" + DoubleFormatter::format(ts[i], 3) + "\n";
        }
    }
    if (ts.size() < 3) {
        data += isEnglish ? "\nTime series is too small to predict! At least 3 values are needed!" : "\nРяд слишком мал для прогнозирования! Необходимо хотя бы 3 значения!";
    }
    ui->data->document()->setPlainText(QString::fromStdString(data));
}

void LoadDataWindow::on_pushButton_clicked()
{
    std::string inputFileName;
    inputFileName = QFileDialog::getOpenFileName().toStdString();
    if (inputFileName == "") {
        return;
    }
    std::string dividers = ui->dividers->text().toStdString();
    ts.clear();
    std::ifstream in(inputFileName);
    double number;
    std::string line;
    while (!in.eof()) {
        std::getline(in, line);
        for (char c : dividers) {
            std::replace(line.begin(), line.end(), c, ' ');
        }
        if (ui->decimalDivider->currentIndex() == 1) {
            std::replace(line.begin(), line.end(), ',', '.');
        }
        std::stringstream st;
        st<<line;
        while (st) {
            st>>number;
            if (st) {
                ts.push_back(number);
            }
        }
    }
    UpdateData();
}


void LoadDataWindow::on_pushButton_3_clicked()
{
    this->close();
}

void LoadDataWindow::updateOld() {
    oldTs = ts;
}


void LoadDataWindow::on_addButton_clicked()
{
    QString input = ui->newValue->text();
    bool ok;
    input = input.replace(",",".");
    double value = input.toDouble(&ok);
    if (ok) {
        ts.push_back(value);
        UpdateData();
    }
    ui->newValue->setText(QString());
}


void LoadDataWindow::on_clear_clicked()
{
    ts.clear();
    ui->data->setText(QString());
}


void LoadDataWindow::on_deleteLastButton_clicked()
{
    if (!ts.empty()) {
        ts.pop_back();
        UpdateData();
    }
}


void LoadDataWindow::on_LoadDataWindow_rejected()
{
    haveChanged = ts != oldTs;
    oldTs = ts;
    emit dataLoaded();
}

void LoadDataWindow::retranslate() {
    ui->retranslateUi(this);
}

void LoadDataWindow::setEnglish(bool f){
    isEnglish = f;
}


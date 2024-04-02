#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <vector>

#include "loaddatawindow.h"
#include "loadintervalsdialog.h"
#include "loadfs.h"
#include "showdatadialog.h"
#include "makenotewindow.h"
#include "qcustomplot.h"
#include "PStatus.h"
#include "helpdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_getData_clicked();

    void on_getIntervals_clicked();

    void dataLoaded();

    void intervalsLoaded();

    void on_getFS_clicked();

    void fssGot();

    void on_predictButton_clicked();

    void predictFts();

    void on_resultsButton_clicked();

    void on_fuzzifyedDataButton_clicked();

    void on_traceButton_clicked();

    void on_noteButton_clicked();

    void onMenuSave();

    void onMenuSaveAs();

    void onMenuLoad();

    void calcStats();

    void on_predictFTS_triggered();

    void on_predictWithFT_triggered();

    void on_actionRussian_triggered();

    void on_actionEnglish_triggered();

    void openHelp();

private:

    void showGraph();

    void fitToStatus();

    Ui::MainWindow *ui;
    LoadDataWindow *loadDataWindow;
    LoadIntervalsDialog* loadIntervalsDialog;
    LoadFS* loadFS;
    std::vector<double> predictedTs;
    ShowDataDialog* showDataDialog;
    MakeNoteWindow* makeNoteWindow;
    HelpDialog* helpDialog;
    QCustomPlot* wGraphic;
    std::string ftsOut;
    std::string traceOut;
    PStatus pStatus = NO_DATA_LOADED;
    double defuzzifySong(std::vector<double> fs, const std::vector<double>& intervals);
    double defuzzifyCentroid(std::vector<double> fs, const std::vector<double>& intervals);
    QVector<double> predictedOverTs;
    std::string fileToSave = "";
    double getDouble(std::ifstream& in);
    std::vector<double> tsD;
    size_t getInt(std::ifstream& in);
    void predictFT();
    void updateSettings();
    QTranslator translator;
    void retranslate();
};
#endif // MAINWINDOW_H

#ifndef LOADINTERVALSDIALOG_H
#define LOADINTERVALSDIALOG_H

#include <QDialog>
#include <vector>

namespace Ui {
class LoadIntervalsDialog;
}

class LoadIntervalsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoadIntervalsDialog(QWidget *parent = nullptr);
    ~LoadIntervalsDialog();
    std::vector<double> ts;
    std::vector<double> tsD;
    std::vector<double> intervals;
    std::vector<double> intervalsD;
    bool haveChanged = false;
    bool haveChangedD = false;
    void clear();
    void UpdateData();
    void setMaxMin(double mn, double mx, double mxD);
    void updateOld();
    void setFT(bool f);
    double getD1();
    double getD2();
    double getD();
    void setD1(double d);
    void setD2(double d);
    void setD(double d);
    void retranslate();

signals:
    void intervalsLoaded();

private slots:
    void on_generateButton_clicked();

    void on_applyButton_clicked();

    void on_generateButton_2_clicked();

    void on_LoadIntervalsDialog_rejected();

private:
    Ui::LoadIntervalsDialog *ui;
    std::vector<double> oldIntervals;
    std::vector<double> oldIntervalsD;
    void applyDistributionBasedLengthMethod(double mn, double mx, bool toD);
    void applyAverageBasedLengthMethod(double mn, double mx, bool toD);
    void applyHalfAverageBasedLengthMethod(double mn, double mx, bool toD);
    void applyNaturalPartitionMethod(double mn, double mx, bool toD);
    void applyAmountMethod(double mn, double mx, bool toD);
};

#endif // LOADINTERVALSDIALOG_H

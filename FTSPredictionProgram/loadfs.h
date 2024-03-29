#ifndef LOADFS_H
#define LOADFS_H

#include <QDialog>
#include <vector>

namespace Ui {
class LoadFS;
}

class LoadFS : public QDialog
{
    Q_OBJECT

public:
    explicit LoadFS(QWidget *parent = nullptr);
    ~LoadFS();
    std::vector<double> ts;
    std::vector<double> tsD;
    std::vector<double> intervals;
    std::vector<double> intervalsD;
    std::vector<std::vector<double>> fss;
    std::vector<std::vector<double>> fssD;
    void clear();
    bool haveChanged = false;
    void UpdateData();
    void updateOld();
    void setFT(bool f, int n);
    void clearFTS();
    void clearFT();
    void retranslate();

signals:
    void fssGot();

private slots:
    void on_fuzzifyButton_clicked();

    void on_applyButton_clicked();

    void on_fuzzifyButton_2_clicked();

    void on_LoadFS_rejected();

private:
    Ui::LoadFS *ui;
    std::vector<std::vector<double>> oldFss;
    std::vector<std::vector<double>> oldFssD;
};

#endif // LOADFS_H

#ifndef LOADDATAWINDOW_H
#define LOADDATAWINDOW_H

#include <QDialog>
#include <vector>

namespace Ui {
class LoadDataWindow;
}

class LoadDataWindow : public QDialog
{
    Q_OBJECT

public:
    std::vector<double> ts;
    explicit LoadDataWindow(QWidget *parent = nullptr);
    ~LoadDataWindow();
    bool haveChanged = false;
    void clear();
    void UpdateData();
    void updateOld();
    void retranslate();
    void setEnglish(bool f);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_addButton_clicked();

    void on_clear_clicked();

    void on_deleteLastButton_clicked();

    void on_LoadDataWindow_rejected();

signals:
    void dataLoaded();

private:
    Ui::LoadDataWindow *ui;
    std::vector<double> oldTs;
    bool isEnglish = false;
};

#endif // LOADDATAWINDOW_H

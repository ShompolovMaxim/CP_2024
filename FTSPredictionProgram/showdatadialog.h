#ifndef SHOWDATADIALOG_H
#define SHOWDATADIALOG_H

#include <QDialog>

namespace Ui {
class ShowDataDialog;
}

class ShowDataDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ShowDataDialog(QWidget *parent = nullptr);
    ~ShowDataDialog();
    void setData(std::string data);
    void retranslate();

private slots:
    void on_closeButton_clicked();

private:
    Ui::ShowDataDialog *ui;
};

#endif // SHOWDATADIALOG_H

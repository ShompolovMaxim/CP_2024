#include "showdatadialog.h"
#include "ui_showdatadialog.h"

ShowDataDialog::ShowDataDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ShowDataDialog)
{
    ui->setupUi(this);
}

ShowDataDialog::~ShowDataDialog()
{
    delete ui;
}

void ShowDataDialog::setData(std::string data) {
    ui->data->document()->setPlainText(QString::fromStdString(data));
}

void ShowDataDialog::on_closeButton_clicked()
{
    this->close();
}

void ShowDataDialog::retranslate() {
    ui->retranslateUi(this);
}

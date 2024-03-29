#include "makenotewindow.h"
#include "ui_makenotewindow.h"

MakeNoteWindow::MakeNoteWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MakeNoteWindow)
{
    ui->setupUi(this);
}

MakeNoteWindow::~MakeNoteWindow()
{
    delete ui;
}

void MakeNoteWindow::on_saveButton_clicked()
{
    this->close();
}

std::string MakeNoteWindow::getNote() {
    return ui->data->toPlainText().toStdString();
}

void MakeNoteWindow::setNote(std::string note) {
    ui->data->document()->setPlainText(QString::fromStdString(note));
}


void MakeNoteWindow::on_MakeNoteWindow_rejected()
{
    note = ui->data->toPlainText().toStdString();
}

void MakeNoteWindow::retranslate() {
    ui->retranslateUi(this);
}


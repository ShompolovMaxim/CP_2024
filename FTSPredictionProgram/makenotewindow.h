#ifndef MAKENOTEWINDOW_H
#define MAKENOTEWINDOW_H

#include <QDialog>

namespace Ui {
class MakeNoteWindow;
}

class MakeNoteWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MakeNoteWindow(QWidget *parent = nullptr);
    ~MakeNoteWindow();
    std::string note;
    std::string getNote();
    void setNote(std::string note);
    void retranslate();

private slots:
    void on_saveButton_clicked();

    void on_MakeNoteWindow_rejected();

private:
    Ui::MakeNoteWindow *ui;
};

#endif // MAKENOTEWINDOW_H

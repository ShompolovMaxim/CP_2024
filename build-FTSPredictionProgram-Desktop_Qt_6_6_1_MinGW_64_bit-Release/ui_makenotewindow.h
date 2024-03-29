/********************************************************************************
** Form generated from reading UI file 'makenotewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKENOTEWINDOW_H
#define UI_MAKENOTEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MakeNoteWindow
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *data;
    QPushButton *saveButton;

    void setupUi(QDialog *MakeNoteWindow)
    {
        if (MakeNoteWindow->objectName().isEmpty())
            MakeNoteWindow->setObjectName("MakeNoteWindow");
        MakeNoteWindow->resize(496, 459);
        QFont font;
        font.setPointSize(11);
        MakeNoteWindow->setFont(font);
        gridLayout = new QGridLayout(MakeNoteWindow);
        gridLayout->setObjectName("gridLayout");
        data = new QPlainTextEdit(MakeNoteWindow);
        data->setObjectName("data");

        gridLayout->addWidget(data, 0, 0, 1, 1);

        saveButton = new QPushButton(MakeNoteWindow);
        saveButton->setObjectName("saveButton");

        gridLayout->addWidget(saveButton, 1, 0, 1, 1);


        retranslateUi(MakeNoteWindow);

        QMetaObject::connectSlotsByName(MakeNoteWindow);
    } // setupUi

    void retranslateUi(QDialog *MakeNoteWindow)
    {
        MakeNoteWindow->setWindowTitle(QCoreApplication::translate("MakeNoteWindow", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", nullptr));
#if QT_CONFIG(tooltip)
        saveButton->setToolTip(QCoreApplication::translate("MakeNoteWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        saveButton->setText(QCoreApplication::translate("MakeNoteWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        saveButton->setShortcut(QCoreApplication::translate("MakeNoteWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MakeNoteWindow: public Ui_MakeNoteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKENOTEWINDOW_H

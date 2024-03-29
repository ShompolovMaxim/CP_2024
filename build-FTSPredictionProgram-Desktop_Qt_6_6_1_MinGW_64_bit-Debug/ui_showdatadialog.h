/********************************************************************************
** Form generated from reading UI file 'showdatadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWDATADIALOG_H
#define UI_SHOWDATADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ShowDataDialog
{
public:
    QGridLayout *gridLayout;
    QPlainTextEdit *data;
    QPushButton *closeButton;

    void setupUi(QDialog *ShowDataDialog)
    {
        if (ShowDataDialog->objectName().isEmpty())
            ShowDataDialog->setObjectName("ShowDataDialog");
        ShowDataDialog->resize(1239, 802);
        QFont font;
        font.setPointSize(11);
        ShowDataDialog->setFont(font);
        gridLayout = new QGridLayout(ShowDataDialog);
        gridLayout->setObjectName("gridLayout");
        data = new QPlainTextEdit(ShowDataDialog);
        data->setObjectName("data");
        data->setEnabled(true);
        data->setReadOnly(true);

        gridLayout->addWidget(data, 0, 0, 1, 1);

        closeButton = new QPushButton(ShowDataDialog);
        closeButton->setObjectName("closeButton");

        gridLayout->addWidget(closeButton, 1, 0, 1, 1);


        retranslateUi(ShowDataDialog);

        QMetaObject::connectSlotsByName(ShowDataDialog);
    } // setupUi

    void retranslateUi(QDialog *ShowDataDialog)
    {
        ShowDataDialog->setWindowTitle(QCoreApplication::translate("ShowDataDialog", "Dialog", nullptr));
#if QT_CONFIG(tooltip)
        closeButton->setToolTip(QCoreApplication::translate("ShowDataDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        closeButton->setText(QCoreApplication::translate("ShowDataDialog", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowDataDialog: public Ui_ShowDataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWDATADIALOG_H

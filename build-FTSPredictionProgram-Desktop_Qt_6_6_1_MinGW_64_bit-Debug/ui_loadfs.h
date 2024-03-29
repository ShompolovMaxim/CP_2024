/********************************************************************************
** Form generated from reading UI file 'loadfs.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADFS_H
#define UI_LOADFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadFS
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *fuzzifyMethod;
    QPushButton *fuzzifyButton;
    QTextEdit *data;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QComboBox *fuzzifyMethod_2;
    QPushButton *fuzzifyButton_2;
    QTextEdit *data_2;
    QPushButton *applyButton;

    void setupUi(QDialog *LoadFS)
    {
        if (LoadFS->objectName().isEmpty())
            LoadFS->setObjectName("LoadFS");
        LoadFS->resize(1014, 684);
        QFont font;
        font.setPointSize(11);
        LoadFS->setFont(font);
        gridLayout = new QGridLayout(LoadFS);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(LoadFS);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        fuzzifyMethod = new QComboBox(tab);
        fuzzifyMethod->addItem(QString());
        fuzzifyMethod->addItem(QString());
        fuzzifyMethod->setObjectName("fuzzifyMethod");

        gridLayout_2->addWidget(fuzzifyMethod, 0, 1, 1, 1);

        fuzzifyButton = new QPushButton(tab);
        fuzzifyButton->setObjectName("fuzzifyButton");

        gridLayout_2->addWidget(fuzzifyButton, 0, 2, 1, 1);

        data = new QTextEdit(tab);
        data->setObjectName("data");
        data->setReadOnly(true);
        data->setTabStopDistance(60.000000000000000);

        gridLayout_2->addWidget(data, 1, 0, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        fuzzifyMethod_2 = new QComboBox(tab_2);
        fuzzifyMethod_2->addItem(QString());
        fuzzifyMethod_2->addItem(QString());
        fuzzifyMethod_2->setObjectName("fuzzifyMethod_2");

        gridLayout_3->addWidget(fuzzifyMethod_2, 0, 1, 1, 1);

        fuzzifyButton_2 = new QPushButton(tab_2);
        fuzzifyButton_2->setObjectName("fuzzifyButton_2");

        gridLayout_3->addWidget(fuzzifyButton_2, 0, 2, 1, 1);

        data_2 = new QTextEdit(tab_2);
        data_2->setObjectName("data_2");
        data_2->setReadOnly(true);
        data_2->setTabStopDistance(60.000000000000000);

        gridLayout_3->addWidget(data_2, 1, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        applyButton = new QPushButton(LoadFS);
        applyButton->setObjectName("applyButton");

        gridLayout->addWidget(applyButton, 1, 0, 1, 1);


        retranslateUi(LoadFS);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoadFS);
    } // setupUi

    void retranslateUi(QDialog *LoadFS)
    {
        LoadFS->setWindowTitle(QCoreApplication::translate("LoadFS", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tab->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("LoadFS", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\235\320\234:", nullptr));
        fuzzifyMethod->setItemText(0, QCoreApplication::translate("LoadFS", "\321\201\320\273\320\265\320\264\321\203\321\217 Q. Song", nullptr));
        fuzzifyMethod->setItemText(1, QCoreApplication::translate("LoadFS", "'\320\277\320\273\320\260\320\262\320\275\321\213\320\271' \320\277\320\276\320\264\321\205\320\276\320\264", nullptr));

#if QT_CONFIG(tooltip)
        fuzzifyMethod->setToolTip(QCoreApplication::translate("LoadFS", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fuzzifyButton->setToolTip(QCoreApplication::translate("LoadFS", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260 \320\277\321\200\320\270 \320\277\320\276\320\274\320\276\321\211\320\270 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\201\320\277\320\276\321\201\320\276\320\261\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        fuzzifyButton->setText(QCoreApplication::translate("LoadFS", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\235\320\234", nullptr));
        data->setHtml(QCoreApplication::translate("LoadFS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LoadFS", "\320\224\320\273\321\217 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QCoreApplication::translate("LoadFS", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\321\205 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setTabWhatsThis(tabWidget->indexOf(tab), QCoreApplication::translate("LoadFS", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\321\205 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262)", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        tab_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("LoadFS", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\235\320\234:", nullptr));
        fuzzifyMethod_2->setItemText(0, QCoreApplication::translate("LoadFS", "\321\201\320\273\320\265\320\264\321\203\321\217 Q. Song", nullptr));
        fuzzifyMethod_2->setItemText(1, QCoreApplication::translate("LoadFS", "'\320\277\320\273\320\260\320\262\320\275\321\213\320\271' \320\277\320\276\320\264\321\205\320\276\320\264", nullptr));

#if QT_CONFIG(tooltip)
        fuzzifyMethod_2->setToolTip(QCoreApplication::translate("LoadFS", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\263\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fuzzifyButton_2->setToolTip(QCoreApplication::translate("LoadFS", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260 \320\277\321\200\320\270 \320\277\320\276\320\274\320\276\321\211\320\270 \320\262\321\213\320\261\321\200\320\260\320\275\320\275\320\276\320\263\320\276 \321\201\320\277\320\276\321\201\320\276\320\261\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        fuzzifyButton_2->setText(QCoreApplication::translate("LoadFS", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\235\320\234", nullptr));
        data_2->setHtml(QCoreApplication::translate("LoadFS", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadFS", "\320\224\320\273\321\217 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadFS", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 "
                        "\320\277\321\200\320\270 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271 \320\270 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\321\205 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setTabWhatsThis(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadFS", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 "
                        "\320\277\321\200\320\270 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271 \320\270 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\320\276\321\201\320\273\320\265 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\321\205 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262)", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        applyButton->setToolTip(QCoreApplication::translate("LoadFS", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        applyButton->setText(QCoreApplication::translate("LoadFS", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadFS: public Ui_LoadFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADFS_H

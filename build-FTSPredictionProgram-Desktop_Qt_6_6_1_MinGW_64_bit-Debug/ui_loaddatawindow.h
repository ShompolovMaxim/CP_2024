/********************************************************************************
** Form generated from reading UI file 'loaddatawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADDATAWINDOW_H
#define UI_LOADDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_LoadDataWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *decimalDivider;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *dividers;
    QPushButton *deleteLastButton;
    QLabel *label_2;
    QLineEdit *newValue;
    QPushButton *addButton;
    QTextEdit *data;
    QSplitter *splitter;
    QPushButton *clear;
    QPushButton *pushButton_3;

    void setupUi(QDialog *LoadDataWindow)
    {
        if (LoadDataWindow->objectName().isEmpty())
            LoadDataWindow->setObjectName("LoadDataWindow");
        LoadDataWindow->resize(1100, 684);
        QFont font;
        font.setPointSize(11);
        LoadDataWindow->setFont(font);
        gridLayout = new QGridLayout(LoadDataWindow);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(LoadDataWindow);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        decimalDivider = new QComboBox(LoadDataWindow);
        decimalDivider->addItem(QString());
        decimalDivider->addItem(QString());
        decimalDivider->setObjectName("decimalDivider");

        gridLayout->addWidget(decimalDivider, 0, 1, 1, 1);

        pushButton = new QPushButton(LoadDataWindow);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        label_3 = new QLabel(LoadDataWindow);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dividers = new QLineEdit(LoadDataWindow);
        dividers->setObjectName("dividers");

        gridLayout->addWidget(dividers, 1, 1, 1, 1);

        deleteLastButton = new QPushButton(LoadDataWindow);
        deleteLastButton->setObjectName("deleteLastButton");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(deleteLastButton->sizePolicy().hasHeightForWidth());
        deleteLastButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(deleteLastButton, 1, 2, 1, 1);

        label_2 = new QLabel(LoadDataWindow);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        newValue = new QLineEdit(LoadDataWindow);
        newValue->setObjectName("newValue");

        gridLayout->addWidget(newValue, 2, 1, 1, 1);

        addButton = new QPushButton(LoadDataWindow);
        addButton->setObjectName("addButton");

        gridLayout->addWidget(addButton, 2, 2, 1, 1);

        data = new QTextEdit(LoadDataWindow);
        data->setObjectName("data");
        data->setReadOnly(true);

        gridLayout->addWidget(data, 3, 0, 1, 3);

        splitter = new QSplitter(LoadDataWindow);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        clear = new QPushButton(splitter);
        clear->setObjectName("clear");
        splitter->addWidget(clear);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName("pushButton_3");
        splitter->addWidget(pushButton_3);

        gridLayout->addWidget(splitter, 4, 0, 1, 3);


        retranslateUi(LoadDataWindow);

        QMetaObject::connectSlotsByName(LoadDataWindow);
    } // setupUi

    void retranslateUi(QDialog *LoadDataWindow)
    {
        LoadDataWindow->setWindowTitle(QCoreApplication::translate("LoadDataWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label->setText(QCoreApplication::translate("LoadDataWindow", "\320\240\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214 \321\206\320\265\320\273\320\276\320\271 \320\270 \320\264\321\200\320\276\320\261\320\275\320\276\320\271 \321\207\320\260\321\201\321\202\320\270:", nullptr));
        decimalDivider->setItemText(0, QCoreApplication::translate("LoadDataWindow", "\320\242\320\276\321\207\320\272\320\260", nullptr));
        decimalDivider->setItemText(1, QCoreApplication::translate("LoadDataWindow", "\320\227\320\260\320\277\321\217\321\202\320\260\321\217", nullptr));

#if QT_CONFIG(tooltip)
        decimalDivider->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\241\320\270\320\274\320\262\320\276\320\273, \320\276\321\202\320\264\320\265\320\273\321\217\321\216\321\211\320\270\320\271 \321\206\320\265\320\273\321\203\321\216 \321\207\320\260\321\201\321\202\321\214 \321\207\320\270\321\201\320\273\320\260 \320\276\321\202 \320\264\321\200\320\276\320\261\320\275\320\276\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\271 \321\200\321\217\320\264 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260 \321\201 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274\320\270 \321\200\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\217\320\274\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QCoreApplication::translate("LoadDataWindow", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("LoadDataWindow", "\320\240\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\320\270 \320\274\320\265\320\266\320\264\321\203 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217\320\274\320\270:", nullptr));
#if QT_CONFIG(tooltip)
        dividers->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\235\320\260\320\261\320\276\321\200 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262 \320\267\320\260 \320\270\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265\320\274 \320\277\321\200\320\276\320\261\320\265\320\273\320\260, \321\202\320\260\320\261\321\203\320\273\321\217\321\206\320\270\320\270 \320\270 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260 \321\201\321\202\321\200\320\276\320\272\320\270, \320\272\320\276\321\202\320\276\321\200\321\213\320\265 \320\274\320\276\320\263\321\203\321\202 \320\276\321\202\320\264\320\265\320\273\321\217\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\262 \321\204\320\260\320\271\320\273\320\265 \320\264\321\200\321\203\320\263 \320\276\321\202 \320\264\321\200\321\203\320\263\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        deleteLastButton->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\320\267 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        deleteLastButton->setText(QCoreApplication::translate("LoadDataWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\265\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("LoadDataWindow", "\320\235\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265:", nullptr));
#if QT_CONFIG(tooltip)
        newValue->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265, \320\272\320\276\321\202\320\276\321\200\320\276\320\265 \320\261\321\203\320\264\320\265\321\202 \320\264\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\276 \320\262 \320\272\320\276\320\275\320\265\321\206 \320\270\320\274\320\265\321\216\321\211\320\265\320\263\320\276\321\201\321\217 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 \320\272\320\275\320\276\320\277\320\272\320\270 \"\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265\"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        addButton->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\265 \320\262 \320\277\320\276\320\273\320\265 \"\320\235\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265\" (Enter)", nullptr));
#endif // QT_CONFIG(tooltip)
        addButton->setText(QCoreApplication::translate("LoadDataWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(shortcut)
        addButton->setShortcut(QCoreApplication::translate("LoadDataWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        data->setHtml(QCoreApplication::translate("LoadDataWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        clear->setText(QCoreApplication::translate("LoadDataWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("LoadDataWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QCoreApplication::translate("LoadDataWindow", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadDataWindow: public Ui_LoadDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADDATAWINDOW_H

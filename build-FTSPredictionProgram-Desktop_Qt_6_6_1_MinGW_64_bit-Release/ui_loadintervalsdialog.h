/********************************************************************************
** Form generated from reading UI file 'loadintervalsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADINTERVALSDIALOG_H
#define UI_LOADINTERVALSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadIntervalsDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *applyButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QPushButton *generateButton;
    QLabel *label_3;
    QDoubleSpinBox *d1;
    QTextEdit *data;
    QDoubleSpinBox *min;
    QSpinBox *amount;
    QLabel *minLabel;
    QLabel *d1Label;
    QDoubleSpinBox *max;
    QDoubleSpinBox *d2;
    QComboBox *generationMethod;
    QLabel *d2Label;
    QLabel *label_4;
    QLabel *maxLabel;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *maxLabel_2;
    QDoubleSpinBox *max_2;
    QLabel *label_6;
    QComboBox *generationMethod_2;
    QLabel *d2Label_2;
    QDoubleSpinBox *d2_2;
    QLabel *label_5;
    QSpinBox *amount_2;
    QPushButton *generateButton_2;
    QTextEdit *data_2;

    void setupUi(QDialog *LoadIntervalsDialog)
    {
        if (LoadIntervalsDialog->objectName().isEmpty())
            LoadIntervalsDialog->setObjectName("LoadIntervalsDialog");
        LoadIntervalsDialog->resize(1062, 677);
        QFont font;
        font.setPointSize(11);
        LoadIntervalsDialog->setFont(font);
        gridLayout = new QGridLayout(LoadIntervalsDialog);
        gridLayout->setObjectName("gridLayout");
        applyButton = new QPushButton(LoadIntervalsDialog);
        applyButton->setObjectName("applyButton");

        gridLayout->addWidget(applyButton, 2, 0, 1, 1);

        tabWidget = new QTabWidget(LoadIntervalsDialog);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setEnabled(true);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        generateButton = new QPushButton(tab);
        generateButton->setObjectName("generateButton");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(generateButton->sizePolicy().hasHeightForWidth());
        generateButton->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(generateButton, 1, 7, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_3, 0, 4, 1, 2);

        d1 = new QDoubleSpinBox(tab);
        d1->setObjectName("d1");
        d1->setEnabled(true);
        sizePolicy.setHeightForWidth(d1->sizePolicy().hasHeightForWidth());
        d1->setSizePolicy(sizePolicy);
        d1->setButtonSymbols(QAbstractSpinBox::NoButtons);
        d1->setMinimum(-1000000000000.000000000000000);
        d1->setMaximum(1000000000000.000000000000000);

        gridLayout_2->addWidget(d1, 0, 3, 1, 1);

        data = new QTextEdit(tab);
        data->setObjectName("data");
        data->setReadOnly(true);

        gridLayout_2->addWidget(data, 2, 0, 1, 8);

        min = new QDoubleSpinBox(tab);
        min->setObjectName("min");
        min->setEnabled(true);
        sizePolicy.setHeightForWidth(min->sizePolicy().hasHeightForWidth());
        min->setSizePolicy(sizePolicy);
        min->setReadOnly(true);
        min->setButtonSymbols(QAbstractSpinBox::NoButtons);
        min->setMinimum(-1000000000000.000000000000000);
        min->setMaximum(1000000000000.000000000000000);

        gridLayout_2->addWidget(min, 0, 1, 1, 1);

        amount = new QSpinBox(tab);
        amount->setObjectName("amount");
        sizePolicy.setHeightForWidth(amount->sizePolicy().hasHeightForWidth());
        amount->setSizePolicy(sizePolicy);
        amount->setButtonSymbols(QAbstractSpinBox::NoButtons);
        amount->setMinimum(1);
        amount->setMaximum(100000000);
        amount->setValue(10);

        gridLayout_2->addWidget(amount, 1, 5, 1, 2);

        minLabel = new QLabel(tab);
        minLabel->setObjectName("minLabel");
        sizePolicy1.setHeightForWidth(minLabel->sizePolicy().hasHeightForWidth());
        minLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(minLabel, 0, 0, 1, 1);

        d1Label = new QLabel(tab);
        d1Label->setObjectName("d1Label");
        d1Label->setMaximumSize(QSize(40, 16777215));

        gridLayout_2->addWidget(d1Label, 0, 2, 1, 1);

        max = new QDoubleSpinBox(tab);
        max->setObjectName("max");
        max->setEnabled(true);
        sizePolicy.setHeightForWidth(max->sizePolicy().hasHeightForWidth());
        max->setSizePolicy(sizePolicy);
        max->setReadOnly(true);
        max->setButtonSymbols(QAbstractSpinBox::NoButtons);
        max->setMinimum(-1000000000000.000000000000000);
        max->setMaximum(1000000000000.000000000000000);

        gridLayout_2->addWidget(max, 1, 1, 1, 1);

        d2 = new QDoubleSpinBox(tab);
        d2->setObjectName("d2");
        d2->setEnabled(true);
        sizePolicy.setHeightForWidth(d2->sizePolicy().hasHeightForWidth());
        d2->setSizePolicy(sizePolicy);
        d2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        d2->setMinimum(-1000000000000.000000000000000);
        d2->setMaximum(1000000000000.000000000000000);

        gridLayout_2->addWidget(d2, 1, 3, 1, 1);

        generationMethod = new QComboBox(tab);
        generationMethod->addItem(QString());
        generationMethod->addItem(QString());
        generationMethod->addItem(QString());
        generationMethod->addItem(QString());
        generationMethod->addItem(QString());
        generationMethod->setObjectName("generationMethod");
        sizePolicy.setHeightForWidth(generationMethod->sizePolicy().hasHeightForWidth());
        generationMethod->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(generationMethod, 0, 6, 1, 2);

        d2Label = new QLabel(tab);
        d2Label->setObjectName("d2Label");

        gridLayout_2->addWidget(d2Label, 1, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(label_4, 1, 4, 1, 1);

        maxLabel = new QLabel(tab);
        maxLabel->setObjectName("maxLabel");
        sizePolicy1.setHeightForWidth(maxLabel->sizePolicy().hasHeightForWidth());
        maxLabel->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(maxLabel, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        maxLabel_2 = new QLabel(tab_2);
        maxLabel_2->setObjectName("maxLabel_2");
        maxLabel_2->setMaximumSize(QSize(150, 16777215));

        gridLayout_3->addWidget(maxLabel_2, 0, 0, 1, 1);

        max_2 = new QDoubleSpinBox(tab_2);
        max_2->setObjectName("max_2");
        max_2->setEnabled(true);
        sizePolicy.setHeightForWidth(max_2->sizePolicy().hasHeightForWidth());
        max_2->setSizePolicy(sizePolicy);
        max_2->setReadOnly(true);
        max_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        max_2->setMinimum(-1000000000000.000000000000000);
        max_2->setMaximum(1000000000000.000000000000000);

        gridLayout_3->addWidget(max_2, 0, 1, 1, 1);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setMaximumSize(QSize(250, 16777215));

        gridLayout_3->addWidget(label_6, 0, 2, 1, 2);

        generationMethod_2 = new QComboBox(tab_2);
        generationMethod_2->addItem(QString());
        generationMethod_2->addItem(QString());
        generationMethod_2->addItem(QString());
        generationMethod_2->addItem(QString());
        generationMethod_2->addItem(QString());
        generationMethod_2->setObjectName("generationMethod_2");
        sizePolicy.setHeightForWidth(generationMethod_2->sizePolicy().hasHeightForWidth());
        generationMethod_2->setSizePolicy(sizePolicy);

        gridLayout_3->addWidget(generationMethod_2, 0, 4, 1, 1);

        d2Label_2 = new QLabel(tab_2);
        d2Label_2->setObjectName("d2Label_2");

        gridLayout_3->addWidget(d2Label_2, 1, 0, 1, 1);

        d2_2 = new QDoubleSpinBox(tab_2);
        d2_2->setObjectName("d2_2");
        d2_2->setEnabled(true);
        d2_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        d2_2->setMinimum(-1000000000000.000000000000000);
        d2_2->setMaximum(1000000000000.000000000000000);

        gridLayout_3->addWidget(d2_2, 1, 1, 1, 1);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName("label_5");
        label_5->setMaximumSize(QSize(110, 16777215));

        gridLayout_3->addWidget(label_5, 1, 2, 1, 1);

        amount_2 = new QSpinBox(tab_2);
        amount_2->setObjectName("amount_2");
        amount_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        amount_2->setMinimum(1);
        amount_2->setMaximum(100000000);
        amount_2->setValue(10);

        gridLayout_3->addWidget(amount_2, 1, 3, 1, 1);

        generateButton_2 = new QPushButton(tab_2);
        generateButton_2->setObjectName("generateButton_2");

        gridLayout_3->addWidget(generateButton_2, 1, 4, 1, 1);

        data_2 = new QTextEdit(tab_2);
        data_2->setObjectName("data_2");
        data_2->setReadOnly(true);

        gridLayout_3->addWidget(data_2, 2, 0, 1, 5);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(LoadIntervalsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoadIntervalsDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadIntervalsDialog)
    {
        LoadIntervalsDialog->setWindowTitle(QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262", nullptr));
#if QT_CONFIG(tooltip)
        applyButton->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#endif // QT_CONFIG(tooltip)
        applyButton->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        tab->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        generateButton->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \321\201\320\277\320\276\321\201\320\276\320\261\320\276\320\274", nullptr));
#endif // QT_CONFIG(tooltip)
        generateButton->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262:", nullptr));
#if QT_CONFIG(tooltip)
        d1->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\236\321\202\321\201\321\202\321\203\320\277 \320\262\320\273\320\265\320\262\320\276 \320\276\321\202 \320\274\320\270\320\275\320\270\320\274\321\203\320\274\320\260 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        data->setHtml(QCoreApplication::translate("LoadIntervalsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        min->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        amount->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\277\320\276\321\201\320\276\320\261\320\276\320\274 \"by number\"", nullptr));
#endif // QT_CONFIG(tooltip)
        minLabel->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274 \321\200\321\217\320\264\320\260: ", nullptr));
        d1Label->setText(QCoreApplication::translate("LoadIntervalsDialog", "D1:", nullptr));
#if QT_CONFIG(tooltip)
        max->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        d2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\236\321\202\321\201\321\202\321\203\320\277 \320\262\320\277\321\200\320\260\320\262\320\276 \320\276\321\202 \320\274\320\260\320\272\321\201\320\270\320\274\321\203\320\274\320\260 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        generationMethod->setItemText(0, QCoreApplication::translate("LoadIntervalsDialog", "distribution-based length", nullptr));
        generationMethod->setItemText(1, QCoreApplication::translate("LoadIntervalsDialog", "average-based length", nullptr));
        generationMethod->setItemText(2, QCoreApplication::translate("LoadIntervalsDialog", "half of avarage-based ", nullptr));
        generationMethod->setItemText(3, QCoreApplication::translate("LoadIntervalsDialog", "natural partition by 3-4-5 rules", nullptr));
        generationMethod->setItemText(4, QCoreApplication::translate("LoadIntervalsDialog", "by number", nullptr));

#if QT_CONFIG(tooltip)
        generationMethod->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        d2Label->setText(QCoreApplication::translate("LoadIntervalsDialog", "D2:", nullptr));
        label_4->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
        maxLabel->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274 \321\200\321\217\320\264\320\260:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("LoadIntervalsDialog", "\320\224\320\273\321\217 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setTabWhatsThis(tabWidget->indexOf(tab), QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(tooltip)
        tab_2->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        maxLabel_2->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274 \321\200\321\217\320\264\320\260:", nullptr));
#if QT_CONFIG(tooltip)
        max_2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262:", nullptr));
        generationMethod_2->setItemText(0, QCoreApplication::translate("LoadIntervalsDialog", "distribution-based length", nullptr));
        generationMethod_2->setItemText(1, QCoreApplication::translate("LoadIntervalsDialog", "average-based length", nullptr));
        generationMethod_2->setItemText(2, QCoreApplication::translate("LoadIntervalsDialog", "half of avarage-based ", nullptr));
        generationMethod_2->setItemText(3, QCoreApplication::translate("LoadIntervalsDialog", "natural partition by 3-4-5 rules", nullptr));
        generationMethod_2->setItemText(4, QCoreApplication::translate("LoadIntervalsDialog", "by number", nullptr));

#if QT_CONFIG(tooltip)
        generationMethod_2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        d2Label_2->setText(QCoreApplication::translate("LoadIntervalsDialog", "D:", nullptr));
#if QT_CONFIG(tooltip)
        d2_2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\236\321\202\321\201\321\202\321\203\320\277 \320\262\320\277\321\200\320\260\320\262\320\276 \320\276\321\202 \320\274\320\260\320\272\321\201\320\270\320\274\321\203\320\274\320\260 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \320\276\320\261\320\273\320\260\321\201\321\202\320\270 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        label_5->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276:", nullptr));
#if QT_CONFIG(tooltip)
        amount_2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\267\320\260\320\264\320\260\320\275\320\270\321\217 \321\201\320\277\320\276\321\201\320\276\320\261\320\276\320\274 \"by number\"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        generateButton_2->setToolTip(QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\274 \321\201\320\277\320\276\321\201\320\276\320\261\320\276\320\274", nullptr));
#endif // QT_CONFIG(tooltip)
        generateButton_2->setText(QCoreApplication::translate("LoadIntervalsDialog", "\320\222\320\262\320\265\321\201\321\202\320\270 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213", nullptr));
        data_2->setHtml(QCoreApplication::translate("LoadIntervalsDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadIntervalsDialog", "\320\224\320\273\321\217 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320"
                        "\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\321\200\320\270 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        tabWidget->setTabWhatsThis(tabWidget->indexOf(tab_2), QCoreApplication::translate("LoadIntervalsDialog", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262 \320\264\320\273\321\217 \321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260 \320\260\320\261\321\201\320\276\320\273\321\216\321\202\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\277\320\265\321\200\320\262\321\213\321\205 \321\200\320\260\320\267\320\275\320\276\321\201\321\202\320\265\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320"
                        "\263\320\276 \321\200\321\217\320\264\320\260 (\320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \321\202\320\276\320\273\321\214\320\272\320\276 \320\277\321\200\320\270 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\270 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271)", nullptr));
#endif // QT_CONFIG(whatsthis)
    } // retranslateUi

};

namespace Ui {
    class LoadIntervalsDialog: public Ui_LoadIntervalsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADINTERVALSDIALOG_H

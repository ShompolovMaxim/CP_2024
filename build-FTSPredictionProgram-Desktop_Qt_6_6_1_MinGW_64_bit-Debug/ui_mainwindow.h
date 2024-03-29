/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *saveAction;
    QAction *openAction;
    QAction *settingsAction;
    QAction *helpAction;
    QAction *saveAsAction;
    QAction *predictFTS;
    QAction *predictWithFT;
    QAction *actionRussian;
    QAction *actionEnglish;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *noteButton;
    QLabel *minLabel;
    QDoubleSpinBox *min;
    QLabel *label_11;
    QComboBox *defuzzificationMethod;
    QPushButton *predictButton;
    QPushButton *getData;
    QLabel *maxLabel;
    QDoubleSpinBox *max;
    QLabel *label_15;
    QComboBox *metric;
    QPushButton *fuzzifyedDataButton;
    QPushButton *getIntervals;
    QLabel *label;
    QDoubleSpinBox *average;
    QLabel *label_16;
    QDoubleSpinBox *outputAccuracy;
    QPushButton *traceButton;
    QPushButton *getFS;
    QLabel *label_2;
    QDoubleSpinBox *median;
    QLabel *label_3;
    QDoubleSpinBox *predictedValue;
    QPushButton *resultsButton;
    QCustomPlot *graph;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_4;
    QMenu *menu_5;
    QMenu *menu_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1562, 706);
        QFont font;
        font.setPointSize(11);
        MainWindow->setFont(font);
        MainWindow->setWindowOpacity(1.000000000000000);
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        settingsAction = new QAction(MainWindow);
        settingsAction->setObjectName("settingsAction");
        helpAction = new QAction(MainWindow);
        helpAction->setObjectName("helpAction");
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName("saveAsAction");
        predictFTS = new QAction(MainWindow);
        predictFTS->setObjectName("predictFTS");
        predictFTS->setCheckable(true);
        predictFTS->setChecked(true);
        predictWithFT = new QAction(MainWindow);
        predictWithFT->setObjectName("predictWithFT");
        predictWithFT->setCheckable(true);
        actionRussian = new QAction(MainWindow);
        actionRussian->setObjectName("actionRussian");
        actionRussian->setCheckable(true);
        actionRussian->setChecked(true);
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName("actionEnglish");
        actionEnglish->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        noteButton = new QPushButton(centralwidget);
        noteButton->setObjectName("noteButton");
        noteButton->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noteButton->sizePolicy().hasHeightForWidth());
        noteButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(noteButton, 0, 0, 1, 1);

        minLabel = new QLabel(centralwidget);
        minLabel->setObjectName("minLabel");

        gridLayout->addWidget(minLabel, 0, 1, 1, 1);

        min = new QDoubleSpinBox(centralwidget);
        min->setObjectName("min");
        min->setEnabled(true);
        sizePolicy.setHeightForWidth(min->sizePolicy().hasHeightForWidth());
        min->setSizePolicy(sizePolicy);
        min->setReadOnly(true);
        min->setButtonSymbols(QAbstractSpinBox::NoButtons);
        min->setMinimum(-1000000000000.000000000000000);
        min->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(min, 0, 2, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMaximumSize(QSize(310, 16777215));

        gridLayout->addWidget(label_11, 0, 3, 1, 1);

        defuzzificationMethod = new QComboBox(centralwidget);
        defuzzificationMethod->addItem(QString());
        defuzzificationMethod->addItem(QString());
        defuzzificationMethod->setObjectName("defuzzificationMethod");
        defuzzificationMethod->setEnabled(false);
        sizePolicy.setHeightForWidth(defuzzificationMethod->sizePolicy().hasHeightForWidth());
        defuzzificationMethod->setSizePolicy(sizePolicy);

        gridLayout->addWidget(defuzzificationMethod, 0, 4, 1, 1);

        predictButton = new QPushButton(centralwidget);
        predictButton->setObjectName("predictButton");
        predictButton->setEnabled(false);
        sizePolicy.setHeightForWidth(predictButton->sizePolicy().hasHeightForWidth());
        predictButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(predictButton, 0, 5, 1, 1);

        getData = new QPushButton(centralwidget);
        getData->setObjectName("getData");

        gridLayout->addWidget(getData, 1, 0, 1, 1);

        maxLabel = new QLabel(centralwidget);
        maxLabel->setObjectName("maxLabel");

        gridLayout->addWidget(maxLabel, 1, 1, 1, 1);

        max = new QDoubleSpinBox(centralwidget);
        max->setObjectName("max");
        max->setEnabled(true);
        max->setReadOnly(true);
        max->setButtonSymbols(QAbstractSpinBox::NoButtons);
        max->setMinimum(-1000000000000.000000000000000);
        max->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(max, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 1, 3, 1, 1);

        metric = new QComboBox(centralwidget);
        metric->addItem(QString());
        metric->addItem(QString());
        metric->addItem(QString());
        metric->addItem(QString());
        metric->addItem(QString());
        metric->setObjectName("metric");
        metric->setEnabled(false);

        gridLayout->addWidget(metric, 1, 4, 1, 1);

        fuzzifyedDataButton = new QPushButton(centralwidget);
        fuzzifyedDataButton->setObjectName("fuzzifyedDataButton");
        fuzzifyedDataButton->setEnabled(false);

        gridLayout->addWidget(fuzzifyedDataButton, 1, 5, 1, 1);

        getIntervals = new QPushButton(centralwidget);
        getIntervals->setObjectName("getIntervals");
        getIntervals->setEnabled(false);

        gridLayout->addWidget(getIntervals, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setMaximumSize(QSize(180, 16777215));

        gridLayout->addWidget(label, 2, 1, 1, 1);

        average = new QDoubleSpinBox(centralwidget);
        average->setObjectName("average");
        average->setReadOnly(true);
        average->setButtonSymbols(QAbstractSpinBox::NoButtons);
        average->setMinimum(-1000000000000.000000000000000);
        average->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(average, 2, 2, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");

        gridLayout->addWidget(label_16, 2, 3, 1, 1);

        outputAccuracy = new QDoubleSpinBox(centralwidget);
        outputAccuracy->setObjectName("outputAccuracy");
        outputAccuracy->setEnabled(true);
        outputAccuracy->setReadOnly(true);
        outputAccuracy->setButtonSymbols(QAbstractSpinBox::NoButtons);
        outputAccuracy->setDecimals(3);
        outputAccuracy->setMaximum(1000000000000000.000000000000000);

        gridLayout->addWidget(outputAccuracy, 2, 4, 1, 1);

        traceButton = new QPushButton(centralwidget);
        traceButton->setObjectName("traceButton");
        traceButton->setEnabled(false);

        gridLayout->addWidget(traceButton, 2, 5, 1, 1);

        getFS = new QPushButton(centralwidget);
        getFS->setObjectName("getFS");
        getFS->setEnabled(false);

        gridLayout->addWidget(getFS, 3, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        median = new QDoubleSpinBox(centralwidget);
        median->setObjectName("median");
        median->setReadOnly(true);
        median->setButtonSymbols(QAbstractSpinBox::NoButtons);
        median->setMinimum(-1000000000000.000000000000000);
        median->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(median, 3, 2, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 3, 1, 1);

        predictedValue = new QDoubleSpinBox(centralwidget);
        predictedValue->setObjectName("predictedValue");
        predictedValue->setReadOnly(true);
        predictedValue->setButtonSymbols(QAbstractSpinBox::NoButtons);
        predictedValue->setMinimum(-1000000000000.000000000000000);
        predictedValue->setMaximum(1000000000000.000000000000000);

        gridLayout->addWidget(predictedValue, 3, 4, 1, 1);

        resultsButton = new QPushButton(centralwidget);
        resultsButton->setObjectName("resultsButton");
        resultsButton->setEnabled(false);

        gridLayout->addWidget(resultsButton, 3, 5, 1, 1);

        graph = new QCustomPlot(centralwidget);
        graph->setObjectName("graph");
        graph->setMinimumSize(QSize(200, 150));
        QFont font1;
        font1.setPointSize(12);
        graph->setFont(font1);

        gridLayout->addWidget(graph, 4, 0, 1, 6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1562, 29));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        menu_2->setSeparatorsCollapsible(true);
        menu_4 = new QMenu(menu_2);
        menu_4->setObjectName("menu_4");
        menu_4->setSeparatorsCollapsible(false);
        menu_5 = new QMenu(menu_2);
        menu_5->setObjectName("menu_5");
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName("menu_3");
        menu_3->setSeparatorsCollapsible(false);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(openAction);
        menu->addAction(saveAction);
        menu->addAction(saveAsAction);
        menu_2->addAction(menu_4->menuAction());
        menu_2->addAction(menu_5->menuAction());
        menu_4->addAction(predictFTS);
        menu_4->addAction(predictWithFT);
        menu_5->addAction(actionRussian);
        menu_5->addAction(actionEnglish);
        menu_3->addAction(helpAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\235\320\222\320\240", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        saveAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\320\261\320\276\321\202\321\213 (Ctrl + S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        saveAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        openAction->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        openAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\200\320\260\320\275\320\265\320\265 \321\201\320\276\321\205\321\200\320\260\320\275\321\221\320\275\320\275\321\213\320\265 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\320\261\320\276\321\202\321\213 (Ctrl + O)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        openAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        settingsAction->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        helpAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        saveAsAction->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272", nullptr));
#if QT_CONFIG(tooltip)
        saveAsAction->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \321\200\320\260\320\261\320\276\321\202\321\213 \320\272\320\260\320\272 (Ctrl + Shift + S)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        saveAsAction->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        predictFTS->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\235\320\222\320\240", nullptr));
#if QT_CONFIG(tooltip)
        predictFTS->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        predictWithFT->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\222\320\240 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271", nullptr));
#if QT_CONFIG(tooltip)
        predictWithFT->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\321\205 \321\200\321\217\320\264\320\276\320\262 \320\275\320\260 \320\276\321\201\320\275\320\276\320\262\320\265 \320\276\320\277\320\270\321\201\320\260\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \321\202\320\265\320\275\320\264\320\265\320\275\321\206\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRussian->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
#if QT_CONFIG(tooltip)
        noteButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        noteButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\320\274\320\265\321\202\320\272\321\203", nullptr));
        minLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\321\203\320\274 \321\200\321\217\320\264\320\260: ", nullptr));
#if QT_CONFIG(tooltip)
        min->setToolTip(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        label_11->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\264\320\265\321\204\320\260\320\267\320\267\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        defuzzificationMethod->setItemText(0, QCoreApplication::translate("MainWindow", "\321\201\320\273\320\265\320\264\321\203\321\217 Q. Song", nullptr));
        defuzzificationMethod->setItemText(1, QCoreApplication::translate("MainWindow", "centroid method", nullptr));

#if QT_CONFIG(tooltip)
        defuzzificationMethod->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\276\321\201\320\276\320\261 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\320\260 \320\264\320\260\320\275\320\275\321\213\321\205 \320\270\320\267 \320\275\320\265\321\207\321\221\321\202\320\272\320\276\320\263\320\276 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\321\217 \320\262 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        predictButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\275\320\260 1 \321\210\320\260\320\263 (\320\277\321\200\320\265\320\264\320\262\320\260\321\200\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \320\262\320\262\320\265\321\201\321\202\320\270 \320\264\320\260\320\275\320\275\321\213\320\265, \320\267\320\260\320\264\320\260\321\202\321\214 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213 \320\270 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\270\321\202\321\214 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\320\265 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\260)", nullptr));
#endif // QT_CONFIG(tooltip)
        predictButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        getData->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        getData->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
#if QT_CONFIG(whatsthis)
        getData->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        getData->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        maxLabel->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\321\203\320\274 \321\200\321\217\320\264\320\260:", nullptr));
#if QT_CONFIG(tooltip)
        max->setToolTip(QCoreApplication::translate("MainWindow", "\320\234\320\260\320\272\321\201\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\321\200\320\270\320\272\320\260 \320\264\320\273\321\217 \320\276\321\206\320\265\320\275\320\272\320\270 \321\202\320\276\321\207\320\275\320\276\321\201\321\202\320\270:", nullptr));
        metric->setItemText(0, QCoreApplication::translate("MainWindow", "MSE", nullptr));
        metric->setItemText(1, QCoreApplication::translate("MainWindow", "RMSE", nullptr));
        metric->setItemText(2, QCoreApplication::translate("MainWindow", "MAE", nullptr));
        metric->setItemText(3, QCoreApplication::translate("MainWindow", "MAPE", nullptr));
        metric->setItemText(4, QCoreApplication::translate("MainWindow", "MASE", nullptr));

#if QT_CONFIG(tooltip)
        metric->setToolTip(QCoreApplication::translate("MainWindow", "\320\234\320\265\321\202\321\200\320\270\320\272\320\260 \320\264\320\273\321\217 \320\276\321\206\320\265\320\275\320\272\320\270 \321\202\320\276\321\207\320\275\320\276\321\201\321\202\320\270", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        fuzzifyedDataButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\270\321\201\321\205\320\276\320\264\320\275\321\213\320\271 \321\200\321\217\320\264 \320\277\320\265\321\200\320\265\320\262\320\265\320\264\321\221\320\275\320\275\321\213\320\271 \320\262 \320\275\320\265\321\207\321\221\321\202\320\272\320\276\320\265 \320\277\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\320\265 (\321\204\320\260\320\267\320\267\320\270\321\204\320\270\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271)", nullptr));
#endif // QT_CONFIG(tooltip)
        fuzzifyedDataButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\235\320\222\320\240", nullptr));
#if QT_CONFIG(tooltip)
        getIntervals->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\320\276\320\262 \320\264\320\273\321\217 \320\276\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\321\217 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        getIntervals->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\270\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265:", nullptr));
#if QT_CONFIG(tooltip)
        average->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\260\321\200\320\270\321\204\320\274\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        label_16->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\236\321\210\320\270\320\261\320\272\320\260 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217:", nullptr));
#if QT_CONFIG(tooltip)
        outputAccuracy->setToolTip(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\276\321\210\320\270\320\261\320\272\320\270, \320\262\321\213\321\207\320\270\321\201\320\273\321\217\320\265\320\274\320\276\320\271 \320\277\321\200\320\270 \320\277\320\276\320\274\320\276\321\211\320\270 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\271 \320\274\320\265\321\202\321\200\320\270\320\272\320\270, \320\264\320\273\321\217 \320\270\321\201\321\202\320\270\320\275\320\275\321\213\321\205 \320\270 \320\277\321\200\320\265\320\264\321\201\320\272\320\260\320\267\320\260\320\275\320\275\321\213\321\205 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        traceButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \320\277\321\200\320\276\320\274\320\265\320\266\321\203\321\202\320\276\321\207\320\275\321\213\320\265 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        traceButton->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\205\320\276\320\264 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217", nullptr));
#if QT_CONFIG(tooltip)
        getFS->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\320\277\321\200\320\265\320\264\320\265\320\273\320\265\320\275\320\270\320\265 \320\275\320\265\321\207\321\221\321\202\320\272\320\270\321\205 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        getFS->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\235\320\234", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\320\260\320\275\320\260:", nullptr));
#if QT_CONFIG(tooltip)
        median->setToolTip(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\320\260\320\275\320\260 \320\270\321\201\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\263\320\276 \321\200\321\217\320\264\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265:", nullptr));
#if QT_CONFIG(tooltip)
        resultsButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\271 \321\207\320\270\321\201\320\273\320\276\320\262\320\276\320\271 \320\262\321\200\320\265\320\274\320\265\320\275\320\275\320\276\320\271 \321\200\321\217\320\264", nullptr));
#endif // QT_CONFIG(tooltip)
        resultsButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\321\213 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        menu_4->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \320\277\321\200\320\276\320\263\320\275\320\276\320\267\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        menu_5->setTitle(QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272 / Language", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

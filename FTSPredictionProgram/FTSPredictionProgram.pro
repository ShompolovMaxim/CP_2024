QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

QMAKE_CXXFLAGS += -Wa,-mbig-obj

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    doubleformatter.cpp \
    loaddatawindow.cpp \
    loadfs.cpp \
    loadintervalsdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    makenotewindow.cpp \
    qcustomplot.cpp \
    showdatadialog.cpp

HEADERS += \
    PStatus.h \
    doubleformatter.h \
    loaddatawindow.h \
    loadfs.h \
    loadintervalsdialog.h \
    mainwindow.h \
    makenotewindow.h \
    qcustomplot.h \
    showdatadialog.h

FORMS += \
    loaddatawindow.ui \
    loadfs.ui \
    loadintervalsdialog.ui \
    mainwindow.ui \
    makenotewindow.ui \
    showdatadialog.ui

TRANSLATIONS += \
    FTSPredictionProgram_en_US.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    FTSPredictionProgram.pro.user

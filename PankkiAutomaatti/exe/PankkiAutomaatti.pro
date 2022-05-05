QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    errorsivu.cpp \
    main.cpp \
    mainwindow.cpp \
    naytasaldo.cpp \
    nostarahaa.cpp \
    omasumma.cpp \
    pankkimenu.cpp \
    selaatilitapahtumia.cpp

HEADERS += \
    errorsivu.h \
    mainwindow.h \
    naytasaldo.h \
    nostarahaa.h \
    omasumma.h \
    pankkimenu.h \
    selaatilitapahtumia.h

FORMS += \
    errorsivu.ui \
    mainwindow.ui \
    naytasaldo.ui \
    nostarahaa.ui \
    omasumma.ui \
    pankkimenu.ui \
    selaatilitapahtumia.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../DLLPinCode/build/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../DLLPinCode
DEPENDPATH += $$PWD/../DLLPinCode

win32: LIBS += -L$$PWD/../DLLRestAPI/build/debug/ -lDLLRestAPI

INCLUDEPATH += $$PWD/../DLLRestAPI
DEPENDPATH += $$PWD/../DLLRestAPI
QT +=network


QT +=serialport

win32: LIBS += -L$$PWD/../DLLSerialPort/DLLSerialPort/build/debug/ -lDLLSerialPort

INCLUDEPATH += $$PWD/../DLLSerialPort
DEPENDPATH += $$PWD/../DLLSerialPort

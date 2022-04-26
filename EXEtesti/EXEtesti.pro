QT       += core gui
QT +=network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    naytasaldo.cpp \
    nostarahaa.cpp \
    omasumma.cpp \
    selaatilitapahtumia.cpp \
    valikko.cpp

HEADERS += \
    mainwindow.h \
    naytasaldo.h \
    nostarahaa.h \
    omasumma.h \
    selaatilitapahtumia.h \
    valikko.h

FORMS += \
    mainwindow.ui \
    naytasaldo.ui \
    nostarahaa.ui \
    omasumma.ui \
    selaatilitapahtumia.ui \
    valikko.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../group2/PankkiAutomaatti/DLLRestAPI/build/debug/ -lDLLRestAPI

INCLUDEPATH += $$PWD/../group2/PankkiAutomaatti/DLLRestAPI
DEPENDPATH += $$PWD/../group2/PankkiAutomaatti/DLLRestAPI

win32: LIBS += -L$$PWD/../group2/PankkiAutomaatti/DLLPinCode/build/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../group2/PankkiAutomaatti/DLLPinCode
DEPENDPATH += $$PWD/../group2/PankkiAutomaatti/DLLPinCode

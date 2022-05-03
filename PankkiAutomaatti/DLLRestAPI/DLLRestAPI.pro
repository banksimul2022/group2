QT += gui
QT +=network

TEMPLATE = lib
DEFINES += DLLRESTAPI_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    asiakas.cpp \
    configurations.cpp \
    dllrestapi.cpp \
    login.cpp \
    lukitus.cpp \
    posttilitapahtumat.cpp \
    putlukitus.cpp \
    putsaldo.cpp \
    saldo.cpp \
    singleton.cpp \
    tilitapahtumat.cpp \
    url.cpp

HEADERS += \
    DLLRestAPI_global.h \
    asiakas.h \
    configurations.h \
    dllrestapi.h \
    login.h \
    lukitus.h \
    posttilitapahtumat.h \
    putlukitus.h \
    putsaldo.h \
    saldo.h \
    singleton.h \
    tilitapahtumat.h \
    url.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

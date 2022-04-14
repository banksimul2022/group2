#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "mysingleton.h"
#include <qstring.h>

class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();
    void setPinKort(QString kortinnumero, QString pinkoodi);
    bool getTrueFalse();
    QString getTiedot();
    QByteArray getToken();
    void startAsiakas();
    void setToken(QByteArray);
private:
    Login *objectLogin;
    Asiakas *objectAsiakas;
};

#endif // DLLRESTAPI_H

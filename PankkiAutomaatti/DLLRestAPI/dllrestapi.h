#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include <qstring.h>

class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();

    void setPinKort(QString kortinnumero, QString pinkoodi);
    bool getTrueFalse();

    QString getAsiakas();
    void startAsiakas();

    QString getSaldo();
    void startSaldo();

private:
    Login *objectLogin;
    Asiakas *objectAsiakas;
    Saldo * objectSaldo;
};

#endif // DLLRESTAPI_H

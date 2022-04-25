#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include "putsaldo.h"
#include "posttilitapahtumat.h"
#include <qstring.h>

class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();

    void setPinKort(QString kortinnumero, QString pinkoodi);
    bool getTrueFalse();

    void startAsiakas();
    void startSaldo();
    void startTilitapahtumat();
    void startPutSaldo();
    void startPostTilitapahtumat();

    Login *objectLogin;
    Asiakas *objectAsiakas;
    Saldo * objectSaldo;
    Tilitapahtumat *objectTilitapahtumat;
    putSaldo *objectPutSaldo;
    postTilitapahtumat *objectPostTilitapahtumat;

private:    

};

#endif // DLLRESTAPI_H

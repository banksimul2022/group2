#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "asiakas.h"
#include "login.h"
#include "saldo.h"
#include "tilitapahtumat.h"
#include "putsaldo.h"
#include "posttilitapahtumat.h"
#include "lukitus.h"
#include "putlukitus.h"
#include "maxtilitapahtumat.h"
#include <qstring.h>

class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();

    void startAsiakas();
    void startSaldo();
    void startTilitapahtumat();
    void startPutSaldo();
    void startPostTilitapahtumat();
    void startLogin();
    void startMaxTilitapahtumat();

    Login *objectLogin;

    Asiakas *objectAsiakas;
    Saldo * objectSaldo;
    Tilitapahtumat *objectTilitapahtumat;
    putSaldo *objectPutSaldo;
    postTilitapahtumat *objectPostTilitapahtumat;
    Lukitus *objectLukitus;
    putLukitus *objectPutLukitus;
    maxTilitapahtumat *objectMaxTilitapahtumat;


private:   

};

#endif // DLLRESTAPI_H

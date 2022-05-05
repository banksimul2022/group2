#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

    objectLogin = new Login;
    objectAsiakas = new Asiakas;
    objectSaldo = new Saldo;
    objectTilitapahtumat = new Tilitapahtumat;
    objectPutSaldo = new putSaldo;
    objectPostTilitapahtumat = new postTilitapahtumat;
    objectLukitus = new Lukitus;
    objectPutLukitus = new putLukitus;
    objectMaxTilitapahtumat = new maxTilitapahtumat;
}

DLLRestAPI::~DLLRestAPI()
{
    qDebug()<<"DLLRestAPi tuhoajassa";

    delete objectLogin;
    objectLogin = nullptr;

    delete objectAsiakas;
    objectAsiakas = nullptr;

    delete objectSaldo;
    objectSaldo = nullptr;

    delete objectTilitapahtumat;
    objectTilitapahtumat = nullptr;

    delete objectPutSaldo;
    objectPutSaldo = nullptr;

    delete objectPostTilitapahtumat;
    objectPostTilitapahtumat = nullptr;

    delete objectLukitus;
    objectLukitus = nullptr;

    delete objectPutLukitus;
    objectPutLukitus = nullptr;

    delete objectMaxTilitapahtumat;
    objectMaxTilitapahtumat = nullptr;
}

void DLLRestAPI::startAsiakas()
{
    objectAsiakas->getAsiakas();
}

void DLLRestAPI::startSaldo()
{
    objectSaldo->getSaldo();
}


void DLLRestAPI::startPutSaldo()
{
    objectPutSaldo->updateSaldo();
}

void DLLRestAPI::startPostTilitapahtumat()
{
    objectPostTilitapahtumat->addTilitapahtuma();
}


void DLLRestAPI::startMaxTilitapahtumat()
{
    objectMaxTilitapahtumat->getMaxID();
}


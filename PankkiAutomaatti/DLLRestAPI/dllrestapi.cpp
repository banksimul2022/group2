#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

    objectLogin = new Login;
    objectAsiakas = new Asiakas;
    objectSaldo = new Saldo;
    objectTilitapahtumat = new Tilitapahtumat;
}

DLLRestAPI::~DLLRestAPI()
{
    qDebug()<<"DLLRestAPi tuhoajassa";

    delete objectLogin;
    objectLogin = nullptr;

    delete objectAsiakas;
    objectAsiakas = nullptr;
}

void DLLRestAPI::setPinKort(QString kortinnumero, QString pinkoodi)
{
    qDebug()<<"setPinKort";

    objectLogin->setPinKort(kortinnumero,pinkoodi);
    objectLogin->getPin();
}

void DLLRestAPI::startAsiakas()
{
    objectAsiakas->setWebtoken();
}

void DLLRestAPI::startSaldo()
{
    objectSaldo->setWebToken();
}

void DLLRestAPI::startTilitapahtumat()
{
    objectTilitapahtumat->setWebToken();
}


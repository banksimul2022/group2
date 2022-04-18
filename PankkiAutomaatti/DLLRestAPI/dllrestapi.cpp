#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

    objectLogin = new Login;
    objectAsiakas = new Asiakas;
    objectSaldo = new Saldo;
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

bool DLLRestAPI::getTrueFalse()
{
    return objectLogin->getResult();
}

QString DLLRestAPI::getAsiakas()
{
    qDebug()<<"getAsiakas";
    return objectAsiakas -> getAsiakas();
}

void DLLRestAPI::startAsiakas()
{
    objectAsiakas->setWebtoken();
}

QString DLLRestAPI::getSaldo()
{
    qDebug() << "getSaldo";
    return objectSaldo->getSaldo();
}

void DLLRestAPI::startSaldo()
{
    objectSaldo->setWebToken();
}

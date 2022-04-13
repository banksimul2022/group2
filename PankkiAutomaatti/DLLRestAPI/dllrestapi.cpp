#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

    objectLogin = new Login;
    objectAsiakas = new Asiakas;
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

QString DLLRestAPI::getTiedot()
{
    qDebug()<<"getTiedot";
    //objectAsiakas->getAsiakas();
    return objectAsiakas -> getTiedot();
}

QByteArray DLLRestAPI::getToken()
{
    return objectLogin -> getToken();
}

void DLLRestAPI::startAsiakas()
{
    objectAsiakas->getAsiakas();
}

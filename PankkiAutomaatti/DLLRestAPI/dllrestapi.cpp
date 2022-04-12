#include "dllrestapi.h"

DLLRestAPI::DLLRestAPI()
{
    qDebug()<<"DLLRestAPI muodostimessa";

    objectLogin = new Login;
}

DLLRestAPI::~DLLRestAPI()
{
    qDebug()<<"DLLRestAPi tuhoajassa";

    delete objectLogin;
    objectLogin = nullptr;
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

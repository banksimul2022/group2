#include "dllpincode.h"


DLLPinCode::DLLPinCode(QObject *parent) : QObject(parent)
{
    objectDialog=new Dialog;
}

DLLPinCode::~DLLPinCode()
{
    delete objectDialog;
    objectDialog = nullptr;
}

void DLLPinCode::openDllDialog(QString kortinnumero)
{
    qDebug()<<kortinnumero;


    objectDialog->setCardNumber(kortinnumero);

    qDebug()<<"setCardNumber funktio tehty";

    objectDialog->exec();
    dllValue=objectDialog->getDialogValue();
}

QString DLLPinCode::returnFromDll()
{
    qDebug()<<dllValue;

    return dllValue;
}

#include "dllpincode.h"


void DLLPinCode::openDllDialog(QString kortinnumero)
{
    qDebug()<<kortinnumero;

    objectDialog=new Dialog;
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

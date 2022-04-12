#include "dllpincode.h"


void DLLPinCode::openDllDialog(QString kortinnumero)
{
    qDebug()<<kortinnumero;

    objectDialog=new Dialog;
    objectDialog->setCardNumber(kortinnumero);

    qDebug()<<"setCardNumber funktio tehty";

    objectDialog->exec();
    dllValue=objectDialog->getDialogValue();

    delete objectDialog;
    objectDialog = nullptr;
}

QString DLLPinCode::returnFromDll()
{
    qDebug()<<dllValue;
    return dllValue;
}

void DLLPinCode::truefalse(bool x)
{
    if (x==false){
        objectDialog->addTries();
    }
    else{
        qDebug()<<x;
    }
}

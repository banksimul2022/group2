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

void DLLPinCode::openDllDialog()
{
    objectDialog->exec();
    dllValue=objectDialog->getDialogValue();
}

QString DLLPinCode::returnFromDll()
{
    qDebug()<<dllValue;

    return dllValue;
}

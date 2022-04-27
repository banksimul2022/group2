#include "dllserialport.h"



DLLSerialPort::DLLSerialPort(QObject *parent) : QObject(parent)
{
    objectSerialEngine = new SerialEngine;
}

DLLSerialPort::~DLLSerialPort()
{
    delete objectSerialEngine;
    objectSerialEngine = nullptr;
}

void DLLSerialPort::InterfaceOpenSerialPort()
{

}

void DLLSerialPort::InterfaceCloseSerialPort()
{

}

QString DLLSerialPort::InterfaceReturnCardNumber()
{
    return objectSerialEngine->returnCardNumber();
}


void DLLSerialPort::dllSerialPortSlot()
{

}


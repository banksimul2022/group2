#include "serialengine.h"

SerialEngine::SerialEngine(QObject *parent) : QObject(parent)
{
    objectQSerialPort = new QSerialPort;

    qDebug()<<"serialengine.h konstruktori";
    objectQSerialPort->setPortName("COM4");
    objectQSerialPort->setBaudRate(9600);
            objectQSerialPort->setDataBits(QSerialPort::DataBits(8));
            objectQSerialPort->setParity(QSerialPort::Parity(0));
            objectQSerialPort->setStopBits(QSerialPort::StopBits(1));
            objectQSerialPort->setFlowControl(QSerialPort::FlowControl(0));

    connect(objectQSerialPort, SIGNAL(readyRead()), this, SLOT(readPort()));

    if(objectQSerialPort->open(QIODevice::ReadWrite)){
        qDebug()<<objectQSerialPort->errorString();
    }  else {
        qDebug()<<"Serial open ok";

    }
}

SerialEngine::~SerialEngine()
{
    delete objectQSerialPort;
    objectQSerialPort = nullptr;
}

void SerialEngine::openSerialPort()
{

}

void SerialEngine::closeSerialPort()
{

}

QString SerialEngine::returnCardNumber()
{
    return cardSerialNumber;
}


void SerialEngine::readPort()
{
     qDebug()<<"ReadAll readPort slotissa" + objectQSerialPort->readAll();
     cardSerialNumber = objectQSerialPort->readAll();
     qDebug()<<"CardSerialNumber" + cardSerialNumber;
}

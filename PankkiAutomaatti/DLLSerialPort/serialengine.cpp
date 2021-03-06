#include "serialengine.h"

SerialEngine::SerialEngine(QObject *parent) : QObject(parent)
{
    objectQSerialPort = new QSerialPort;

    qDebug()<<"serialengine.h konstruktori";
    objectQSerialPort->setPortName("COM3");
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
    SignalCounter =0;
    cardSerialNumber = "";
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
    SignalCounter++;
    // qDebug()<<"ReadAll readPort slotissa" + objectQSerialPort->readAll();
     cardSerialNumber += objectQSerialPort->readAll();
     qDebug()<<"CardSerialNumber: " + cardSerialNumber;

     if (SignalCounter == 16){
         SignalCounter = 0;

     }
    if(cardSerialNumber == "AAAAAAAAAAAAAAAA"){
        cardSerialNumber = "1111111111111111";
        qDebug()<<"Tämä lähetetään: " + cardSerialNumber;
        emit sendCardSerialNumber(cardSerialNumber);
        cardSerialNumber="";
    }
    if(cardSerialNumber == "BBBBBBBBBBBBBBBB"){
        cardSerialNumber = "2222222222222222";
        qDebug()<<"Tämä lähetetään: " + cardSerialNumber;
        emit sendCardSerialNumber(cardSerialNumber);
        cardSerialNumber="";
    }
    if(cardSerialNumber == "CCCCCCCCCCCCCCCC"){
        cardSerialNumber = "3333333333333333";
        qDebug()<<"Tämä lähetetään: " + cardSerialNumber;
        emit sendCardSerialNumber(cardSerialNumber);
        cardSerialNumber="";
    }
}

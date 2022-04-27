#ifndef DLLSERIALPORT_H
#define DLLSERIALPORT_H

#include "DLLSerialPort_global.h"
#include "serialengine.h"

class DLLSERIALPORT_EXPORT DLLSerialPort : public QObject
{
public:
    DLLSerialPort(QObject *parent = nullptr);
    ~DLLSerialPort();

    void InterfaceOpenSerialPort();
    void InterfaceCloseSerialPort();
    QString InterfaceReturnCardNumber();
    SerialEngine *objectSerialEngine;

private:
    QString dllcardSerialEngine;


 private slots:
    void dllSerialPortSlot();


 signals:
    void DataReadDone();


};

#endif // DLLSERIALPORT_H

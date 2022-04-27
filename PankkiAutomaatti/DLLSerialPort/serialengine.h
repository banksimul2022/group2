#ifndef SERIALENGINE_H
#define SERIALENGINE_H

#include <QObject>
#include <QSerialPort>
#include <QDebug>
#include <QString>

class SerialEngine : public QObject
{
    Q_OBJECT
public:
    explicit SerialEngine(QObject *parent = nullptr);
    ~SerialEngine();
    void openSerialPort();
    void closeSerialPort();
    QString returnCardNumber();

private:
    QString cardSerialNumber;
    QSerialPort *objectQSerialPort;

signals:
    void readySignal();

private slots:
    void readPort();

};

#endif // SERIALENGINE_H

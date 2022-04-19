#ifndef SALDO_H
#define SALDO_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "url.h"
#include "singleton.h"

class Saldo : public QObject
{
    Q_OBJECT
public:
    explicit Saldo(QObject *parent = nullptr);
    ~Saldo();
    void setWebToken();
    void setPinKort(QString asKortinnumero, QString asPinkoodi);
    QString getSaldo();

private slots:
    void saldoSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager * saldoManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero, saldo;
    QString base_url;
    QByteArray webToken;

    Url *objectUrl;

signals:

};

#endif // SALDO_H
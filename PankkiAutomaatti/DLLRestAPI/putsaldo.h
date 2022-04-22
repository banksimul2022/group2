#ifndef PUTSALDO_H
#define PUTSALDO_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "url.h"
#include "singleton.h"

class putSaldo : public QObject
{
    Q_OBJECT
public:
    explicit putSaldo(QObject *parent = nullptr);
    ~putSaldo();
    void updateSaldo();

private slots:
    void updateSaldoSlot (QNetworkReply *reply);
    void getLoppuSaldo(double);

signals:

private:
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url *objectUrl;

    QString Kortinnumero;
    QString base_url;
    QByteArray webToken;
    double saatuSaldo;

};

#endif // PUTSALDO_H

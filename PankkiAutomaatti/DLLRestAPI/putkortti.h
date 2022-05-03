#ifndef PUTKORTTI_H
#define PUTKORTTI_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "url.h"
#include "singleton.h"

class putKortti : public QObject
{
    Q_OBJECT
public:
    explicit putKortti(QObject *parent = nullptr);
    ~putKortti();
    void updateKortti();

signals:

private slots:
    void updateKorttiSlot (QNetworkReply *reply);
    void receiveSignal();

private:
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url *objectUrl;

    QString Kortinnumero;
    QByteArray webToken;

};

#endif // PUTKORTTI_H

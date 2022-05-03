#ifndef PUTLUKITUS_H
#define PUTLUKITUS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "url.h"
#include "singleton.h"

class putLukitus : public QObject
{
    Q_OBJECT
public:
    explicit putLukitus(QObject *parent = nullptr);
    ~putLukitus();
    void updateLukitus();

signals:

private slots:
    void updateLukitusSlot(QNetworkReply *reply);
    void receiveSignal();

private:
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url *objectUrl;

    QString Kortinnumero;
    QByteArray webToken;

};

#endif // PUTLUKITUS_H

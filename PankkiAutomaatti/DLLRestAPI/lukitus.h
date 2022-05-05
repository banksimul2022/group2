#ifndef LUKITUS_H
#define LUKITUS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "url.h"
#include "singleton.h"

class Lukitus : public QObject
{
    Q_OBJECT
public:
    explicit Lukitus(QObject *parent = nullptr);
    ~Lukitus();
    void getLukitus();

signals:
    void sendLukitus(QString);

private slots:
    void LukitusSlot(QNetworkReply *reply);
    void receiveClicked();

private:
    QNetworkAccessManager * getManager;
    QNetworkReply * reply;
    QByteArray response_data;

    Url * objectUrl;

    QString Kortinnumero, Pinkoodi, lukittu;
    QByteArray webToken;



};

#endif // LUKITUS_H

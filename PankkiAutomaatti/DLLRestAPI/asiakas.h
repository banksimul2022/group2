#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "url.h"
#include "singleton.h"

class Asiakas : public QObject
{
    Q_OBJECT
public:
    explicit Asiakas( QObject *parent = nullptr);
    ~Asiakas();
    void getAsiakas();

private slots:
    void asiakasSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager * getManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero, Pinkoodi, asiakas, nimi;
    QByteArray webToken;

    Url * objectUrl;


signals:
    void sendAsiakas(QString);
    void sendNimi(QString);

};

#endif // ASIAKAS_H

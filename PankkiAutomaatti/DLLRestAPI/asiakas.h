#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "url.h"
#include "mysingleton.h"

class Asiakas : public QObject
{
    Q_OBJECT
public:
    explicit Asiakas( QObject *parent = nullptr);
    ~Asiakas();
    void getAsiakas();
    void setPinKort(QString asKortinnumero, QString asPinkoodi);
    QString getTiedot();
    void setToken(QByteArray token);

private slots:
    void asiakasSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager * asiakasManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero;
    QString Pinkoodi;
    QByteArray webToken;
    QString asiakas;
    QString base_url;

    Url * objectUrl;
    MySingleton * my = MySingleton::getInstance();


signals:

};

#endif // ASIAKAS_H

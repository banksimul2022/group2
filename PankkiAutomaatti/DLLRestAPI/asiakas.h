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
    void setWebtoken();
    void setPinKort(QString asKortinnumero, QString asPinkoodi);
    QString getAsiakas();

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


signals:

};

#endif // ASIAKAS_H

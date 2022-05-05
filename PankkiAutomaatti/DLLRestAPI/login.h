#ifndef LOGIN_H
#define LOGIN_H

#include "url.h"
#include "singleton.h"

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class Login : public QObject
{
    Q_OBJECT
public:
    explicit Login(QObject *parent = nullptr);
    ~Login();
    void postLogin();

private slots:
    void loginSlot(QNetworkReply *reply);
    void receivePincode(QString);
    void receiveSignal();
    void receiveCardNum(QString);

private:
    QNetworkAccessManager * postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url * objectUrl;

    QByteArray token;
    QString Kortinnumero;
    QString Pinkoodi;
    QString trueFalse;
    QString base_url;
    QString lukittu;



signals:
    void getTrueFalse(QString);
};

#endif // LOGIN_H

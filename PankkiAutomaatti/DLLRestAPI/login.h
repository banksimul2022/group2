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
    void getPin();

private slots:
    void loginSlot(QNetworkReply *reply);
    void receivePincode(QString);
    void receiveSignal();

private:
    QNetworkAccessManager * postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString kortnro = "1111111111";
    QString Kortinnumero;
    QString Pinkoodi;
    QString trueFalse;
    QString base_url;
    QString lukittu;
    QByteArray token;

    Url * objectUrl;

signals:
    void getTrueFalse(QString);
};

#endif // LOGIN_H

#ifndef LOGIN_H
#define LOGIN_H

#include "mysingleton.h"
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
    void setPinKort(QString kortinnumero, QString pinkoodi);
    void getPin();
    bool getResult();
    QByteArray getToken();


private slots:
    void loginSlot(QNetworkReply *reply);
private:
    QNetworkAccessManager * postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString Kortinnumero;
    QString Pinkoodi;
    QByteArray token;
    bool trueFalse;

    Url * objectUrl;
    QString base_url;
    MySingleton * my = MySingleton::getInstance();
};

#endif // LOGIN_H

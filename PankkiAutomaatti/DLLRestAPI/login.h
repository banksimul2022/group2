#ifndef LOGIN_H
#define LOGIN_H

#include "url.h"

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class Login : public QObject
{
    Q_OBJECT
public:
    explicit Login(QString asKortinnumero, QString asPinkoodi, QObject *parent = nullptr);
    ~Login();
    void loginClicked();

private slots:
    void getPin (QNetworkReply *reply);

private:

    QNetworkAccessManager * postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString Kortinnumero;
    QString Pinkoodi;
    QByteArray token;

    Url * objectUrl;
    QString base_url;

signals:

};

#endif // LOGIN_H

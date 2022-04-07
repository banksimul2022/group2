#ifndef EXTRACLASS_H
#define EXTRACLASS_H

#include <QString>
#include <QDebug>
#include <stdio.h>
#include <QDebug>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class ExtraClass
{
public:
    ExtraClass();
    ~ExtraClass();
    bool comparePIN(QString userPWD,QString dbPWD);
    int pwdTries();
    void resetTries();
private:
    QString cardnumber;
    QString userPIN;
    QString dbPIN;
    QString ID;
    bool ok;
    int tries=0;
    QNetworkAccessManager * loginManager;
    QNetworkReply *reply;
    QByteArray response_data;
    QByteArray token;
private slots:
    void loginSlot(QNetworkReply *reply);
};

#endif // EXTRACLASS_H

#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

#include "url.h"
#include "singleton.h"

class Tilitapahtumat : public QObject
{
    Q_OBJECT
public:
    explicit Tilitapahtumat(QObject *parent = nullptr);
    ~Tilitapahtumat();
    void setWebToken();
    QString getTilitapahtumat();

private slots:
    void tilitapahtumatSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager * tilitapahtumatManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero, tilitapahtumat;
    QString base_url;
    QByteArray webToken;

    Url *objectUrl;

signals:

};

#endif // TILITAPAHTUMAT_H

#ifndef TILITAPAHTUMAT_H
#define TILITAPAHTUMAT_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QStandardItem>
#include <QStandardItemModel>

#include "url.h"
#include "singleton.h"

class Tilitapahtumat : public QObject
{
    Q_OBJECT
public:
    explicit Tilitapahtumat(QObject *parent = nullptr);
    ~Tilitapahtumat();
    void setWebToken();
    void asiakasLista();

    QString getTilitapahtumat();

private slots:
    void tilitapahtumatSlot(QNetworkReply *reply);
    void setIDTilitapahtumat(int);

private:
    QNetworkAccessManager * tilitapahtumatManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero, tilitapahtumat, base_url, muutettuID;
    int idTilitapahtumat;
    QByteArray webToken;

    Url *objectUrl;

signals:
    void sendTilitapahtumat(QString);

};

#endif // TILITAPAHTUMAT_H

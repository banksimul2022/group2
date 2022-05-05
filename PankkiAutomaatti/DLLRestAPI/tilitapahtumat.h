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
    void getTilitapahtumat();

private slots:
    void tilitapahtumatSlot(QNetworkReply *reply);
    void setIDTilitapahtumat(int);

private:
    QNetworkAccessManager * getManager;
    QNetworkReply * reply;
    QByteArray response_data;

    Url *objectUrl;

    QByteArray webToken;
    QString Kortinnumero, tilitapahtumat, muutettuID, maxID;
    int idTilitapahtumat;


signals:
    void sendTilitapahtumat(QString);
    void sendMaxID(QString);

};

#endif // TILITAPAHTUMAT_H

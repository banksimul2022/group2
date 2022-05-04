#ifndef MAXTILITAPAHTUMAT_H
#define MAXTILITAPAHTUMAT_H

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QStandardItem>
#include <QStandardItemModel>

#include "url.h"
#include "singleton.h"

class maxTilitapahtumat : public QObject
{
    Q_OBJECT
public:
    explicit maxTilitapahtumat(QObject *parent = nullptr);
    ~maxTilitapahtumat();
    void getMaxID();

signals:
    void sendMaxID(QString);

private slots:
    void getMaxIDSlot(QNetworkReply *reply);

private:
    QNetworkAccessManager * tilitapahtumatManager;
    QNetworkReply * reply;
    QByteArray response_data;

    QString Kortinnumero, maxID;
    QByteArray webToken;

    Url *objectUrl;

};

#endif // MAXTILITAPAHTUMAT_H

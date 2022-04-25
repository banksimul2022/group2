#ifndef POSTTILITAPAHTUMAT_H
#define POSTTILITAPAHTUMAT_H

#include "url.h"
#include "singleton.h"
#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QDateTime>

class postTilitapahtumat : public QObject
{
    Q_OBJECT
public:
    explicit postTilitapahtumat(QObject *parent = nullptr);
    ~postTilitapahtumat();
    void addTilitapahtuma();

signals:

private slots:
    void addTilitapahtumaSlot(QNetworkReply *reply);
    void idSlot(QString, QString);
    void summaSlot(double);

private:
    QNetworkAccessManager *postManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url *objectUrl;

    QString Kortinnumero;
    QString base_url;
    QString tapahtuma;
    QByteArray webToken;
    QString timeDate;
    QDateTime date;
    double saatuSumma;
    QString idKortti, idTili;

};

#endif // POSTTILITAPAHTUMAT_H

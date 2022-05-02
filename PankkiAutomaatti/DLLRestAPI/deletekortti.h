#ifndef DELETEKORTTI_H
#define DELETEKORTTI_H

#include "url.h"
#include "singleton.h"

#include <QObject>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class DeleteKortti : public QObject
{
    Q_OBJECT
public:
    explicit DeleteKortti(QObject *parent = nullptr);
    ~DeleteKortti();
    void setWebToken();

signals:

private slots:
    void deleteKorttiSlot(QNetworkReply *reply);
    void startDelete();

private:
    QNetworkAccessManager *deleteManager;
    QNetworkReply *reply;
    QByteArray response_data;

    Url *objectUrl;

    QString Kortinnumero;
    QString base_url;
    QByteArray webToken;

};

#endif // DELETEKORTTI_H

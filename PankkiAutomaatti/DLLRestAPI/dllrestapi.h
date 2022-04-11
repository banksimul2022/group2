#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "url.h"

#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

class DLLRESTAPI_EXPORT DLLRestAPI
{

public:
    DLLRestAPI(QString asKortinnumero, QString asToken);
    ~DLLRestAPI();


private slots:
    void asiakasSlot(QNetworkAccessManager *reply);
    void getAsiakas();

private:
    QNetworkAccessManager *asiakasManager;
    QNetworkReply *reply;
    QByteArray response_data;

    QString kortinnumero;
    QString pinkoodi;
    QByteArray webToken;

    Url * objectUrl;
};

#endif // DLLRESTAPI_H

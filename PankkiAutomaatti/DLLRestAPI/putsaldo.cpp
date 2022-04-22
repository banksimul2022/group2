#include "putsaldo.h"

putSaldo::putSaldo(QObject *parent) : QObject(parent)
{
    putManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

putSaldo::~putSaldo()
{
    delete objectUrl;
    objectUrl = nullptr;

    delete putManager;
    putManager = nullptr;
}

void putSaldo::updateSaldo()
{
    QJsonObject jsonObj;
    jsonObj.insert("Saldo",saatuSaldo);

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/tili/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateSaldoSlot(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
}

void putSaldo::updateSaldoSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

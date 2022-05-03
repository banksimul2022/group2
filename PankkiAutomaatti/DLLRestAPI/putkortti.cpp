#include "putkortti.h"

putKortti::putKortti(QObject *parent) : QObject(parent)
{
    putManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

putKortti::~putKortti()
{
    delete putManager;
    putManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void putKortti::updateKortti()
{
    qDebug()<<"updateSlot";
    QJsonObject jsonObj;
    jsonObj.insert("Lukittu",1);

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/kortti/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateSaldoSlot(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
}

void putKortti::updateKorttiSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void putKortti::receiveSignal()
{
    updateKortti();
}

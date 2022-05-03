#include "putlukitus.h"

putLukitus::putLukitus(QObject *parent) : QObject(parent)
{
    putManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

putLukitus::~putLukitus()
{
    delete objectUrl;
    objectUrl = nullptr;

    delete putManager;
    putManager = nullptr;
}

void putLukitus::updateLukitus()
{
    QJsonObject jsonObj;
    jsonObj.insert("Lukittu",1);

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/lukitus/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    connect(putManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(updateLukitusSlot(QNetworkReply*)));

    reply = putManager->put(request, QJsonDocument(jsonObj).toJson());
}

void putLukitus::updateLukitusSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    putManager->deleteLater();
}

void putLukitus::receiveSignal()
{
    updateLukitus();
}

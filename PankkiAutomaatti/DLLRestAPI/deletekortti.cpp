#include "deletekortti.h"

DeleteKortti::DeleteKortti(QObject *parent) : QObject(parent)
{
    deleteManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
    base_url = objectUrl -> getBase_url()+"/kortti/"+Kortinnumero;
}

DeleteKortti::~DeleteKortti()
{
    delete deleteManager;
    deleteManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void DeleteKortti::setWebToken()
{
    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QNetworkRequest request((base_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    connect(deleteManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(deleteKorttiSlot(QNetworkReply*)));

    reply = deleteManager->deleteResource(request);
}

void DeleteKortti::deleteKorttiSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    deleteManager->deleteLater();
}

void DeleteKortti::startDelete()
{
    setWebToken();
}

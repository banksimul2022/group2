#include "login.h"

Login::Login(QString asKortinnumero, QString asPinkoodi, QObject *parent) : QObject(parent)
{
    objectUrl = new Url;
    base_url = objectUrl -> getBase_url();

    Kortinnumero = asKortinnumero;
    Pinkoodi = asPinkoodi;
    postManager = new QNetworkAccessManager(this);
}

Login::~Login()
{
    delete objectUrl;
    objectUrl = nullptr;
}

void Login::getPin(QNetworkReply *reply)
{
    QJsonObject jsonObj;
    jsonObj.insert("Kortinnumero", Kortinnumero);
    jsonObj.insert("Pinkoodi", Pinkoodi);

    QNetworkRequest request((base_url+"/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());

    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    postManager->deleteLater();

    if(response_data!="false"){
        token = "Bearer "+response_data;
    }
}

#include "lukitus.h"

Lukitus::Lukitus(QObject *parent) : QObject(parent)
{
    lukitusManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

Lukitus::~Lukitus()
{
    delete lukitusManager;
    lukitusManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Lukitus::getLukitus()
{
    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/lukitus/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton * s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    qDebug()<<"WebToken alku";
    qDebug()<<webToken;

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    qDebug()<<"Connectia edeltävä";
    connect(lukitusManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(getLukitusSlot(QNetworkReply*)));
    reply = lukitusManager->get(request);
    response_data = lukitusManager->get(request)->readAll();
}

void Lukitus::getLukitusSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           lukittu=json_obj["Lukittu"].toString();
       }
       emit sendLukitus(lukittu);
}

void Lukitus::receiveClicked()
{
    getLukitus();
}

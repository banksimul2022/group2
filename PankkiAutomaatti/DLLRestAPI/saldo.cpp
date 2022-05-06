#include "saldo.h"

Saldo::Saldo(QObject *parent) : QObject(parent)
{
    getManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

Saldo::~Saldo()
{
    disconnect(getManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(saldoSlot(QNetworkReply*)));

    delete reply;
    reply=nullptr;

    delete getManager;
    getManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Saldo::getSaldo()
{
    qDebug()<<"saldon setWebToken";

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/tili/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    qDebug()<<"Connectia edeltävä";
    connect(getManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(saldoSlot(QNetworkReply*)));

    reply = getManager->get(request);
    response_data = getManager->get(request)->readAll();
}

void Saldo::saldoSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           saldo=QString::number(json_obj["Saldo"].toInt());
           idKortti=QString::number(json_obj["idKortti"].toInt());
           idTili=QString::number(json_obj["idTili"].toInt());
       }

       qDebug()<<"Saldo DLL: "+saldo;
       qDebug()<<"Tässä on idKortti: " + idKortti + " ja tässä idTili: " + idTili;
       emit sendID(idKortti, idTili);
       emit sendSaldo(saldo);
}

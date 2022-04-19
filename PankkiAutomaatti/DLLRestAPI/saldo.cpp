#include "saldo.h"

Saldo::Saldo(QObject *parent) : QObject(parent)
{
    saldoManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
    base_url = objectUrl -> getBase_url();
}

Saldo::~Saldo()
{
    delete saldoManager;
    saldoManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Saldo::setWebToken()
{
    qDebug()<<"saldon setWebToken";

    Singleton *a = a->getSingletonInstance();
    a->setSingletonCardNum(Kortinnumero);

    QString site_url = objectUrl->getBase_url()+"/tili/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    qDebug()<<"WebToken alku";
    qDebug()<<webToken;

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    qDebug()<<"Connectia edeltävä";
    connect(saldoManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(saldoSlot(QNetworkReply*)));
    reply = saldoManager->get(request);
    response_data = saldoManager->get(request)->readAll();
}

QString Saldo::getSaldo()
{
    return saldo;
}

void Saldo::saldoSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           saldo+=QString::number(json_obj["Saldo"].toInt());
       }

       qDebug()<<saldo;
}

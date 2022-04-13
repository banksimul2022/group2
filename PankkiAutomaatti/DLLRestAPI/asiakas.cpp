#include "asiakas.h"

Asiakas::Asiakas(QObject *parent): QObject(parent)
{
    asiakasManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
    base_url = objectUrl -> getBase_url();
    my = new MySingleton;
    webToken = my ->getToken();
}

Asiakas::~Asiakas()
{
    delete asiakasManager;
    asiakasManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Asiakas::getAsiakas()
{
    qDebug()<<"getAsiakas";
    //QString site_url = objectUrl->getBase_url()+"/asiakas/"+Kortinnumero;
    QNetworkRequest request((base_url+"/asiakas"+Kortinnumero));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    qDebug()<<"WebToken alku";
    qDebug()<<webToken;
    //WEBTOKEN ALKU
    request.setRawHeader(QByteArray("Authorization"),(webToken));
    //WEBTOKEN LOPPU
    qDebug()<<"Connectia edeltävä";
    connect(asiakasManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(asiakasSlot(QNetworkReply*)));
    reply = asiakasManager->get(request);
    response_data = asiakasManager->get(request)->readAll();
}

void Asiakas::setPinKort(QString asKortinnumero, QString asPinkoodi)
{
    Kortinnumero = asKortinnumero;
    Pinkoodi = asPinkoodi;
}

QString Asiakas::getTiedot()
{
    return asiakas;
}

void Asiakas::asiakasSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           asiakas+=json_obj["Etunimi"].toString()+""+json_obj["Sukunimi"].toString()+"\r"+json_obj["Henkilötunnus"].toString()+"\r"+json_obj["Osoite"].toString()+"\n"+QString::number(json_obj["Puhelinnumero"].toInt())+"\r";
       }

       qDebug()<<asiakas;
}

#include "asiakas.h"

Asiakas::Asiakas(QObject *parent): QObject(parent)
{
    asiakasManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
    base_url = objectUrl -> getBase_url();
}

Asiakas::~Asiakas()
{
    delete asiakasManager;
    asiakasManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Asiakas::setWebtoken()
{
    qDebug()<<"asiakkaan setWebToken";

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/asiakas/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton * s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

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

QString Asiakas::getAsiakas()
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
           asiakas+=json_obj["Etunimi"].toString()+""+json_obj["Sukunimi"].toString()+"\n"+json_obj["Henkilötunnus"].toString()+"\n"+json_obj["Osoite"].toString()+"\n"+json_obj["Puhelinnumero"].toString()+"\r";
       }

       emit sendAsiakas(asiakas);
       //qDebug()<<asiakas;
}

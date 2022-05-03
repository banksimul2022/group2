#include "asiakas.h"

Asiakas::Asiakas(QObject *parent): QObject(parent)
{
    asiakasManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
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

    request.setRawHeader(QByteArray("Authorization"),(webToken));

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
           asiakas="Nimi: "+json_obj["Etunimi"].toString()+" "+json_obj["Sukunimi"].toString()+"\n"+"Henkilötunnus: "+json_obj["Henkilötunnus"].toString()+"\n"+"Osoite: "+json_obj["Osoite"].toString()+"\n"+"Puhelinnumero: "+json_obj["Puhelinnumero"].toString()+"\r";
           nimi=json_obj["Etunimi"].toString()+" "+json_obj["Sukunimi"].toString()+"\n";
       }

       emit sendAsiakas(asiakas);
       emit sendNimi(nimi);
       //qDebug()<<nimi;
       qDebug()<<"Asiakkaan tiedot";

}

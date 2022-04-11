#include "dllrestapi.h"


DLLRestAPI::DLLRestAPI(QString asKortinnumero, QString asToken)
{
    objectUrl = new Url;
    asKortinnumero = kortinnumero;
    asToken = webToken;
}

DLLRestAPI::~DLLRestAPI()
{

}

void DLLRestAPI::getAsiakas()
{
    QString site_url = objectUrl->getBase_url()+"/asiakas/"+kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //WEBTOKEN ALKU
    request.setRawHeader(QByteArray("Authorization"),(webToken));
    //WEBTOKEN LOPPU

    asiakasManager = new QNetworkAccessManager(this);
    connect(asiakasManager, SIGNAL(finished (QNetworkReply*)),this, SLOT(gradeSlot(QNetworkReply*)));
    reply = asiakasManager->get(request);

}

void DLLRestAPI::asiakasSlot(QNetworkAccessManager *reply)
{
    response_data = reply->readAll();
    qDebug() << response_data;

    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
       QJsonArray json_array = json_doc.array();
       QString asiakas;
       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           asiakas+=json_obj["Etunimi"].toString()+""+json_obj["Sukunimi"].toString()+"\r"+json_obj["Henkilötunnus"].toString()+"\r"+json_obj["Osoite"].toString()+"\n"+QString::number(json_obj["Puhelinnumero"].toInt())+"\r";
       }

       qDebug()<<asiakas;

}

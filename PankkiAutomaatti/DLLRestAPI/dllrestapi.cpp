#include "dllrestapi.h"


DLLRestAPI::DLLRestAPI(QString asKortinnumero, QString asToken, QObject *parent) : QObject(parent)
{
    objectUrl = new Url;
    asKortinnumero = kortinnumero;
    asToken = webToken;
    asiakasManager = new QNetworkAccessManager(this);
    connect(asiakasManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(asiakasSlot(QNetworkReply*)));
}

DLLRestAPI::~DLLRestAPI()
{
    delete asiakasManager;
    asiakasManager = nullptr;
    disconnect(asiakasManager, SIGNAL(finished (QNetworkReply*)),this, SLOT(gradeSlot(QNetworkReply*)));
}

void DLLRestAPI::getAsiakas()
{
    QString site_url = objectUrl->getBase_url()+"/asiakas/"+kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    //WEBTOKEN ALKU
    request.setRawHeader(QByteArray("Authorization"),(webToken));
    //WEBTOKEN LOPPU


    reply = asiakasManager->get(request);
    response_data = asiakasManager->get(request)->readAll();

}

void DLLRestAPI::asiakasSlot(QNetworkAccessManager *reply)
{

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

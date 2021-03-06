#include "tilitapahtumat.h"

Tilitapahtumat::Tilitapahtumat(QObject *parent) : QObject(parent)
{
    getManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

Tilitapahtumat::~Tilitapahtumat()
{
    delete getManager;
    getManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Tilitapahtumat::getTilitapahtumat()
{
    qDebug()<<"saldon setWebToken";

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/tilitapahtumat/"+Kortinnumero+"/"+muutettuID;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    qDebug()<<"WebToken alku";
    qDebug()<<webToken;

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    qDebug()<<"Connectia edeltävä";
    connect(getManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(tilitapahtumatSlot(QNetworkReply*)));
    reply = getManager->get(request);
    response_data = getManager->get(request)->readAll();
}


void Tilitapahtumat::tilitapahtumatSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();  

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           tilitapahtumat+="Päivämäärä: "+json_obj["PVM"].toString()+"\r"+"Tapahtuma: "+json_obj["Tapahtuma"].toString()+"\r"+"Summa: "+QString::number(json_obj["Summa"].toInt())+"\n\n";
       }

       qDebug()<<"Tilitapahtumat";
       emit sendTilitapahtumat(tilitapahtumat);
       tilitapahtumat = "";
}

void Tilitapahtumat::setIDTilitapahtumat(int tulevaID)
{
    idTilitapahtumat = tulevaID;
    muutettuID = QString::number(idTilitapahtumat);
    qDebug()<<"Tässä on muutettu id: "+muutettuID;
    getTilitapahtumat();
}

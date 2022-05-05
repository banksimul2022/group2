#include "maxtilitapahtumat.h"

maxTilitapahtumat::maxTilitapahtumat(QObject *parent) : QObject(parent)
{
    getManager = new QNetworkAccessManager(this);
    objectUrl = new Url;
}

maxTilitapahtumat::~maxTilitapahtumat()
{
    delete getManager;
    getManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void maxTilitapahtumat::getMaxID()
{
    qDebug()<<"saldon setWebToken";

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QString site_url = objectUrl->getBase_url()+"/tilitapahtumat/"+Kortinnumero;
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    qDebug()<<"WebToken alku";
    qDebug()<<webToken;

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    qDebug()<<"Connectia edeltävä";
    connect(getManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(getMaxIDSlot(QNetworkReply*)));
    reply = getManager->get(request);
    response_data = getManager->get(request)->readAll();
}

void maxTilitapahtumat::getMaxIDSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug() << response_data;
    QJsonDocument json_doc = QJsonDocument::fromJson(response_data);
    QJsonArray json_array = json_doc.array();

       foreach (const QJsonValue &value, json_array) {
           QJsonObject json_obj = value.toObject();
           maxID=QString::number(json_obj["MAX(idTilitapahtumat)"].toInt());
       }

       qDebug()<<"Lähettää maxID: "+maxID;
       emit sendMaxID(maxID);
}

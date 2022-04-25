#include "posttilitapahtumat.h"

postTilitapahtumat::postTilitapahtumat(QObject *parent) : QObject(parent)
{
    postManager = new QNetworkAccessManager(this);
    objectUrl = new Url;

    date = QDateTime::currentDateTime();
    timeDate = date.toString("yyyy.MM.dd hh.mm.ss");
    base_url = objectUrl->getBase_url()+"/tilitapahtumat";
}

postTilitapahtumat::~postTilitapahtumat()
{
    delete objectUrl;
    objectUrl = nullptr;

    delete postManager;
    postManager = nullptr;
}

void postTilitapahtumat::addTilitapahtuma()
{
    QJsonObject jsonObj;
    //jsonObj.insert("idTilitapahtumat","NULL");
    jsonObj.insert("PVM",timeDate);
    jsonObj.insert("Tapahtuma","NOSTO");
    jsonObj.insert("Summa",saatuSumma);
    jsonObj.insert("idTili",idTili);
    jsonObj.insert("idKortti",idKortti);

    Singleton * a = a->getSingletonInstance();
    Kortinnumero = a ->getSingletonCardNum();

    QNetworkRequest request((base_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    Singleton *s = s->getSingletonInstance();
    webToken = s ->getSingletonToken();

    request.setRawHeader(QByteArray("Authorization"),(webToken));

    connect(postManager, SIGNAL(finished (QNetworkReply*)), this, SLOT(addTilitapahtumaSlot(QNetworkReply*)));

    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}

void postTilitapahtumat::addTilitapahtumaSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
        qDebug()<<response_data;
        reply->deleteLater();
        postManager->deleteLater();
}

void postTilitapahtumat::idSlot(QString KorttiID, QString TiliID)
{
    idKortti = KorttiID;
    idTili = TiliID;
}

void postTilitapahtumat::summaSlot(double Summa)
{
    saatuSumma = Summa;
}

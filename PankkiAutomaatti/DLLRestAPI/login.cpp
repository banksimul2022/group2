#include "login.h"

Login::Login(QObject *parent) : QObject(parent)
{
    qDebug()<<"Login muodostimessa";

    objectUrl = new Url;
    base_url = objectUrl -> getBase_url();

    postManager = new QNetworkAccessManager(this);
    my = new MySingleton;
}

Login::~Login()
{
    qDebug()<<"Login tuhoajassa";

    delete objectUrl;
    objectUrl = nullptr;
}

void Login::setPinKort(QString kortinnumero, QString pinkoodi)
{
    qDebug()<<"setPinKort funktiossa";
    qDebug()<<kortinnumero;
    qDebug()<<pinkoodi;

    Kortinnumero = kortinnumero;
    Pinkoodi = pinkoodi;

}

void Login::getPin()
{
    qDebug()<<"getPin alussa";
    QJsonObject jsonObj;
    jsonObj.insert("Kortinnumero", Kortinnumero);
    jsonObj.insert("Pinkoodi", Pinkoodi);

    QNetworkRequest request((base_url+"/login"));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    connect(postManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));
    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());

    qDebug()<<"GetPin lähetetty post";
}

bool Login::getResult()
{
    return trueFalse;
}

QByteArray Login::getToken()
{
    return token;
}


void Login::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();
    qDebug()<<response_data;
    reply->deleteLater();
    postManager->deleteLater();

    if(response_data!="false")
    {
        token = "Bearer "+response_data;
        qDebug()<<token;
        Singleton *s = s->getSingletonInstance();
        s->setSingletonToken(token);
        my ->setToken(token);
        trueFalse = true;
        qDebug()<<"True false on: "<<trueFalse;
    }
    else
    {
        trueFalse = false;
        qDebug()<<"True false on: "<<trueFalse;
    }
       qDebug()<<"If else lopetettu getPin lopussa";
}

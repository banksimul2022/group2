#include "login.h"

Login::Login(QObject *parent) : QObject(parent)
{
    qDebug()<<"Login muodostimessa";

    objectUrl = new Url;
    postManager = new QNetworkAccessManager(this);
    base_url = objectUrl->getBase_url()+"/login";
}

Login::~Login()
{
    delete reply;
    reply = nullptr;

    delete postManager;
    postManager = nullptr;

    delete objectUrl;
    objectUrl = nullptr;
}

void Login::getPin()
{
    Singleton * s = s->getSingletonInstance();
    Pinkoodi = s ->getSingletonPin();
    qDebug()<<"Saatu pinkoodi: "+Pinkoodi;

    Singleton * u = u->getSingletonInstance();
    Kortinnumero = u ->getSingletonCardNum();
    qDebug()<<"Saatu kortinnumero: "+Kortinnumero;

    qDebug()<<"getPin alussa";
    QJsonObject jsonObj;
    jsonObj.insert("Kortinnumero", Kortinnumero);
    jsonObj.insert("Pinkoodi", Pinkoodi);

    QNetworkRequest request((base_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    connect(postManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));
    reply = postManager->post(request, QJsonDocument(jsonObj).toJson());
}


void Login::loginSlot(QNetworkReply *reply)
{
    response_data=reply->readAll();

    qDebug()<<response_data;
    //reply->deleteLater();
    //postManager->deleteLater();

    if(response_data!="false")
    {
        token = "Bearer "+response_data;
        qDebug()<<token;
        Singleton *s = s->getSingletonInstance();
        s->setSingletonToken(token);
        trueFalse = "true";
    }
    else
    {
        trueFalse = "false";
    }
       qDebug()<<"If else lopetettu getPin lopussa";

       emit getTrueFalse(trueFalse);
       disconnect(postManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(loginSlot(QNetworkReply*)));
}

void Login::receivePincode(QString pin)
{
    Singleton *a = a->getSingletonInstance();
    a->setSingletonPincode(pin);

    Singleton *b = b->getSingletonInstance();
    b->setSingletonCardNum(kortnro);
}

void Login::receiveSignal()
{
    getPin();
}

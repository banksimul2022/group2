#include "singleton.h"

Singleton *Singleton::instance = 0;

Singleton::Singleton()
{
    config = new Configurations();
}

Singleton *Singleton::getSingletonInstance()
{
    if (!instance) instance = new Singleton;
    return instance;
}

void Singleton::setSingletonToken(QByteArray vol)
{
    this->config->token = vol;
}

QByteArray Singleton::getSingletonToken()
{
    return this->config->token;
}

void Singleton::setSingletonCardNum(QString Kort)
{
    this->config->KortNum = Kort;
}

QString Singleton::getSingletonCardNum()
{
    return this->config->KortNum;
}

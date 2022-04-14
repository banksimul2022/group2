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

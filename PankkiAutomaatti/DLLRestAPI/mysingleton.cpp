#include "mysingleton.h"

MySingleton* MySingleton::instance = nullptr;

MySingleton* MySingleton::getInstance()
{
    qDebug() << "get instance";

    if (instance == nullptr)
    {
        instance = new MySingleton();
    }

    return instance;
}

QByteArray MySingleton::getToken() const
{
    qDebug() << "getToken";
    return token;
}

void MySingleton::setToken(const QByteArray &value)
{
    qDebug() << "setToken";
    token = value;
}

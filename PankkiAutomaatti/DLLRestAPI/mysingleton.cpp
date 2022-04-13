#include "mysingleton.h"

MySingleton* MySingleton::instance = nullptr;

MySingleton* MySingleton::getInstance()
{
    if (instance == nullptr)
    {
        instance = new MySingleton();
    }

    return instance;
}

QByteArray MySingleton::getToken() const
{
    return token;
}

void MySingleton::setToken(const QByteArray &value)
{
    token = value;
}

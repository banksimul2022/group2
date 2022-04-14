#ifndef MYSINGLETON_H
#define MYSINGLETON_H

#include <qstring.h>
#include <QDebug>

class MySingleton
{
private:
    static MySingleton* instance;
    QByteArray token;

public:
    static MySingleton* getInstance();

    QByteArray getToken() const;
    void setToken(const QByteArray &value);
};

#endif // MYSINGLETON_H

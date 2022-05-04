#ifndef CONFIGURATIONS_H
#define CONFIGURATIONS_H

#include <QCoreApplication>
#include <iostream>
#include <QString>

using namespace std;

class Configurations
{
public:
    Configurations();
    QByteArray token;
    QString KortNum;
    QString PinCode;
};

#endif // CONFIGURATIONS_H

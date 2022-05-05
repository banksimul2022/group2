#ifndef SINGLETON_H
#define SINGLETON_H

#include "configurations.h"

class Singleton {

public:

   Singleton();
   static Singleton *getSingletonInstance();
   static Singleton *instance;

   Configurations *config;

   void setSingletonToken(QByteArray vol);
   QByteArray getSingletonToken();

   void setSingletonCardNum(QString Kort);
   QString getSingletonCardNum();

   void setSingletonPincode(QString Pin);
   QString getSingletonPin();
};

#endif // SINGLETON_H

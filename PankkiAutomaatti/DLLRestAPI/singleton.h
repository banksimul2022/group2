#ifndef SINGLETON_H
#define SINGLETON_H

#include "configurations.h"

class Singleton {


   // initialize the related configuration class at constructor

   //First initialize the instance. All classes will access via this instance
   public:

   Singleton();

   static Singleton *getSingletonInstance();

   static Singleton *instance;


   Configurations *config;

   //Getters and setters of related functions of realted configurations
   void setSingletonToken(QByteArray vol);
   QByteArray getSingletonToken();

   void setSingletonCardNum(QString Kort);
   QString getSingletonCardNum();

   void setSingletonPincode(QString Pin);
   QString getSingletonPin();
};

#endif // SINGLETON_H

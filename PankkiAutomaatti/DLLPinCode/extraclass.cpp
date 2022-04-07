#include "extraclass.h"

ExtraClass::ExtraClass()
{
    qDebug()<<"ExtraClass muodostimessa";
}

ExtraClass::~ExtraClass()
{
    qDebug()<<"ExtraClass tuhoajassa";
}

bool ExtraClass::comparePIN(QString user,QString db)
{
    if(user==db){
        qDebug()<<"Password is true";
        ok=true;
    }
    else{
        qDebug()<<"Password is not true";
        tries++;
    }
    return ok;
}

int ExtraClass::pwdTries()
{
    if(tries==3){
        tries=0;
    }
    else{
        tries++;
    }
    return tries;
}

void ExtraClass::resetTries()
{
    tries=0;
}

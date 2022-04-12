#ifndef DLLRESTAPI_H
#define DLLRESTAPI_H

#include "DLLRestAPI_global.h"
#include "login.h"
#include <qstring.h>

class DLLRESTAPI_EXPORT DLLRestAPI
{
public:
    DLLRestAPI();
    ~DLLRestAPI();
    void setPinKort(QString kortinnumero, QString pinkoodi);
    bool getTrueFalse();
private:
    Login *objectLogin;

};

#endif // DLLRESTAPI_H

#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "dialog.h"

class DLLPinCode
{
public:
    void DLLPINCODE_EXPORT openDllDialog(QString);
    QString DLLPINCODE_EXPORT returnFromDll();
private:
    Dialog *objectDialog;
    QString dllValue;
};

#endif // DLLPINCODE_H
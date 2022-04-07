#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "extraclass.h"


class DLLPINCODE_EXPORT DLLPinCode
{
public:
    DLLPinCode();
    ~DLLPinCode();
    int getTries();
private:
    ExtraClass *pExtraClass;
    int var;
};

#endif // DLLPINCODE_H

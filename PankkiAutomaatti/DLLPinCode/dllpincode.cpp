#include "dllpincode.h"

DLLPinCode::DLLPinCode()
{
    pExtraClass = new ExtraClass;
}

DLLPinCode::~DLLPinCode()
{
    delete pExtraClass;
    pExtraClass = nullptr;
}

int DLLPinCode::getTries()
{
    var = ExtraClass().pwdTries();
    return var;
}

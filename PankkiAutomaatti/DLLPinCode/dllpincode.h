#ifndef DLLPINCODE_H
#define DLLPINCODE_H

#include "DLLPinCode_global.h"
#include "dialog.h"
#include <QObject>

class DLLPinCode : public QObject
{
    Q_OBJECT
public:
    DLLPINCODE_EXPORT DLLPinCode(QObject *parent = nullptr);
    ~DLLPinCode();

    void DLLPINCODE_EXPORT openDllDialog(QString);
    QString DLLPINCODE_EXPORT returnFromDll();

    Dialog *objectDialog;

private:
    QByteArray Token;

    QString dllValue;
};

#endif // DLLPINCODE_H

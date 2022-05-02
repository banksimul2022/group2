#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H

#include <QDialog>
#include "pankkimenu.h"
#include "dllpincode.h"
#include "dllrestapi.h"
#include <QTimer>
#include "dllserialport.h"

namespace Ui {
class kirjaudusisaan;
}

class kirjaudusisaan : public QDialog
{
    Q_OBJECT

public:
    explicit kirjaudusisaan(QWidget *parent = nullptr);
    ~kirjaudusisaan();
public slots:
    void getCardNumber(QString);

private slots:

    void on_VALIAIKANAPPI_clicked();
    void trueFalse(QString);
    void pinkoodi(QString);

private:
    Ui::kirjaudusisaan *ui;
    pankkimenu * pPankkimenu;
    DLLPinCode * pDLLPinCode;
    DLLRestAPI * pDLLRestAPI;
    DLLSerialPort * pDLLSerialPort;
    QString kortnro = "1111111111";

signals:
    void sendCardSerialNumber(QString);
};

#endif // KIRJAUDUSISAAN_H

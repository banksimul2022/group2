#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H

#include <QDialog>
#include "pankkimenu.h"
#include "dllpincode.h"
#include "dllrestapi.h"

namespace Ui {
class kirjaudusisaan;
}

class kirjaudusisaan : public QDialog
{
    Q_OBJECT

public:
    explicit kirjaudusisaan(QWidget *parent = nullptr);
    ~kirjaudusisaan();

private slots:

    void on_VALIAIKANAPPI_clicked();
    void trueFalse(QString);
    void pinkoodi(QString);

private:
    Ui::kirjaudusisaan *ui;
    pankkimenu * pPankkimenu;
    DLLPinCode * pDLLPinCode;
    DLLRestAPI * pDLLRestAPI;
    QString kortnro = "1111111111";
};

#endif // KIRJAUDUSISAAN_H

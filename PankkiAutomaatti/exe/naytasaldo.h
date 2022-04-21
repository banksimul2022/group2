#ifndef NAYTASALDO_H
#define NAYTASALDO_H

#include <QDialog>
#include "dllrestapi.h"

namespace Ui {
class naytasaldo;
}

class naytasaldo : public QDialog
{
    Q_OBJECT

public:
    explicit naytasaldo(QWidget *parent = nullptr);
    ~naytasaldo();
    void getAsiakas();

private slots:
    void on_pushButton_clicked();

    void on_palaasaldosta_clicked();

    void slotAsiakas(QString);

private:
    Ui::naytasaldo *ui;
    DLLRestAPI * pDLLRestAPI;
    QString Asiakas;
};

#endif // NAYTASALDO_H

#ifndef NAYTASALDO_H
#define NAYTASALDO_H

#include <QDialog>
#include <dllrestapi.h>

namespace Ui {
class NaytaSaldo;
}

class NaytaSaldo : public QDialog
{
    Q_OBJECT

public:
    explicit NaytaSaldo(QWidget *parent = nullptr);
    ~NaytaSaldo();
    void startAsiakas();

private slots:
    void slotAsiakas(QString);
    void slotSaldo(QString);
    void slotTilitapahtumat(QString);

private:
    Ui::NaytaSaldo *ui;
    DLLRestAPI *objectRestAPI;
    QString asiakas;
    QString saldo;
    QString tilitapahtumat;

};

#endif // NAYTASALDO_H

#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "dllrestapi.h"

namespace Ui {
class NostaRahaa;
}

class NostaRahaa : public QDialog
{
    Q_OBJECT

public:
    explicit NostaRahaa(QWidget *parent = nullptr);
    ~NostaRahaa();
    void startUpdate();

private slots:
    void on_btn20_clicked();
    void on_btn40_clicked();
    void on_btn60_clicked();
    void on_btn100_clicked();
    void on_btn200_clicked();
    void on_btnOma_clicked();

    void saldoSlot(QString);
    void slotID(QString, QString);

private:
    Ui::NostaRahaa *ui;
    DLLRestAPI *objectRestAPI;

    QString alkuSaldo;
    double loppuSaldo, muutettuSaldo, summa;

signals:
    void sendLoppuSaldo(double);
    void sendIDtoDLL(QString, QString);
    void sendSumma(double);
};

#endif // NOSTARAHAA_H

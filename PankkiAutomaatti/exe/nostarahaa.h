#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "omasumma.h"
#include "dllrestapi.h"
namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = nullptr);
    ~nostarahaa();
    void startUpdate();

private slots:
    void on_pushButton_7_clicked();

    void on_oma_clicked();

    void on_kaksikymmenta_clicked();

    void on_neljakymmenta_clicked();

    void on_kuusikymmenta_clicked();

    void on_sata_clicked();

    void on_viisisataa_clicked();

    void saldoSlot(QString);
    void slotID(QString, QString);

private:
    Ui::nostarahaa *ui;
    omasumma * pomasumma;
    DLLRestAPI * pDLLRestAPI;

    QString alkuSaldo;
    double loppuSaldo, muutettuSaldo, summa;

signals:
    void sendLoppuSaldo(double);
    void sendIDtoDLL(QString, QString);
    void sendSumma(double);
};

#endif // NOSTARAHAA_H

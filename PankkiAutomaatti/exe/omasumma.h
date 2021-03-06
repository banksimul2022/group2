#ifndef OMASUMMA_H
#define OMASUMMA_H

#include <QDialog>
#include "dllrestapi.h"
#include "errorsivu.h"
#include <QTimer>

namespace Ui {
class omasumma;
}

class omasumma : public QDialog
{
    Q_OBJECT

public:
    explicit omasumma(QWidget *parent = nullptr);
    ~omasumma();
    void startUpdate();

public slots:
    void laskuriomaslot();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void slotID(QString, QString);

    void saldoSlot(QString);

private:
    Ui::omasumma *ui;
    DLLRestAPI * pDLLRestAPI;
    double loppuSaldo, muutettuSaldo, summa;
    QString alkuSaldo;
    errorsivu * perrorsivu;
    QTimer * pQTimer;
    int laskuri = 0;

signals:
    void sendLoppuSaldo(double);
    void sendIDtoDLL(QString, QString);
    void sendSumma(double);
};

#endif // OMASUMMA_H

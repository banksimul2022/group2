#ifndef NAYTASALDO_H
#define NAYTASALDO_H

#include <QDialog>
#include "dllrestapi.h"
#include <QTimer>

namespace Ui {
class naytasaldo;
}

class naytasaldo : public QDialog
{
    Q_OBJECT

public:
    explicit naytasaldo(QWidget *parent = nullptr);
    ~naytasaldo();
    void startMaxID();

    void getTilitapahtumat();

public slots:
    void laskurinaytaslot();

private slots:
    void on_pushButton_clicked();

    void on_palaasaldosta_clicked();

    void slotAsiakas(QString);

    void slotSaldo(QString);

    void slotTilitapahtumat(QString);

    void slotMaxID(QString);

private:
    Ui::naytasaldo *ui;
    DLLRestAPI * pDLLRestAPI;
    QString Asiakas;
    QString Saldo;
    QString Tilitapahtumat;
    QString tulevaID;
    int maxID;
    QTimer * pQTimer;
    int laskuri = 0;

signals:
    void sendIDtoDLL(int);
};

#endif // NAYTASALDO_H

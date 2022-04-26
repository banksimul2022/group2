#ifndef SELAATILITAPAHTUMIA_H
#define SELAATILITAPAHTUMIA_H

#include <QDialog>
#include "dllrestapi.h"

namespace Ui {
class SelaaTilitapahtumia;
}

class SelaaTilitapahtumia : public QDialog
{
    Q_OBJECT

public:
    explicit SelaaTilitapahtumia(QWidget *parent = nullptr);
    ~SelaaTilitapahtumia();
    void startTapahtumat();

private slots:
    void slotAsiakas(QString);
    void slotSaldo(QString);
    void slotTilitapahtumat(QString);
    void slotID(QString, QString);

private:
    Ui::SelaaTilitapahtumia *ui;
    DLLRestAPI *objectRestAPI;

    QString asiakas;
    QString saldo;
    QString tilitapahtumat;

signals:
    void sendID(QString,QString);
    void sendIDtoDLL(QString, QString);
};

#endif // SELAATILITAPAHTUMIA_H

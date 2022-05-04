#ifndef SELAATILITAPAHTUMIA_H
#define SELAATILITAPAHTUMIA_H

#include <QDialog>
#include <qstring.h>
#include "dllrestapi.h"
#include <QTimer>

namespace Ui {
class selaatilitapahtumia;
}

class selaatilitapahtumia : public QDialog
{
    Q_OBJECT

public:
    explicit selaatilitapahtumia(QWidget *parent = nullptr);
    ~selaatilitapahtumia();
    void sendsignal(int);
    void startTilitapahtumat();

public slots:
    void laskuritilitslot();

private slots:
    void on_palaamenuuntilitapahtumat_clicked();

    void on_aikaisempi_clicked();

    void on_seuraava_clicked();

    void slotTilitapahtumat(QString);

    void setMaxID(QString);

    void slotAsiakas(QString);

    void slotSaldo(QString);

private:
    Ui::selaatilitapahtumia *ui;
    int value = 1;
    int idarvo;
    DLLRestAPI * pDLLRestAPI;
    QString tilitapahtumat;
    QTimer * pQTimer;
    int laskuri = 0;
    QString maxID;
    int maxIDID;
    QString Asiakas;
    QString Saldo;

signals:
    void tilitapahtumaid(int);

};

#endif // SELAATILITAPAHTUMIA_H

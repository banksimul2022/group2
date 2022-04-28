#ifndef SELAATILITAPAHTUMIA_H
#define SELAATILITAPAHTUMIA_H

#include <QDialog>
#include <qstring.h>
#include "dllrestapi.h"

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

private slots:
    void on_palaamenuuntilitapahtumat_clicked();

    void on_aikaisempi_clicked();

    void on_seuraava_clicked();

    void slotTilitapahtumat(QString);

private:
    Ui::selaatilitapahtumia *ui;
    int value = 1;
    int idarvo = 11;
    DLLRestAPI * pDLLRestAPI;
    QString tilitapahtumat;

signals:
    void tilitapahtumaid(int);

};

#endif // SELAATILITAPAHTUMIA_H

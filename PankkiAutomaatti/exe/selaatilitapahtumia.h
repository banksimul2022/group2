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

private slots:
    void on_palaamenuuntilitapahtumat_clicked();

    void on_aikaisempi_clicked();

    void on_seuraava_clicked();

private:
    Ui::selaatilitapahtumia *ui;
    int value = 1;
    DLLRestAPI * pDLLRestAPI;

};

#endif // SELAATILITAPAHTUMIA_H

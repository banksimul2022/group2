#ifndef PANKKIMENU_H
#define PANKKIMENU_H

#include <QDialog>
#include "nostarahaa.h"
#include "selaatilitapahtumia.h"
#include "naytasaldo.h"
#include "dllrestapi.h"
#include <QTimer>

namespace Ui {
class pankkimenu;
}

class pankkimenu : public QDialog
{
    Q_OBJECT

public:
    explicit pankkimenu(QWidget *parent = nullptr);
    ~pankkimenu();

public slots:
    void laskurislot();

private slots:
    void on_pushButton_3_clicked();

    void on_nosta_clicked();

    void on_selaa_clicked();

    void on_naytasaldo_clicked();

private:
    Ui::pankkimenu *ui;
    DLLRestAPI * pDLLRestAPI;
    nostarahaa * pnostarahaa;
    selaatilitapahtumia * pselaatilit;
    naytasaldo * pnaytasaldo;
    QTimer * pQTimer;
    int laskuri = 0;
};

#endif // PANKKIMENU_H

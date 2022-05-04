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

    void asiakas();

public slots:
    void laskurislot();

    void rikokaikki();

private slots:
    void on_pushButton_3_clicked();

    void on_nosta_clicked();

    void on_selaa_clicked();

    void on_naytasaldo_clicked();

    void asiakasslot(QString);

private:
    Ui::pankkimenu *ui;
    DLLRestAPI * pDLLRestAPI;
    nostarahaa * pnostarahaa;
    selaatilitapahtumia * pselaatilit;
    naytasaldo * pnaytasaldo;
    QTimer * pQTimer;
    int laskuri = 0;
    QString Asiakas;
};

#endif // PANKKIMENU_H

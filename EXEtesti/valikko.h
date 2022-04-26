#ifndef VALIKKO_H
#define VALIKKO_H

#include <QDialog>
#include "naytasaldo.h"
#include "selaatilitapahtumia.h"
#include "nostarahaa.h"

namespace Ui {
class Valikko;
}

class Valikko : public QDialog
{
    Q_OBJECT

public:
    explicit Valikko(QWidget *parent = nullptr);
    ~Valikko();

private slots:
    void on_btnNaytaSaldo_clicked();
    void on_btnTilitapahtumat_clicked();
    void on_pushButton_clicked();

    void getNimi(QString);

private:
    Ui::Valikko *ui;
    NaytaSaldo * objectNaytaSaldo;
    DLLRestAPI *objectRestAPI;
    SelaaTilitapahtumia *objectSelaaTilitapahtumia;
    NostaRahaa *objectNostaRahaa;

    QString nimi;
};

#endif // VALIKKO_H

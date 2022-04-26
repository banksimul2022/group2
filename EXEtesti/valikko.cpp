#include "valikko.h"
#include "ui_valikko.h"

Valikko::Valikko(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Valikko)
{
    ui->setupUi(this);
    objectNaytaSaldo = new NaytaSaldo;
    objectRestAPI = new DLLRestAPI;
    objectSelaaTilitapahtumia = new SelaaTilitapahtumia;
    objectNostaRahaa = new NostaRahaa;
    objectRestAPI->startAsiakas();
    connect(objectRestAPI->objectAsiakas, SIGNAL(sendNimi(QString)), this, SLOT(getNimi(QString)));

}

Valikko::~Valikko()
{
    delete ui;
    ui = nullptr;

    delete objectNaytaSaldo;
    objectNaytaSaldo = nullptr;
}

void Valikko::on_btnNaytaSaldo_clicked()
{
    objectNaytaSaldo -> show();
    objectNaytaSaldo->startAsiakas();
}


void Valikko::on_btnTilitapahtumat_clicked()
{
    objectSelaaTilitapahtumia -> show();
    objectSelaaTilitapahtumia->startTapahtumat();
}


void Valikko::on_pushButton_clicked()
{
    objectNostaRahaa->show();
    objectNostaRahaa->startUpdate();
}

void Valikko::getNimi(QString asNimi)
{
   nimi = asNimi;
   ui->textNimi->setText(nimi);
}



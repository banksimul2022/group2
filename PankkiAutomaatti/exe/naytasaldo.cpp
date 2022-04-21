#include "naytasaldo.h"
#include "ui_naytasaldo.h"

naytasaldo::naytasaldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::naytasaldo)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;

    connect( pDLLRestAPI->objectAsiakas, SIGNAL( sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));
}

naytasaldo::~naytasaldo()
{
    delete ui;
}

void naytasaldo::getAsiakas()
{
    pDLLRestAPI->startAsiakas();
    pDLLRestAPI->startTilitapahtumat();
        QString tiedotTilitapahtumat = pDLLRestAPI->getTilitapahtumat();
    pDLLRestAPI->startSaldo();
        QString tiedotSaldo = pDLLRestAPI->getSaldo();
}

void naytasaldo::on_pushButton_clicked()
{
    close();
}


void naytasaldo::on_palaasaldosta_clicked()
{
    close();
}

void naytasaldo::slotAsiakas(QString asiakas)
{
    Asiakas = asiakas;
    ui->asiakasedit->setText(Asiakas);
}

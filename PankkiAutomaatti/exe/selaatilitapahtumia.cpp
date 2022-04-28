#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;

    connect( this, SIGNAL(tilitapahtumaid(int)), pDLLRestAPI->objectTilitapahtumat, SLOT(setIDTilitapahtumat(int)));
    connect(pDLLRestAPI->objectAsiakas, SIGNAL(sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));
    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(slotSaldo(QString)));
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));

    pDLLRestAPI->startAsiakas();
    pDLLRestAPI->startSaldo();
    sendsignal(idarvo);
}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
}

void selaatilitapahtumia::sendsignal(int x)
{
    emit tilitapahtumaid(x);
    pDLLRestAPI -> startTilitapahtumat();
    ui -> textEdit -> setText(tilitapahtumat);
}

void selaatilitapahtumia::on_palaamenuuntilitapahtumat_clicked()
{
    close();
}


void selaatilitapahtumia::on_aikaisempi_clicked()
{
    value--;
    if (idarvo < 11){

    }
    else{
    idarvo = idarvo - 10;
    sendsignal(idarvo);
    ui->spinBox->setValue(value);
    }
}


void selaatilitapahtumia::on_seuraava_clicked()
{
    value++;
    idarvo = idarvo + 10;
    sendsignal(idarvo);
    ui->spinBox->setValue(value);
}

void selaatilitapahtumia::slotTilitapahtumat(QString x)
{
   tilitapahtumat = x;
}


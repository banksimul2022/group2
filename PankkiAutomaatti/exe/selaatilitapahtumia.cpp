#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;
    pQTimer = new QTimer;
    qDebug()<<"constructor";
    pDLLRestAPI->startAsiakas();
    pDLLRestAPI->startSaldo();

    connect( this, SIGNAL(tilitapahtumaid(int)), pDLLRestAPI->objectTilitapahtumat, SLOT(setIDTilitapahtumat(int)));
    connect(pDLLRestAPI->objectAsiakas, SIGNAL(sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));
    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(slotSaldo(QString)));

    connect( pQTimer, SIGNAL(timeout()), this, SLOT(laskuritilitslot()));

    pQTimer->start(10000);
}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
    delete pDLLRestAPI;
    pDLLRestAPI = nullptr;
}

void selaatilitapahtumia::sendsignal(int x)
{
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    emit tilitapahtumaid(x);
    qDebug()<<"send signal";
    pDLLRestAPI->startAsiakas();
    pDLLRestAPI->startSaldo();
}

void selaatilitapahtumia::startTilitapahtumat()
{
    connect(pDLLRestAPI->objectMaxTilitapahtumat, SIGNAL(sendMaxID(QString)), this, SLOT(setMaxID(QString)));
    pDLLRestAPI->startMaxTilitapahtumat();
}

void selaatilitapahtumia::laskuritilitslot()
{
    qDebug() << "timer...";
    if ( laskuri ==0){
        close();
    }
    else{
        laskuri = 0;
    }
}

void selaatilitapahtumia::on_palaamenuuntilitapahtumat_clicked()
{
    close();
}


void selaatilitapahtumia::on_aikaisempi_clicked()
{

    laskuri = laskuri +1;
    qDebug()<<"nappi aikaisempi";
    if(idarvo > maxIDID){

    }
    else{
    value--;
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    idarvo = idarvo + 10;
    sendsignal(idarvo);
    ui->spinBox->setValue(value);
    }
}


void selaatilitapahtumia::on_seuraava_clicked()
{
    laskuri = laskuri + 1;
    if(idarvo < 1){
        idarvo = 1;
        value = 1;
        ui->spinBox->setValue(1);
    }
    else{
    value++;
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    idarvo = idarvo - 10;
    qDebug()<<"nappi seuraava";
    sendsignal(idarvo);
    ui->spinBox->setValue(value);
    }
}

void selaatilitapahtumia::slotTilitapahtumat(QString x)
{
   tilitapahtumat = x;
   qDebug()<<"coomers "+tilitapahtumat;
   ui -> textEdit -> setText(tilitapahtumat);
   disconnect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
}

void selaatilitapahtumia::setMaxID(QString id)
{
    maxID = id;
    maxIDID = maxID.toInt();
    idarvo = maxID.toInt();
    sendsignal(idarvo);
    disconnect(pDLLRestAPI->objectMaxTilitapahtumat, SIGNAL(sendMaxID(QString)), this, SLOT(setMaxID(QString)));
}

void selaatilitapahtumia::slotAsiakas(QString asiakas)
{
    Asiakas = asiakas;
    ui -> textEdit_2 -> setText(Asiakas);
}

void selaatilitapahtumia::slotSaldo(QString saldo)
{
    Saldo = saldo;
    ui->textEdit_3->setText(Saldo);
}

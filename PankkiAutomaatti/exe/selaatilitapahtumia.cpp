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
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendMaxID(QString)), this, SLOT(setMaxID(QString)));
    pDLLRestAPI->startTilitapahtumat();
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
    value--;
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    laskuri = laskuri +1;
    qDebug()<<"nappi aikaisempi";
    idarvo = idarvo + 10;
    sendsignal(idarvo);
    ui->spinBox->setValue(value);

}


void selaatilitapahtumia::on_seuraava_clicked()
{
    value++;
    connect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    laskuri = laskuri + 1;
    idarvo = idarvo - 10;
    qDebug()<<"nappi seuraava";
    sendsignal(idarvo);
    ui->spinBox->setValue(value);
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
    idarvo = maxID.toInt();
    qDebug()<<idarvo;
    qDebug()<<"pillupersepaskapaviaani";
    disconnect(pDLLRestAPI->objectTilitapahtumat, SIGNAL(sendMaxID(QString)), this, SLOT(setMaxID(QString)));
}


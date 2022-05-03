#include "naytasaldo.h"
#include "ui_naytasaldo.h"

naytasaldo::naytasaldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::naytasaldo)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;
    getAsiakas();
    pQTimer = new QTimer;

    connect( pQTimer, SIGNAL(timeout()), this, SLOT(laskurinaytaslot()));

    pQTimer->start(10000);


    connect( pDLLRestAPI->objectAsiakas, SIGNAL( sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));

    connect( pDLLRestAPI->objectSaldo, SIGNAL( sendSaldo (QString)), this, SLOT(slotSaldo(QString)));

    //connect( pDLLRestAPI->objectTilitapahtumat, SIGNAL( sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
}

naytasaldo::~naytasaldo()
{
    delete ui;
}

void naytasaldo::getAsiakas()
{
    connect( pDLLRestAPI->objectTilitapahtumat, SIGNAL( sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
    pDLLRestAPI->startAsiakas();
    pDLLRestAPI->startTilitapahtumat();
    pDLLRestAPI->startSaldo();
}

void naytasaldo::laskurinaytaslot()
{
    qDebug() << "timer...";
    if ( laskuri ==0){
        close();
    }
    else{
        laskuri = 0;
    }
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

void naytasaldo::slotSaldo(QString saldo)
{
    Saldo = saldo;
    ui->saldoedit->setText(Saldo);
}

void naytasaldo::slotTilitapahtumat(QString tilitapahtumat)
{
    Tilitapahtumat = tilitapahtumat;
    ui->tilitapahtumatedit->setText(Tilitapahtumat);
    disconnect( pDLLRestAPI->objectTilitapahtumat, SIGNAL( sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
}

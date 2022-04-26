#include "naytasaldo.h"
#include "ui_naytasaldo.h"

NaytaSaldo::NaytaSaldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NaytaSaldo)
{
    ui->setupUi(this);
    objectRestAPI = new DLLRestAPI;

    connect(objectRestAPI->objectAsiakas, SIGNAL(sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));
    connect(objectRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(slotSaldo(QString)));
    connect(objectRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));
}

NaytaSaldo::~NaytaSaldo()
{
    delete ui;
    ui = nullptr;

    delete objectRestAPI;
    objectRestAPI = nullptr;
}

void NaytaSaldo::startAsiakas()
{   
    objectRestAPI->startAsiakas();
    objectRestAPI->startSaldo();
    objectRestAPI->startTilitapahtumat();
}

void NaytaSaldo::slotAsiakas(QString Asiakas)
{
    asiakas = Asiakas;
    ui->textAsiakas->setText(asiakas);
}

void NaytaSaldo::slotSaldo(QString Saldo)
{
    saldo = Saldo;
    ui->textSaldo->setText(saldo);
}

void NaytaSaldo::slotTilitapahtumat(QString Tilitapahtumat)
{
    tilitapahtumat = Tilitapahtumat;
    ui->textTapahtumat->setText(tilitapahtumat);
}

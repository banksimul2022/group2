#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

SelaaTilitapahtumia::SelaaTilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SelaaTilitapahtumia)
{
    ui->setupUi(this);
    objectRestAPI = new DLLRestAPI;

    connect(objectRestAPI->objectAsiakas, SIGNAL(sendAsiakas(QString)), this, SLOT(slotAsiakas(QString)));
    connect(objectRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(slotSaldo(QString)));
    connect(objectRestAPI->objectTilitapahtumat, SIGNAL(sendTilitapahtumat(QString)), this, SLOT(slotTilitapahtumat(QString)));

}

SelaaTilitapahtumia::~SelaaTilitapahtumia()
{
    delete ui;
    ui = nullptr;

    delete objectRestAPI;
    objectRestAPI = nullptr;
}

void SelaaTilitapahtumia::startTapahtumat()
{
    objectRestAPI->startAsiakas();
    objectRestAPI->startSaldo();
    objectRestAPI->startTilitapahtumat();
}

void SelaaTilitapahtumia::slotAsiakas(QString Asiakas)
{
    asiakas = Asiakas;
    ui->textOmistaja->setText(asiakas);
}

void SelaaTilitapahtumia::slotSaldo(QString Saldo)
{
    saldo = Saldo;
    ui->textSaldo->setText(saldo);
}

void SelaaTilitapahtumia::slotTilitapahtumat(QString Tilitapahtumat)
{
    tilitapahtumat = Tilitapahtumat;
    ui->textTapahtumat->setText(tilitapahtumat);
}

void SelaaTilitapahtumia::slotID(QString KorttiID, QString TiliID)
{
    emit sendIDtoDLL(KorttiID, TiliID);
}

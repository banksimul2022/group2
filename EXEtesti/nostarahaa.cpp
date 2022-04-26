#include "nostarahaa.h"
#include "ui_nostarahaa.h"

NostaRahaa::NostaRahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NostaRahaa)
{
    ui->setupUi(this);
    objectRestAPI = new DLLRestAPI;

    connect(objectRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(saldoSlot(QString)));
    connect(this, SIGNAL(sendLoppuSaldo(double)), objectRestAPI->objectPutSaldo, SLOT(getLoppuSaldo(double)));
    connect(objectRestAPI->objectSaldo, SIGNAL(sendID(QString, QString)), this, SLOT(slotID(QString, QString)));
    connect(this, SIGNAL(sendIDtoDLL(QString, QString)), objectRestAPI->objectPostTilitapahtumat, SLOT(idSlot(QString, QString)));
    connect(this, SIGNAL(sendSumma(double)), objectRestAPI->objectPostTilitapahtumat, SLOT(summaSlot(double)));
}

NostaRahaa::~NostaRahaa()
{
    delete ui;
    ui = nullptr;

    delete objectRestAPI;
    objectRestAPI = nullptr;
}

void NostaRahaa::startUpdate()
{
    objectRestAPI->startSaldo();
}

void NostaRahaa::on_btn20_clicked()
{
    summa = 20;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;

    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);

    objectRestAPI->startPostTilitapahtumat();
    objectRestAPI->startPutSaldo();
}


void NostaRahaa::on_btn40_clicked()
{
    summa = 40;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    objectRestAPI->startPutSaldo();
}


void NostaRahaa::on_btn60_clicked()
{
    summa = 60;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    objectRestAPI->startPutSaldo();
}


void NostaRahaa::on_btn100_clicked()
{
    summa = 100;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    objectRestAPI->startPutSaldo();
}


void NostaRahaa::on_btn200_clicked()
{
    summa = 200;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    objectRestAPI->startPutSaldo();
}

void NostaRahaa::saldoSlot(QString saatuSaldo)
{
    alkuSaldo = saatuSaldo;
    qDebug()<< saatuSaldo;
    muutettuSaldo = alkuSaldo.toDouble();
}

void NostaRahaa::slotID(QString KorttiID, QString TiliID)
{
    emit sendIDtoDLL(KorttiID, TiliID);
}


void NostaRahaa::on_btnOma_clicked()
{

}


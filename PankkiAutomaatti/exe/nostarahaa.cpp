#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    pomasumma = new omasumma;
    pDLLRestAPI = new DLLRestAPI;

    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(saldoSlot(QString)));
    connect(this, SIGNAL(sendLoppuSaldo(double)), pDLLRestAPI->objectPutSaldo, SLOT(getLoppuSaldo(double)));
    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendID(QString, QString)), this, SLOT(slotID(QString, QString)));
    connect(this, SIGNAL(sendIDtoDLL(QString, QString)), pDLLRestAPI->objectPostTilitapahtumat, SLOT(idSlot(QString, QString)));
    connect(this, SIGNAL(sendSumma(double)), pDLLRestAPI->objectPostTilitapahtumat, SLOT(summaSlot(double)));
}

nostarahaa::~nostarahaa()
{
    delete ui;
    ui = nullptr;
    delete pDLLRestAPI;
    pDLLRestAPI = nullptr;
}

void nostarahaa::startUpdate()
{
    pDLLRestAPI->startSaldo();
}


void nostarahaa::on_pushButton_7_clicked()
{
    close();
}


void nostarahaa::on_oma_clicked()
{
    pomasumma -> startUpdate();
    pomasumma -> exec();
}


void nostarahaa::on_kaksikymmenta_clicked()
{
    summa = 20;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;

    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);

    pDLLRestAPI->startPostTilitapahtumat();
    pDLLRestAPI->startPutSaldo();
}


void nostarahaa::on_neljakymmenta_clicked()
{
    summa = 40;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    pDLLRestAPI->startPutSaldo();
}


void nostarahaa::on_kuusikymmenta_clicked()
{
    summa = 60;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    pDLLRestAPI->startPutSaldo();
}


void nostarahaa::on_sata_clicked()
{
    summa = 100;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    pDLLRestAPI->startPutSaldo();
}


void nostarahaa::on_viisisataa_clicked()
{
    summa = 500;
    loppuSaldo = muutettuSaldo - summa;
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    pDLLRestAPI->startPutSaldo();
}

void nostarahaa::saldoSlot(QString saatuSaldo)
{
    alkuSaldo = saatuSaldo;
    qDebug()<<saatuSaldo;
    muutettuSaldo = alkuSaldo.toDouble();
}

void nostarahaa::slotID(QString KorttiID, QString TiliID)
{
    emit sendIDtoDLL(KorttiID, TiliID);
}

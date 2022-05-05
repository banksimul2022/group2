#include "omasumma.h"
#include "ui_omasumma.h"

omasumma::omasumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::omasumma)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;
    perrorsivu = new errorsivu;
    pQTimer = new QTimer;

    connect( pQTimer, SIGNAL(timeout()), this, SLOT(laskuriomaslot()));

    pQTimer->start(10000);

    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendSaldo(QString)), this, SLOT(saldoSlot(QString)));
    connect(this, SIGNAL(sendLoppuSaldo(double)), pDLLRestAPI->objectPutSaldo, SLOT(getLoppuSaldo(double)));
    connect(pDLLRestAPI->objectSaldo, SIGNAL(sendID(QString, QString)), this, SLOT(slotID(QString, QString)));
    connect(this, SIGNAL(sendSumma(double)), pDLLRestAPI->objectPostTilitapahtumat, SLOT(summaSlot(double)));
    connect(this, SIGNAL(sendIDtoDLL(QString, QString)), pDLLRestAPI->objectPostTilitapahtumat, SLOT(idSlot(QString, QString)));
}

omasumma::~omasumma()
{
    delete ui;
    ui = nullptr;
    delete pDLLRestAPI;
    pDLLRestAPI = nullptr;
}

void omasumma::startUpdate()
{
    pDLLRestAPI->startSaldo();
}

void omasumma::laskuriomaslot()
{
    qDebug() << "timer...";
    if ( laskuri ==0){
        close();
    }
    else{
        laskuri = 0;
    }
}

void omasumma::on_pushButton_clicked()
{
    close();
}


void omasumma::on_pushButton_2_clicked()
{
    laskuri = laskuri + 1;
    QString ekasumma = ui->lineEdit->text();
    double summa = ekasumma.toDouble();
    loppuSaldo = muutettuSaldo - summa;
    if (loppuSaldo <= -1){
        perrorsivu -> exec();
    }
    else{
    ui->label_2->setText("Rahaa nostettu");
    qDebug() << loppuSaldo;
    emit sendLoppuSaldo(loppuSaldo);
    emit sendSumma(summa);
    pDLLRestAPI->startPutSaldo();
    pDLLRestAPI->startPostTilitapahtumat();
    }
}

void omasumma::saldoSlot(QString saatuSaldo)
{
    alkuSaldo = saatuSaldo;
    qDebug()<<saatuSaldo;
    muutettuSaldo = alkuSaldo.toDouble();
}

void omasumma::slotID(QString KorttiID, QString TiliID)
{
    emit sendIDtoDLL(KorttiID, TiliID);
}

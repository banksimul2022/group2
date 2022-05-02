#include "kirjaudusisaan.h"
#include "ui_kirjaudusisaan.h"

kirjaudusisaan::kirjaudusisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjaudusisaan)
{
    ui->setupUi(this);

    pDLLRestAPI = new DLLRestAPI;

    pDLLPinCode = new DLLPinCode;

    pPankkimenu = new pankkimenu;

    pDLLSerialPort = new DLLSerialPort;


    connect( pDLLSerialPort->objectSerialEngine, SIGNAL(sendCardSerialNumber(QString)), this, SLOT(getCardNumber(QString)));

    connect( pDLLPinCode->objectDialog, SIGNAL(pin(QString)), this, SLOT(pinkoodi(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), pDLLPinCode->objectDialog, SLOT (CheckPWD(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), this, SLOT(trueFalse(QString)));

}

kirjaudusisaan::~kirjaudusisaan()
{
    delete ui;
    delete pPankkimenu;
    delete pDLLRestAPI;
    delete pDLLPinCode;
    delete pDLLSerialPort;
    pDLLRestAPI = nullptr;
    pDLLPinCode = nullptr;
    pPankkimenu = nullptr;
    pDLLSerialPort = nullptr;
}

void kirjaudusisaan::getCardNumber(QString x)
{
    qDebug()<<"getCardNumber slot";
    ui-> label->setText(x);
}

void kirjaudusisaan::on_VALIAIKANAPPI_clicked()
{
    pDLLPinCode->openDllDialog();
}

void kirjaudusisaan::trueFalse(QString TrueFalse)
{
    if(TrueFalse!="false")
        {
            pPankkimenu -> exec();
    }
}

void kirjaudusisaan::pinkoodi(QString pincode)
{
    pDLLRestAPI->setPinKort(kortnro,pincode);
}

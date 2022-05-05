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

    connect(pDLLPinCode->objectDialog, SIGNAL(korttiok()), pDLLRestAPI->objectLogin, SLOT(receiveSignal()));

    connect( pDLLSerialPort->objectSerialEngine, SIGNAL(sendCardSerialNumber(QString)), this, SLOT(getCardNumber(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(pin(QString)), pDLLRestAPI->objectLogin, SLOT(receivePincode(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), pDLLPinCode->objectDialog, SLOT (CheckPWD(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(loginok()),this, SLOT(trueFalse()));

    connect(pDLLRestAPI->objectLukitus, SIGNAL(sendLukitus(QString)), pDLLPinCode->objectDialog, SLOT(ifcardlocked(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(cardlocked()), pDLLRestAPI->objectPutLukitus, SLOT(receiveSignal()));

    connect(pDLLPinCode->objectDialog, SIGNAL(loginClicked()), pDLLRestAPI->objectLukitus, SLOT(receiveClicked()));
}

kirjaudusisaan::~kirjaudusisaan()
{
    disconnect( pDLLSerialPort->objectSerialEngine, SIGNAL(sendCardSerialNumber(QString)), this, SLOT(getCardNumber(QString)));

    disconnect(pDLLPinCode->objectDialog, SIGNAL(pin(QString)), pDLLRestAPI->objectLogin, SLOT(receivePincode(QString)));

    disconnect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), pDLLPinCode->objectDialog, SLOT (CheckPWD(QString)));

    disconnect(pDLLPinCode->objectDialog, SIGNAL(loginok()),this, SLOT(trueFalse()));

    disconnect(pDLLRestAPI->objectLukitus, SIGNAL(sendLukitus(QString)), pDLLPinCode->objectDialog, SLOT(ifcardlocked(QString)));

    disconnect(pDLLPinCode->objectDialog, SIGNAL(cardlocked()), pDLLRestAPI->objectPutLukitus, SLOT(receiveSignal()));

    disconnect(pDLLPinCode->objectDialog, SIGNAL(loginClicked()), pDLLRestAPI->objectLukitus, SLOT(receiveClicked()));

    disconnect(pDLLPinCode->objectDialog, SIGNAL(korttiok()), pDLLRestAPI->objectLogin, SLOT(receiveSignal()));

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

void kirjaudusisaan::on_VALIAIKANAPPI_clicked()
{
    pDLLPinCode->openDllDialog();
}

void kirjaudusisaan::trueFalse()
{
    qDebug()<<"sisaan";
    pPankkimenu -> asiakas();
    pPankkimenu -> exec();
}

void kirjaudusisaan::getCardNumber(QString)
{

}



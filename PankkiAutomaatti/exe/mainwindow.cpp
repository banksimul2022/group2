#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pDLLRestAPI = new DLLRestAPI;

    pDLLPinCode = new DLLPinCode;

    pPankkimenu = new pankkimenu;

    pDLLSerialPort = new DLLSerialPort;

    connect(this,SIGNAL(sendCardSerialNumberAPI(QString)),pDLLRestAPI->objectLogin,SLOT(receiveCardNum(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(korttiok()), pDLLRestAPI->objectLogin, SLOT(receiveSignal()));

    connect( pDLLSerialPort->objectSerialEngine, SIGNAL(sendCardSerialNumber(QString)), this, SLOT(getCardNumber(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(pin(QString)), pDLLRestAPI->objectLogin, SLOT(receivePincode(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), pDLLPinCode->objectDialog, SLOT (CheckPWD(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(loginok()),this, SLOT(trueFalse()));

    connect(pDLLRestAPI->objectLukitus, SIGNAL(sendLukitus(QString)), pDLLPinCode->objectDialog, SLOT(ifcardlocked(QString)));

    connect(pDLLPinCode->objectDialog, SIGNAL(cardlocked()), pDLLRestAPI->objectPutLukitus, SLOT(receiveSignal()));

    connect(pDLLPinCode->objectDialog, SIGNAL(loginClicked()), pDLLRestAPI->objectLukitus, SLOT(receiveClicked()));
}

MainWindow::~MainWindow()
{
    disconnect(this,SIGNAL(sendCardSerialNumberAPI(QString)),pDLLRestAPI->objectLogin,SLOT(receiveCardNum(QString)));

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
    ui = nullptr;
    pDLLRestAPI = nullptr;
    pDLLPinCode = nullptr;
    pPankkimenu = nullptr;
    pDLLSerialPort = nullptr;
}

void MainWindow::trueFalse()
{
    pPankkimenu -> asiakas();
    pPankkimenu -> exec();
}

void MainWindow::getCardNumber(QString x)
{
    kortnro = x;
    emit sendCardSerialNumberAPI(kortnro);
    pDLLPinCode->openDllDialog();

}

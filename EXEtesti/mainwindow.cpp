#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectDLLPinCode = new DLLPinCode;
    objectRestAPI = new DLLRestAPI;

    connect(objectDLLPinCode->objectDialog, SIGNAL(pin(QString)), this, SLOT(pinkoodi(QString)));
    connect(objectRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), objectDLLPinCode->objectDialog, SLOT(CheckPWD(QString)));
    connect(objectRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), this, SLOT(trueFalse(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;

    delete objectDLLPinCode;
    objectDLLPinCode = nullptr;

    delete objectValikko;
    objectValikko = nullptr;
}

void MainWindow::on_pushButton_clicked()
{
    objectDLLPinCode->openDllDialog(kortnro);
}

void MainWindow::pinkoodi(QString pincode)
{
    qDebug()<<pincode;
    objectRestAPI->setPinKort(kortnro,pincode);
}

void MainWindow::trueFalse(QString TrueFalse)
{
    qDebug() << TrueFalse;

    if(TrueFalse!="false")
    {
        objectValikko = new Valikko;
        objectValikko -> show();
    }
}


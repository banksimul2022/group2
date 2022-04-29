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


    connect( pDLLPinCode->objectDialog, SIGNAL(pin(QString)), this, SLOT(pinkoodi(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), pDLLPinCode->objectDialog, SLOT (CheckPWD(QString)));

    connect( pDLLRestAPI->objectLogin, SIGNAL(getTrueFalse(QString)), this, SLOT(trueFalse(QString)));

}

kirjaudusisaan::~kirjaudusisaan()
{
    delete ui;
    delete pPankkimenu;
    pPankkimenu = nullptr;
    disconnect(pDLLPinCode->objectDialog, SIGNAL(pin(QString)), this, SLOT(pinkoodi(QString)));

    disconnect( this, SIGNAL(truefalse(QString)), pDLLPinCode->objectDialog, SLOT (checkPWD(QString)));
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

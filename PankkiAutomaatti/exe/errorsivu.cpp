#include "errorsivu.h"
#include "ui_errorsivu.h"

errorsivu::errorsivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorsivu)
{
    ui->setupUi(this);
    pQTimer = new QTimer;

    connect( pQTimer, SIGNAL(timeout()), this, SLOT(timerSlot()));
    pQTimer->start(10000);
}

errorsivu::~errorsivu()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void errorsivu::timerSlot()
{
        close();
}


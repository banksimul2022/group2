#include "errorsivu.h"
#include "ui_errorsivu.h"

errorsivu::errorsivu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::errorsivu)
{
    ui->setupUi(this);
}

errorsivu::~errorsivu()
{
    delete ui;
}

void errorsivu::on_OKnappi_clicked()
{
    close();
}


#include "omasumma.h"
#include "ui_omasumma.h"

omasumma::omasumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::omasumma)
{
    ui->setupUi(this);
}

omasumma::~omasumma()
{
    delete ui;
}

void omasumma::on_pushButton_clicked()
{
    close();
}


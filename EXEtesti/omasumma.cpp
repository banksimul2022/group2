#include "omasumma.h"
#include "ui_omasumma.h"

OmaSumma::OmaSumma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OmaSumma)
{
    ui->setupUi(this);
}

OmaSumma::~OmaSumma()
{
    delete ui;
}

void OmaSumma::on_btnOK_clicked()
{

}


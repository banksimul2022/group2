#include "kirjaudusisaan.h"
#include "ui_kirjaudusisaan.h"

kirjaudusisaan::kirjaudusisaan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kirjaudusisaan)
{
    ui->setupUi(this);
    pPankkimenu = new pankkimenu;
}

kirjaudusisaan::~kirjaudusisaan()
{
    delete ui;
}

void kirjaudusisaan::on_palaaalkuikkunaan_clicked()
{
    close();
}


void kirjaudusisaan::on_kirjaudu_clicked()
{
   close();
   pPankkimenu -> exec();
}


#include "selaatilitapahtumia.h"
#include "ui_selaatilitapahtumia.h"

selaatilitapahtumia::selaatilitapahtumia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selaatilitapahtumia)
{
    ui->setupUi(this);   
}

selaatilitapahtumia::~selaatilitapahtumia()
{
    delete ui;
}

void selaatilitapahtumia::on_palaamenuuntilitapahtumat_clicked()
{
    close();
}


void selaatilitapahtumia::on_aikaisempi_clicked()
{
    value--;
    ui->spinBox->setValue(value);
}

void selaatilitapahtumia::on_seuraava_clicked()
{
    value++;
    ui->spinBox->setValue(value);
}


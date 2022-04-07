#include "naytasaldo.h"
#include "ui_naytasaldo.h"

naytasaldo::naytasaldo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::naytasaldo)
{
    ui->setupUi(this);
}

naytasaldo::~naytasaldo()
{
    delete ui;
}

void naytasaldo::on_pushButton_clicked()
{
    close();
}


void naytasaldo::on_palaasaldosta_clicked()
{
    close();
}


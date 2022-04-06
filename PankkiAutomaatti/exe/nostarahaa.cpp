#include "nostarahaa.h"
#include "ui_nostarahaa.h"

nostarahaa::nostarahaa(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nostarahaa)
{
    ui->setupUi(this);
    pomasumma = new omasumma;
}

nostarahaa::~nostarahaa()
{
    delete ui;
}

void nostarahaa::on_pushButton_7_clicked()
{
    close();
}


void nostarahaa::on_oma_clicked()
{
    pomasumma -> exec();
}


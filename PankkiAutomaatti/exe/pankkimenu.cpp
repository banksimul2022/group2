#include "pankkimenu.h"
#include "ui_pankkimenu.h"

pankkimenu::pankkimenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pankkimenu)
{
    ui->setupUi(this);
    pDLLRestAPI = new DLLRestAPI;
    pnostarahaa = new nostarahaa;
    pselaatilit = new selaatilitapahtumia;
    pnaytasaldo = new naytasaldo;
}

pankkimenu::~pankkimenu()
{
    delete ui;
}

void pankkimenu::on_pushButton_3_clicked()
{
    close();
}


void pankkimenu::on_nosta_clicked()
{
    pnostarahaa -> exec();
}


void pankkimenu::on_selaa_clicked()
{
    pselaatilit -> exec();
}


void pankkimenu::on_naytasaldo_clicked()
{
    pnaytasaldo->getAsiakas();
    pnaytasaldo -> exec();
}


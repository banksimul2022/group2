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
    pQTimer = new QTimer;

    connect( pQTimer, SIGNAL(timeout()), this, SLOT(laskurislot()));

    pQTimer->start(30000);
}

pankkimenu::~pankkimenu()
{
    delete ui;
    pQTimer->stop();
    pQTimer = nullptr;
}

void pankkimenu::on_pushButton_3_clicked()
{
    close();
}


void pankkimenu::on_nosta_clicked()
{
    laskuri = laskuri + 1;
    pnostarahaa -> startUpdate();
    pnostarahaa -> exec();
}


void pankkimenu::on_selaa_clicked()
{
    laskuri = laskuri + 1;
    int x = 11;
    pselaatilit -> sendsignal(x);
    pselaatilit -> exec();
}


void pankkimenu::on_naytasaldo_clicked()
{
    laskuri = laskuri + 1;
    pnaytasaldo -> getAsiakas();
    pnaytasaldo -> exec();
}

void pankkimenu::laskurislot()
{
    qDebug() << "timer...";
    if ( laskuri ==0){
    close();
    pnaytasaldo->close();
    pnostarahaa->close();
    pselaatilit->close();
    }
    else{
        laskuri = 0;
    }
}

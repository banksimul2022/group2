#include "pankkimenu.h"
#include "ui_pankkimenu.h"

pankkimenu::pankkimenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pankkimenu)
{
    ui->setupUi(this);
    pnostarahaa = new nostarahaa;
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


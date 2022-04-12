#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
    ui = nullptr;
}

void Dialog::setDialogValue(QString x)
{
    dialogValue = x;
}

QString Dialog::getDialogValue()
{
    return dialogValue;
}

void Dialog::setCardNumber(QString cardnumber)
{
    Kortinnumero=cardnumber;
    ui->labelkortti->setText(Kortinnumero);
}

void Dialog::addTries()
{
    if(yritykset<=3){
    yritykset++;
    }
    else{
        yritykset=0;
    }
    qDebug()<<yritykset;
}

void Dialog::on_btnSet_clicked()
{
    QString a=ui->textValue->text();
    this->setDialogValue(a);
    this->close();
}


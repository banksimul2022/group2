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

    qDebug()<<"setDialogValue funktio";
    qDebug()<<x;

    emit pin(x);
}

QString Dialog::getDialogValue()
{
    return dialogValue;
}

void Dialog::CheckPWD(QString x)
{
    qDebug()<<"CheckPWD sai";
    qDebug()<<x;

    if (x!="false"){
        qDebug()<<"if lauseen sisällä";
        QWidget::close();
    }
    qDebug()<<"If lauseen ohi mennyt";
    qDebug()<<"Ei ole enää CheckPWD slotissa";
}

void Dialog::setCardNumber(QString cardnumber)
{
    Kortinnumero=cardnumber;
    ui->labelkortti->setText(Kortinnumero);
}

void Dialog::on_btnSet_clicked()
{
    QString a=ui->textValue->text();
    ui->textValue->setText("");
    yritykset--;
    qDebug()<<yritykset;
    ui->labeltries->setNum(yritykset);
    this->setDialogValue(a);

    qDebug()<<"Salasana input";
    qDebug()<<a;

    //if(a==varpin){
    //    QWidget::close();
    //}

    if(yritykset==0){
        emit cardlocked();
        QWidget::close();

   }
}


void Dialog::on_pushButton_clicked()
{
    QWidget::close();
}

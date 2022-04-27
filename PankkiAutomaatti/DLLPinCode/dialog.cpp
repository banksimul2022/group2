#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->labeltries->setNum(yritykset);
}

Dialog::~Dialog()
{
    qDebug()<<"dialog.cpp tuhoajassa";
    yritykset=3;
    ui->labeltries->setNum(yritykset);
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
        yritykset=3;
        QWidget::close();
    }
    qDebug()<<"If lauseen ohi mennyt";
    qDebug()<<"Ei ole enää CheckPWD slotissa";
}

void Dialog::setCardNumber()
{
    ui->labeltries->setNum(yritykset);
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

    if(yritykset==0){
        emit cardlocked();
        qDebug()<<"cardlocked signaali lähetetty";
        yritykset=3;
        ui->labeltries->setNum(yritykset);

        QWidget::close();
   }
}


void Dialog::on_pushButton_clicked()
{
    yritykset=3;
    QWidget::close();
}

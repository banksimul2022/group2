#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->labeltries->setNum(yritykset);
    ui->label_2->setText("Syötä pinkoodi");
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
    emit pin(x);                                //Lähettää pinkoodin
    dialogValue = x;

    qDebug()<<"setDialogValue funktio: " + x;
}

QString Dialog::getDialogValue()
{
    return dialogValue;
}

void Dialog::CheckPWD(QString x)
{
    qDebug()<<"CheckPWD sai";
    qDebug()<<x;

    if (x!="false" && korttilukossa=="0"){
        emit loginok();

        ui->label_2->setText("");

        qDebug()<<"if lauseen sisällä";

        yritykset=3;
        ui->labeltries->setNum(yritykset);



        QWidget::close();
    }

    korttilukossa = "";

    qDebug()<<"If lauseen ohi mennyt";
    qDebug()<<"Ei ole enää CheckPWD slotissa";
}

void Dialog::ifcardlocked(QString x)
{
    qDebug()<<"ifcardlocked slotti sai: " + x;
    korttilukossa = x;

    if(korttilukossa=="1"){
        qDebug()<<"if korttilukossa 1 sisällä";
        ui->label_2->setText("Kortti lukossa");
    }
}

void Dialog::setCardNumber()
{
    ui->labeltries->setNum(yritykset);
}

void Dialog::on_btnSet_clicked()
{

    QString a=ui->textValue->text();
    this->setDialogValue(a);
    ui->textValue->setText("");

    emit loginClicked();

    qDebug()<<"Salasana input: " + a;

    yritykset--;
    qDebug()<<yritykset;
    ui->labeltries->setNum(yritykset);

    if(yritykset==0){
        emit cardlocked();

        qDebug()<<"cardlocked signaali lähetetty";

        yritykset=3;
        ui->labeltries->setNum(yritykset);
   }

    ui->label_2->setText("Väärä pinkoodi");

    if(korttilukossa=="1"){
        qDebug()<<"if korttilukossa 1 sisällä";
        ui->label_2->setText("Kortti lukossa");
    }
}


void Dialog::on_pushButton_clicked()
{
    yritykset=3;
    ui->labeltries->setNum(yritykset);
    ui->label_2->setText("Syötä pinkoodi");
    QWidget::close();
}

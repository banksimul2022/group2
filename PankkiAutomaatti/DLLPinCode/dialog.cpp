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

    ui->btnSet->setEnabled(true);

    delete ui;
    ui = nullptr;
}

void Dialog::setDialogValue(QString x)
{

    dialogValue = x;

    qDebug()<<"setDialogValue funktio: " + x;
}

QString Dialog::getDialogValue()
{
    return dialogValue;
}

void Dialog::ifcardlocked(QString x)
{
    qDebug()<<"ifcardlocked slotti sai: " + x;
    korttilukossa = x;

    if(korttilukossa=="1"){
        qDebug()<<"if korttilukossa 1 sisällä";
        ui->label_2->setText("Kortti lukossa");
        ui->btnSet->setEnabled(false);
        ui->labeltries->setText("");                  //Asetetaan yritykset labeliin.
    }
    else{
        emit korttiok();
    }
}

void Dialog::CheckPWD(QString x)
{
    qDebug()<<"CheckPWD sai: " + x;

    yritykset--;                                    //Miinustaa yhden yrityksen jokaisella painauksella.
    ui->label_2->setText("Väärä pinkoodi");         //Asetetaan teksti labeliin.
    ui->labeltries->setNum(yritykset);


    if(korttilukossa=="1"){
        qDebug()<<"if korttilukossa 1 sisällä";
        ui->labeltries->setText("");                  //Asetetaan yritykset labeliin.
        ui->label_2->setText("Kortti lukossa");
    }

    if (x!="false" && korttilukossa=="0"){
        yritykset=3;
        ui->labeltries->setNum(yritykset);

        emit loginok();

        qDebug()<<"if lauseen sisällä";


        ui->label_2->setText("Syötä pinkoodi");         //Asetetaan teksti labeliin


        QWidget::close();
    }

    if(yritykset==0){                               //Tarkistaa onko yritykset nolla jos on ehto toteutuu.
        emit cardlocked();                          //Lähettää signaalin että kortti lukitetaan.

        qDebug()<<"cardlocked signaali lähetetty";  //qDebug, jotta näkee että ollaan if silmukassa.

        yritykset=3;                                //Asetetaan taas yritykset kolmeen.
        ui->labeltries->setText("");                  //Asetetaan yritykset labeliin.
        ui->btnSet->setEnabled(false);
        ui->label_2->setText("Kortti lukossa");
   }

    korttilukossa = "";                                 //Tyhjennetään korttilukossa muuttuja

    qDebug()<<"If lauseen ohi mennyt";                  //Muutama qDebug että tietää missä ohjelma menee
    qDebug()<<"Ei ole enää CheckPWD slotissa";
}



void Dialog::setCardNumber()
{

}

void Dialog::on_btnSet_clicked()
{
    QString a=ui->textValue->text();                //Lukee lineedit tekstin muuttujaan.
    this->setDialogValue(a);                        //Välittää DialogValue muuttujaan pinkoodin.

    emit pin(a);                                    //Lähettää pinkoodin.
    emit loginClicked();                            //Lähettää signaalin että nappia on painettu.

    ui->textValue->setText("");                     //Asettaa lineedit kentän tyhjäksi.

}


void Dialog::on_pushButton_clicked()                //Jos painetaan sulje nappia.
{
    yritykset=3;                                    //Yritykset asetetaan takaisin kolmeen.
    ui->labeltries->setNum(yritykset);              //Asetetaan numero labeliin.
    ui->label_2->setText("Syötä pinkoodi");         //Asetetaan teksti labeliin
    ui->btnSet->setEnabled(true);                   //Ottaa pushbuttonin pois käytöstä.
    QWidget::close();
}

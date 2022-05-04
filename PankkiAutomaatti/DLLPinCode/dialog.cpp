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
        ui->labeltries->setNum(0);              //Asettaa yritykset labeliin.
    }
    else{
        emit korttiok();
    }
}

void Dialog::CheckPWD(QString x)
{

    qDebug()<<"CheckPWD sai: " + x;

    if (x!="false" && korttilukossa=="0"){
        emit loginok();

        ui->label_2->setText("");

        qDebug()<<"if lauseen sisällä";

        yritykset=3;
        ui->labeltries->setNum(yritykset);
        ui->label_2->setText("Syötä pinkoodi");         //Asetetaan teksti labeliin


        QWidget::close();
    }

    if(x!="true"){
    ui->label_2->setText("Väärä pinkoodi");         //Asetetaan teksti labeliin.

    yritykset--;                                    //Miinustaa yhden yrityksen jokaisella painauksella.
    qDebug()<<yritykset;                            //qDebug mikä kertoo yrityksien määrän.


    }

    if(yritykset==0){                               //Tarkistaa onko yritykset nolla jos on ehto toteutuu.
        emit cardlocked();                          //Lähettää signaalin että kortti lukitetaan.

        qDebug()<<"cardlocked signaali lähetetty";  //qDebug, jotta näkee että ollaan if silmukassa.

        yritykset=3;                                //Asetetaan taas yritykset kolmeen.
        ui->labeltries->setNum(yritykset);          //Asetetaan yritykset labeliin.
        ui->btnSet->setEnabled(false);
   }

    korttilukossa = "";

    qDebug()<<"If lauseen ohi mennyt";
    qDebug()<<"Ei ole enää CheckPWD slotissa";
}



void Dialog::setCardNumber()
{
    ui->labeltries->setNum(yritykset);
}

void Dialog::on_btnSet_clicked()
{

    QString a=ui->textValue->text();                //Lukee lineedit tekstin muuttujaan.
    this->setDialogValue(a);                        //Välittää DialogValue muuttujaan pinkoodin.

    emit pin(a);                                    //Lähettää pinkoodin.
    emit loginClicked();                            //Lähettää signaalin että nappia on painettu.

    ui->textValue->setText("");                     //Asettaa lineedit kentän tyhjäksi.



    qDebug()<<"Salasana input: " + a;               //qDebug mikä kertoo pinkoodin joka on syötetty.





    if(korttilukossa=="1"){
        qDebug()<<"if korttilukossa 1 sisällä";
        ui->label_2->setText("Kortti lukossa");
    }
}


void Dialog::on_pushButton_clicked()                //Jos painetaan sulje nappia.
{
    yritykset=3;                                    //Yritykset asetetaan takaisin kolmeen.
    ui->labeltries->setNum(yritykset);              //Asetetaan numero labeliin.
    ui->label_2->setText("Syötä pinkoodi");         //Asetetaan teksti labeliin
    ui->btnSet->setEnabled(true);
    QWidget::close();
}

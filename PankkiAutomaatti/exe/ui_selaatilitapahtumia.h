/********************************************************************************
** Form generated from reading UI file 'selaatilitapahtumia.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELAATILITAPAHTUMIA_H
#define UI_SELAATILITAPAHTUMIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_selaatilitapahtumia
{
public:
    QPushButton *palaamenuuntilitapahtumat;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *aikaisempi;
    QPushButton *seuraava;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *selaatilitapahtumia)
    {
        if (selaatilitapahtumia->objectName().isEmpty())
            selaatilitapahtumia->setObjectName(QString::fromUtf8("selaatilitapahtumia"));
        selaatilitapahtumia->resize(562, 456);
        palaamenuuntilitapahtumat = new QPushButton(selaatilitapahtumia);
        palaamenuuntilitapahtumat->setObjectName(QString::fromUtf8("palaamenuuntilitapahtumat"));
        palaamenuuntilitapahtumat->setGeometry(QRect(10, 10, 141, 51));
        listWidget = new QListWidget(selaatilitapahtumia);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 10, 371, 51));
        listWidget_2 = new QListWidget(selaatilitapahtumia);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 90, 351, 341));
        aikaisempi = new QPushButton(selaatilitapahtumia);
        aikaisempi->setObjectName(QString::fromUtf8("aikaisempi"));
        aikaisempi->setGeometry(QRect(380, 340, 161, 41));
        seuraava = new QPushButton(selaatilitapahtumia);
        seuraava->setObjectName(QString::fromUtf8("seuraava"));
        seuraava->setGeometry(QRect(380, 390, 161, 41));
        spinBox = new QSpinBox(selaatilitapahtumia);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(490, 290, 51, 41));
        spinBox->setWrapping(false);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setReadOnly(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(1);
        spinBox->setValue(1);
        label = new QLabel(selaatilitapahtumia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 300, 71, 21));

        retranslateUi(selaatilitapahtumia);

        QMetaObject::connectSlotsByName(selaatilitapahtumia);
    } // setupUi

    void retranslateUi(QDialog *selaatilitapahtumia)
    {
        selaatilitapahtumia->setWindowTitle(QCoreApplication::translate("selaatilitapahtumia", "Tilitapahtumat", nullptr));
        palaamenuuntilitapahtumat->setText(QCoreApplication::translate("selaatilitapahtumia", "Palaa aloitusn\303\244ytt\303\266\303\266n", nullptr));
        aikaisempi->setText(QCoreApplication::translate("selaatilitapahtumia", "Aikaisempi sivu", nullptr));
        seuraava->setText(QCoreApplication::translate("selaatilitapahtumia", "Seuraava sivu", nullptr));
        label->setText(QCoreApplication::translate("selaatilitapahtumia", "Sivunumero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selaatilitapahtumia: public Ui_selaatilitapahtumia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELAATILITAPAHTUMIA_H

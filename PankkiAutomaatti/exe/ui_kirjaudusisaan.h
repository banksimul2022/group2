/********************************************************************************
** Form generated from reading UI file 'kirjaudusisaan.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIRJAUDUSISAAN_H
#define UI_KIRJAUDUSISAAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_kirjaudusisaan
{
public:
    QLabel *label;
    QPushButton *VALIAIKANAPPI;

    void setupUi(QDialog *kirjaudusisaan)
    {
        if (kirjaudusisaan->objectName().isEmpty())
            kirjaudusisaan->setObjectName(QString::fromUtf8("kirjaudusisaan"));
        kirjaudusisaan->resize(400, 121);
        QPalette palette;
        kirjaudusisaan->setPalette(palette);
        label = new QLabel(kirjaudusisaan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 30, 151, 41));
        VALIAIKANAPPI = new QPushButton(kirjaudusisaan);
        VALIAIKANAPPI->setObjectName(QString::fromUtf8("VALIAIKANAPPI"));
        VALIAIKANAPPI->setGeometry(QRect(69, 80, 241, 24));

        retranslateUi(kirjaudusisaan);

        QMetaObject::connectSlotsByName(kirjaudusisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjaudusisaan)
    {
        kirjaudusisaan->setWindowTitle(QCoreApplication::translate("kirjaudusisaan", "Kirjaudu sis\303\244\303\244n", nullptr));
        label->setText(QCoreApplication::translate("kirjaudusisaan", "Aseta kortti kortinlukijaan", nullptr));
        VALIAIKANAPPI->setText(QCoreApplication::translate("kirjaudusisaan", "HOMOJA OULUSTA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjaudusisaan: public Ui_kirjaudusisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H

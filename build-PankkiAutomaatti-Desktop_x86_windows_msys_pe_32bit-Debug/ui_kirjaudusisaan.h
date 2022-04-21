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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_kirjaudusisaan
{
public:
    QLineEdit *lineEdit;
    QPushButton *palaaalkuikkunaan;
    QPushButton *kirjaudu;
    QLabel *label;

    void setupUi(QDialog *kirjaudusisaan)
    {
        if (kirjaudusisaan->objectName().isEmpty())
            kirjaudusisaan->setObjectName(QString::fromUtf8("kirjaudusisaan"));
        kirjaudusisaan->resize(400, 121);
        lineEdit = new QLineEdit(kirjaudusisaan);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 80, 131, 24));
        palaaalkuikkunaan = new QPushButton(kirjaudusisaan);
        palaaalkuikkunaan->setObjectName(QString::fromUtf8("palaaalkuikkunaan"));
        palaaalkuikkunaan->setGeometry(QRect(20, 10, 131, 24));
        kirjaudu = new QPushButton(kirjaudusisaan);
        kirjaudu->setObjectName(QString::fromUtf8("kirjaudu"));
        kirjaudu->setGeometry(QRect(170, 80, 91, 24));
        label = new QLabel(kirjaudusisaan);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 50, 271, 16));

        retranslateUi(kirjaudusisaan);

        QMetaObject::connectSlotsByName(kirjaudusisaan);
    } // setupUi

    void retranslateUi(QDialog *kirjaudusisaan)
    {
        kirjaudusisaan->setWindowTitle(QCoreApplication::translate("kirjaudusisaan", "Dialog", nullptr));
        palaaalkuikkunaan->setText(QCoreApplication::translate("kirjaudusisaan", "Palaa aloitus ikkunaan", nullptr));
        kirjaudu->setText(QCoreApplication::translate("kirjaudusisaan", "Kirjaudu sis\303\244\303\244n", nullptr));
        label->setText(QCoreApplication::translate("kirjaudusisaan", "Kirjoita pinkoodi ja jatka painamalla kirjaudu sis\303\244\303\244n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kirjaudusisaan: public Ui_kirjaudusisaan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIRJAUDUSISAAN_H

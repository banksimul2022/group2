/********************************************************************************
** Form generated from reading UI file 'omasumma.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OMASUMMA_H
#define UI_OMASUMMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_omasumma
{
public:
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *omasumma)
    {
        if (omasumma->objectName().isEmpty())
            omasumma->setObjectName(QString::fromUtf8("omasumma"));
        omasumma->resize(400, 300);
        lineEdit = new QLineEdit(omasumma);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 120, 191, 51));
        label = new QLabel(omasumma);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 171, 31));
        pushButton = new QPushButton(omasumma);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 131, 61));
        pushButton_2 = new QPushButton(omasumma);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 120, 101, 51));

        retranslateUi(omasumma);

        QMetaObject::connectSlotsByName(omasumma);
    } // setupUi

    void retranslateUi(QDialog *omasumma)
    {
        omasumma->setWindowTitle(QCoreApplication::translate("omasumma", "Oma summa", nullptr));
        label->setText(QCoreApplication::translate("omasumma", "Kirjoita haluamasi summa", nullptr));
        pushButton->setText(QCoreApplication::translate("omasumma", "Palaa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("omasumma", "Nosta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class omasumma: public Ui_omasumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OMASUMMA_H

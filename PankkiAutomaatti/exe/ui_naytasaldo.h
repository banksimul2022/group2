/********************************************************************************
** Form generated from reading UI file 'naytasaldo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYTASALDO_H
#define UI_NAYTASALDO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_naytasaldo
{
public:
    QPushButton *palaasaldosta;
    QLineEdit *lineEdit;
    QListWidget *listWidget;
    QLineEdit *lineEdit_2;
    QLabel *label;

    void setupUi(QDialog *naytasaldo)
    {
        if (naytasaldo->objectName().isEmpty())
            naytasaldo->setObjectName(QString::fromUtf8("naytasaldo"));
        naytasaldo->resize(362, 300);
        palaasaldosta = new QPushButton(naytasaldo);
        palaasaldosta->setObjectName(QString::fromUtf8("palaasaldosta"));
        palaasaldosta->setGeometry(QRect(10, 10, 121, 41));
        lineEdit = new QLineEdit(naytasaldo);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 10, 201, 41));
        lineEdit->setReadOnly(true);
        listWidget = new QListWidget(naytasaldo);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 110, 341, 181));
        lineEdit_2 = new QLineEdit(naytasaldo);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(152, 63, 201, 41));
        label = new QLabel(naytasaldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 70, 81, 31));

        retranslateUi(naytasaldo);

        QMetaObject::connectSlotsByName(naytasaldo);
    } // setupUi

    void retranslateUi(QDialog *naytasaldo)
    {
        naytasaldo->setWindowTitle(QCoreApplication::translate("naytasaldo", "N\303\244yt\303\244 saldo", nullptr));
        palaasaldosta->setText(QCoreApplication::translate("naytasaldo", "Palaa aloitusn\303\244ytt\303\266\303\266n", nullptr));
        label->setText(QCoreApplication::translate("naytasaldo", "Saldo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class naytasaldo: public Ui_naytasaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTASALDO_H

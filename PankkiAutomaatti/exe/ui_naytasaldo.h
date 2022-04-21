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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_naytasaldo
{
public:
    QPushButton *palaasaldosta;
    QListWidget *tilitapahtumatedit;
    QLineEdit *saldoedit;
    QLabel *label;
    QTextEdit *asiakasedit;

    void setupUi(QDialog *naytasaldo)
    {
        if (naytasaldo->objectName().isEmpty())
            naytasaldo->setObjectName(QString::fromUtf8("naytasaldo"));
        naytasaldo->resize(362, 300);
        palaasaldosta = new QPushButton(naytasaldo);
        palaasaldosta->setObjectName(QString::fromUtf8("palaasaldosta"));
        palaasaldosta->setGeometry(QRect(10, 10, 121, 41));
        tilitapahtumatedit = new QListWidget(naytasaldo);
        tilitapahtumatedit->setObjectName(QString::fromUtf8("tilitapahtumatedit"));
        tilitapahtumatedit->setGeometry(QRect(10, 190, 341, 101));
        saldoedit = new QLineEdit(naytasaldo);
        saldoedit->setObjectName(QString::fromUtf8("saldoedit"));
        saldoedit->setGeometry(QRect(150, 140, 201, 41));
        label = new QLabel(naytasaldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 150, 81, 31));
        asiakasedit = new QTextEdit(naytasaldo);
        asiakasedit->setObjectName(QString::fromUtf8("asiakasedit"));
        asiakasedit->setGeometry(QRect(150, 10, 201, 121));

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

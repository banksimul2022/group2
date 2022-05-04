/********************************************************************************
** Form generated from reading UI file 'pankkimenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANKKIMENU_H
#define UI_PANKKIMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_pankkimenu
{
public:
    QPushButton *selaa;
    QPushButton *nosta;
    QPushButton *pushButton_3;
    QPushButton *naytasaldo;
    QTextEdit *textEdit;

    void setupUi(QDialog *pankkimenu)
    {
        if (pankkimenu->objectName().isEmpty())
            pankkimenu->setObjectName(QString::fromUtf8("pankkimenu"));
        pankkimenu->resize(480, 288);
        QPalette palette;
        pankkimenu->setPalette(palette);
        selaa = new QPushButton(pankkimenu);
        selaa->setObjectName(QString::fromUtf8("selaa"));
        selaa->setGeometry(QRect(240, 90, 231, 81));
        nosta = new QPushButton(pankkimenu);
        nosta->setObjectName(QString::fromUtf8("nosta"));
        nosta->setGeometry(QRect(10, 90, 221, 81));
        pushButton_3 = new QPushButton(pankkimenu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 180, 231, 91));
        naytasaldo = new QPushButton(pankkimenu);
        naytasaldo->setObjectName(QString::fromUtf8("naytasaldo"));
        naytasaldo->setGeometry(QRect(10, 180, 221, 91));
        textEdit = new QTextEdit(pankkimenu);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 461, 70));

        retranslateUi(pankkimenu);

        QMetaObject::connectSlotsByName(pankkimenu);
    } // setupUi

    void retranslateUi(QDialog *pankkimenu)
    {
        pankkimenu->setWindowTitle(QCoreApplication::translate("pankkimenu", "Menu", nullptr));
        selaa->setText(QCoreApplication::translate("pankkimenu", "Selaa tilitapahtumia", nullptr));
        nosta->setText(QCoreApplication::translate("pankkimenu", "Nosta rahaa", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pankkimenu", "Kirjaudu ulos", nullptr));
        naytasaldo->setText(QCoreApplication::translate("pankkimenu", "N\303\244yt\303\244 saldo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pankkimenu: public Ui_pankkimenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANKKIMENU_H

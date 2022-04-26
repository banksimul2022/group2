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
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NaytaSaldo
{
public:
    QTextEdit *textAsiakas;
    QTextEdit *textTapahtumat;
    QTextEdit *textSaldo;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *NaytaSaldo)
    {
        if (NaytaSaldo->objectName().isEmpty())
            NaytaSaldo->setObjectName(QString::fromUtf8("NaytaSaldo"));
        NaytaSaldo->resize(799, 478);
        textAsiakas = new QTextEdit(NaytaSaldo);
        textAsiakas->setObjectName(QString::fromUtf8("textAsiakas"));
        textAsiakas->setGeometry(QRect(70, 210, 211, 231));
        textTapahtumat = new QTextEdit(NaytaSaldo);
        textTapahtumat->setObjectName(QString::fromUtf8("textTapahtumat"));
        textTapahtumat->setGeometry(QRect(360, 210, 271, 231));
        textSaldo = new QTextEdit(NaytaSaldo);
        textSaldo->setObjectName(QString::fromUtf8("textSaldo"));
        textSaldo->setGeometry(QRect(190, 60, 391, 51));
        label = new QLabel(NaytaSaldo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 70, 49, 24));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label_2 = new QLabel(NaytaSaldo);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 170, 141, 21));
        label_2->setFont(font);
        label_3 = new QLabel(NaytaSaldo);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 160, 67, 24));
        label_3->setFont(font);

        retranslateUi(NaytaSaldo);

        QMetaObject::connectSlotsByName(NaytaSaldo);
    } // setupUi

    void retranslateUi(QDialog *NaytaSaldo)
    {
        NaytaSaldo->setWindowTitle(QCoreApplication::translate("NaytaSaldo", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NaytaSaldo", "Saldo", nullptr));
        label_2->setText(QCoreApplication::translate("NaytaSaldo", "Tilitapahtumat", nullptr));
        label_3->setText(QCoreApplication::translate("NaytaSaldo", "Asiakas", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NaytaSaldo: public Ui_NaytaSaldo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYTASALDO_H

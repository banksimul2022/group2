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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SelaaTilitapahtumia
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textSaldo;
    QTextEdit *textOmistaja;
    QTextEdit *textTapahtumat;

    void setupUi(QDialog *SelaaTilitapahtumia)
    {
        if (SelaaTilitapahtumia->objectName().isEmpty())
            SelaaTilitapahtumia->setObjectName(QString::fromUtf8("SelaaTilitapahtumia"));
        SelaaTilitapahtumia->resize(537, 358);
        horizontalLayout_2 = new QHBoxLayout(SelaaTilitapahtumia);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textSaldo = new QTextEdit(SelaaTilitapahtumia);
        textSaldo->setObjectName(QString::fromUtf8("textSaldo"));

        verticalLayout->addWidget(textSaldo);

        textOmistaja = new QTextEdit(SelaaTilitapahtumia);
        textOmistaja->setObjectName(QString::fromUtf8("textOmistaja"));

        verticalLayout->addWidget(textOmistaja);


        horizontalLayout->addLayout(verticalLayout);

        textTapahtumat = new QTextEdit(SelaaTilitapahtumia);
        textTapahtumat->setObjectName(QString::fromUtf8("textTapahtumat"));

        horizontalLayout->addWidget(textTapahtumat);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(SelaaTilitapahtumia);

        QMetaObject::connectSlotsByName(SelaaTilitapahtumia);
    } // setupUi

    void retranslateUi(QDialog *SelaaTilitapahtumia)
    {
        SelaaTilitapahtumia->setWindowTitle(QCoreApplication::translate("SelaaTilitapahtumia", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelaaTilitapahtumia: public Ui_SelaaTilitapahtumia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELAATILITAPAHTUMIA_H

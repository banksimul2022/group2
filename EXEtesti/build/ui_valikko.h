/********************************************************************************
** Form generated from reading UI file 'valikko.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VALIKKO_H
#define UI_VALIKKO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Valikko
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnNaytaSaldo;
    QPushButton *btnTilitapahtumat;
    QPushButton *pushButton;
    QTextEdit *textNimi;

    void setupUi(QDialog *Valikko)
    {
        if (Valikko->objectName().isEmpty())
            Valikko->setObjectName(QString::fromUtf8("Valikko"));
        Valikko->resize(400, 300);
        label = new QLabel(Valikko);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 70, 131, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        layoutWidget = new QWidget(Valikko);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 110, 150, 97));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnNaytaSaldo = new QPushButton(layoutWidget);
        btnNaytaSaldo->setObjectName(QString::fromUtf8("btnNaytaSaldo"));

        verticalLayout->addWidget(btnNaytaSaldo);

        btnTilitapahtumat = new QPushButton(layoutWidget);
        btnTilitapahtumat->setObjectName(QString::fromUtf8("btnTilitapahtumat"));

        verticalLayout->addWidget(btnTilitapahtumat);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        textNimi = new QTextEdit(Valikko);
        textNimi->setObjectName(QString::fromUtf8("textNimi"));
        textNimi->setGeometry(QRect(20, 20, 104, 31));

        retranslateUi(Valikko);

        QMetaObject::connectSlotsByName(Valikko);
    } // setupUi

    void retranslateUi(QDialog *Valikko)
    {
        Valikko->setWindowTitle(QCoreApplication::translate("Valikko", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Valikko", "P\303\244\303\244valikko", nullptr));
        btnNaytaSaldo->setText(QCoreApplication::translate("Valikko", "N\303\244yt\303\244Saldo", nullptr));
        btnTilitapahtumat->setText(QCoreApplication::translate("Valikko", "SelaaTilitapahtumia", nullptr));
        pushButton->setText(QCoreApplication::translate("Valikko", "NostaRahaa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Valikko: public Ui_Valikko {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VALIKKO_H

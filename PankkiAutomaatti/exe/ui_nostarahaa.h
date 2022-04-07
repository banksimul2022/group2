/********************************************************************************
** Form generated from reading UI file 'nostarahaa.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTARAHAA_H
#define UI_NOSTARAHAA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_nostarahaa
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *oma;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;

    void setupUi(QDialog *nostarahaa)
    {
        if (nostarahaa->objectName().isEmpty())
            nostarahaa->setObjectName(QString::fromUtf8("nostarahaa"));
        nostarahaa->resize(661, 228);
        pushButton = new QPushButton(nostarahaa);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 141, 91));
        pushButton_6 = new QPushButton(nostarahaa);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(170, 10, 141, 91));
        pushButton_2 = new QPushButton(nostarahaa);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 10, 141, 91));
        oma = new QPushButton(nostarahaa);
        oma->setObjectName(QString::fromUtf8("oma"));
        oma->setGeometry(QRect(320, 120, 141, 91));
        pushButton_4 = new QPushButton(nostarahaa);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 120, 141, 91));
        pushButton_5 = new QPushButton(nostarahaa);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 120, 141, 91));
        pushButton_7 = new QPushButton(nostarahaa);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 120, 141, 91));

        retranslateUi(nostarahaa);

        QMetaObject::connectSlotsByName(nostarahaa);
    } // setupUi

    void retranslateUi(QDialog *nostarahaa)
    {
        nostarahaa->setWindowTitle(QCoreApplication::translate("nostarahaa", "Nosta rahaa", nullptr));
        pushButton->setText(QCoreApplication::translate("nostarahaa", "20 euroa", nullptr));
        pushButton_6->setText(QCoreApplication::translate("nostarahaa", "40 euroa", nullptr));
        pushButton_2->setText(QCoreApplication::translate("nostarahaa", "60 euroa", nullptr));
        oma->setText(QCoreApplication::translate("nostarahaa", "Oma summa", nullptr));
        pushButton_4->setText(QCoreApplication::translate("nostarahaa", "100 euroa", nullptr));
        pushButton_5->setText(QCoreApplication::translate("nostarahaa", "500 euroa", nullptr));
        pushButton_7->setText(QCoreApplication::translate("nostarahaa", "Palaa aloitusn\303\244ytt\303\266\303\266n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nostarahaa: public Ui_nostarahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H

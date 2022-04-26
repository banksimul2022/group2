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

class Ui_OmaSumma
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *btnOK;

    void setupUi(QDialog *OmaSumma)
    {
        if (OmaSumma->objectName().isEmpty())
            OmaSumma->setObjectName(QString::fromUtf8("OmaSumma"));
        OmaSumma->resize(400, 300);
        label = new QLabel(OmaSumma);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 60, 231, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEdit = new QLineEdit(OmaSumma);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(120, 110, 141, 31));
        btnOK = new QPushButton(OmaSumma);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(120, 160, 141, 31));
        btnOK->setFont(font);

        retranslateUi(OmaSumma);

        QMetaObject::connectSlotsByName(OmaSumma);
    } // setupUi

    void retranslateUi(QDialog *OmaSumma)
    {
        OmaSumma->setWindowTitle(QCoreApplication::translate("OmaSumma", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("OmaSumma", "Sy\303\266t\303\244 haluamasi summa", nullptr));
        btnOK->setText(QCoreApplication::translate("OmaSumma", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OmaSumma: public Ui_OmaSumma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OMASUMMA_H

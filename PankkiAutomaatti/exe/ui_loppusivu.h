/********************************************************************************
** Form generated from reading UI file 'loppusivu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOPPUSIVU_H
#define UI_LOPPUSIVU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_loppusivu
{
public:
    QLabel *label;

    void setupUi(QDialog *loppusivu)
    {
        if (loppusivu->objectName().isEmpty())
            loppusivu->setObjectName(QString::fromUtf8("loppusivu"));
        loppusivu->resize(694, 87);
        label = new QLabel(loppusivu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 20, 691, 31));
        label->setLineWidth(2);
        label->setScaledContents(false);

        retranslateUi(loppusivu);

        QMetaObject::connectSlotsByName(loppusivu);
    } // setupUi

    void retranslateUi(QDialog *loppusivu)
    {
        loppusivu->setWindowTitle(QCoreApplication::translate("loppusivu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("loppusivu", "Kiitos asioinnista. J\303\244rjestelm\303\244 kirjaa sinut pois 5 sekunnin kuluttua.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loppusivu: public Ui_loppusivu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOPPUSIVU_H

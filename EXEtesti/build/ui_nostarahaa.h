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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostaRahaa
{
public:
    QLabel *label;
    QPushButton *btnOma;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *btn20;
    QPushButton *btn40;
    QPushButton *btn60;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btn100;
    QPushButton *btn200;
    QPushButton *btn500;

    void setupUi(QDialog *NostaRahaa)
    {
        if (NostaRahaa->objectName().isEmpty())
            NostaRahaa->setObjectName(QString::fromUtf8("NostaRahaa"));
        NostaRahaa->resize(782, 491);
        label = new QLabel(NostaRahaa);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 90, 221, 16));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        btnOma = new QPushButton(NostaRahaa);
        btnOma->setObjectName(QString::fromUtf8("btnOma"));
        btnOma->setGeometry(QRect(320, 280, 80, 21));
        widget = new QWidget(NostaRahaa);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(250, 160, 221, 101));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn20 = new QPushButton(widget);
        btn20->setObjectName(QString::fromUtf8("btn20"));

        verticalLayout->addWidget(btn20);

        btn40 = new QPushButton(widget);
        btn40->setObjectName(QString::fromUtf8("btn40"));

        verticalLayout->addWidget(btn40);

        btn60 = new QPushButton(widget);
        btn60->setObjectName(QString::fromUtf8("btn60"));

        verticalLayout->addWidget(btn60);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        btn100 = new QPushButton(widget);
        btn100->setObjectName(QString::fromUtf8("btn100"));

        verticalLayout_2->addWidget(btn100);

        btn200 = new QPushButton(widget);
        btn200->setObjectName(QString::fromUtf8("btn200"));

        verticalLayout_2->addWidget(btn200);

        btn500 = new QPushButton(widget);
        btn500->setObjectName(QString::fromUtf8("btn500"));

        verticalLayout_2->addWidget(btn500);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(NostaRahaa);

        QMetaObject::connectSlotsByName(NostaRahaa);
    } // setupUi

    void retranslateUi(QDialog *NostaRahaa)
    {
        NostaRahaa->setWindowTitle(QCoreApplication::translate("NostaRahaa", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NostaRahaa", "Nosta Rahaa", nullptr));
        btnOma->setText(QCoreApplication::translate("NostaRahaa", "Oma Summa", nullptr));
        btn20->setText(QCoreApplication::translate("NostaRahaa", "20 e", nullptr));
        btn40->setText(QCoreApplication::translate("NostaRahaa", "40 e", nullptr));
        btn60->setText(QCoreApplication::translate("NostaRahaa", "60 e", nullptr));
        btn100->setText(QCoreApplication::translate("NostaRahaa", "100 e", nullptr));
        btn200->setText(QCoreApplication::translate("NostaRahaa", "200 e", nullptr));
        btn500->setText(QCoreApplication::translate("NostaRahaa", "500 e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NostaRahaa: public Ui_NostaRahaa {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTARAHAA_H

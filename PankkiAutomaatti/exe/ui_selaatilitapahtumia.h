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
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_selaatilitapahtumia
{
public:
    QPushButton *palaamenuuntilitapahtumat;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QPushButton *aikaisempi;
    QPushButton *seuraava;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *selaatilitapahtumia)
    {
        if (selaatilitapahtumia->objectName().isEmpty())
            selaatilitapahtumia->setObjectName(QString::fromUtf8("selaatilitapahtumia"));
        selaatilitapahtumia->resize(562, 456);
        QPalette palette;
        QBrush brush(QColor(0, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Link, brush);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush2(QColor(0, 0, 255, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        QBrush brush5(QColor(227, 227, 227, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        QBrush brush6(QColor(160, 160, 160, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush7(QColor(105, 105, 105, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush);
        QBrush brush8(QColor(255, 0, 255, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(245, 245, 245, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(255, 255, 220, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        QBrush brush12(QColor(0, 120, 215, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        selaatilitapahtumia->setPalette(palette);
        palaamenuuntilitapahtumat = new QPushButton(selaatilitapahtumia);
        palaamenuuntilitapahtumat->setObjectName(QString::fromUtf8("palaamenuuntilitapahtumat"));
        palaamenuuntilitapahtumat->setGeometry(QRect(10, 10, 141, 51));
        listWidget = new QListWidget(selaatilitapahtumia);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(180, 10, 371, 51));
        listWidget_2 = new QListWidget(selaatilitapahtumia);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 90, 351, 341));
        aikaisempi = new QPushButton(selaatilitapahtumia);
        aikaisempi->setObjectName(QString::fromUtf8("aikaisempi"));
        aikaisempi->setGeometry(QRect(380, 340, 161, 41));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::HighlightedText, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Link, brush);
        palette1.setBrush(QPalette::Active, QPalette::LinkVisited, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Link, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush12);
        palette1.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Link, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush10);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        aikaisempi->setPalette(palette1);
        seuraava = new QPushButton(selaatilitapahtumia);
        seuraava->setObjectName(QString::fromUtf8("seuraava"));
        seuraava->setGeometry(QRect(380, 390, 161, 41));
        spinBox = new QSpinBox(selaatilitapahtumia);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(490, 290, 51, 41));
        spinBox->setWrapping(false);
        spinBox->setAlignment(Qt::AlignCenter);
        spinBox->setReadOnly(true);
        spinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        spinBox->setMinimum(1);
        spinBox->setValue(1);
        label = new QLabel(selaatilitapahtumia);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 300, 71, 21));

        retranslateUi(selaatilitapahtumia);

        QMetaObject::connectSlotsByName(selaatilitapahtumia);
    } // setupUi

    void retranslateUi(QDialog *selaatilitapahtumia)
    {
        selaatilitapahtumia->setWindowTitle(QCoreApplication::translate("selaatilitapahtumia", "Tilitapahtumat", nullptr));
        palaamenuuntilitapahtumat->setText(QCoreApplication::translate("selaatilitapahtumia", "Palaa aloitusn\303\244ytt\303\266\303\266n", nullptr));
        aikaisempi->setText(QCoreApplication::translate("selaatilitapahtumia", "Aikaisempi sivu", nullptr));
        seuraava->setText(QCoreApplication::translate("selaatilitapahtumia", "Seuraava sivu", nullptr));
        label->setText(QCoreApplication::translate("selaatilitapahtumia", "Sivunumero", nullptr));
    } // retranslateUi

};

namespace Ui {
    class selaatilitapahtumia: public Ui_selaatilitapahtumia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELAATILITAPAHTUMIA_H

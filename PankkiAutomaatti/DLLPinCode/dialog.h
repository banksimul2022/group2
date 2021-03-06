#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void setCardNumber();
    void setDialogValue(QString);

    QString getDialogValue();

signals:
    void pin(QString dllValue);
    void cardlocked();
    void loginClicked();
    void loginok();
    void korttiok();

public slots:
    void CheckPWD(QString);
    void ifcardlocked(QString);

private slots:
    void on_btnSet_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;

    QString korttilukossa = "";
    QString dialogValue;
    QString Kortinnumero;

    int yritykset = 3;
};

#endif // DIALOG_H

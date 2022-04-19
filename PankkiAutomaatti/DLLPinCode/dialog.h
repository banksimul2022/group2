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

    void setCardNumber(QString);
    void setDialogValue(QString);

    QString getDialogValue();

signals:
    void pin(QString dllValue);
    void cardlocked();

public slots:
    void CheckPWD(QString);

private slots:
    void on_btnSet_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dialog *ui;

    QString dialogValue;
    QString Kortinnumero;

    int yritykset = 3;
};

#endif // DIALOG_H

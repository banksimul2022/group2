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
    void setDialogValue(QString);
    QString getDialogValue();
    void setCardNumber(QString);
    void addTries();

private slots:
    void on_btnSet_clicked();

private:
    Ui::Dialog *ui;
    QString dialogValue;
    QString Kortinnumero;
    int yritykset=0;
};

#endif // DIALOG_H

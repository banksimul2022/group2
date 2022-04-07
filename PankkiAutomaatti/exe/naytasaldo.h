#ifndef NAYTASALDO_H
#define NAYTASALDO_H

#include <QDialog>

namespace Ui {
class naytasaldo;
}

class naytasaldo : public QDialog
{
    Q_OBJECT

public:
    explicit naytasaldo(QWidget *parent = nullptr);
    ~naytasaldo();

private slots:
    void on_pushButton_clicked();

    void on_palaasaldosta_clicked();

private:
    Ui::naytasaldo *ui;
};

#endif // NAYTASALDO_H

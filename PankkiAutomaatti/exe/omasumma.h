#ifndef OMASUMMA_H
#define OMASUMMA_H

#include <QDialog>

namespace Ui {
class omasumma;
}

class omasumma : public QDialog
{
    Q_OBJECT

public:
    explicit omasumma(QWidget *parent = nullptr);
    ~omasumma();

private slots:
    void on_pushButton_clicked();

private:
    Ui::omasumma *ui;
};

#endif // OMASUMMA_H

#ifndef KIRJAUDUSISAAN_H
#define KIRJAUDUSISAAN_H

#include <QDialog>
#include "pankkimenu.h"
namespace Ui {
class kirjaudusisaan;
}

class kirjaudusisaan : public QDialog
{
    Q_OBJECT

public:
    explicit kirjaudusisaan(QWidget *parent = nullptr);
    ~kirjaudusisaan();

private slots:
    void on_palaaalkuikkunaan_clicked();

    void on_kirjaudu_clicked();

private:
    Ui::kirjaudusisaan *ui;
    pankkimenu * pPankkimenu;
};

#endif // KIRJAUDUSISAAN_H

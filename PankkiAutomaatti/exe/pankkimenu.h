#ifndef PANKKIMENU_H
#define PANKKIMENU_H

#include <QDialog>
#include "nostarahaa.h"

namespace Ui {
class pankkimenu;
}

class pankkimenu : public QDialog
{
    Q_OBJECT

public:
    explicit pankkimenu(QWidget *parent = nullptr);
    ~pankkimenu();

private slots:
    void on_pushButton_3_clicked();

    void on_nosta_clicked();

private:
    Ui::pankkimenu *ui;
    nostarahaa * pnostarahaa;
};

#endif // PANKKIMENU_H

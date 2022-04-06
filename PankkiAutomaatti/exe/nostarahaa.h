#ifndef NOSTARAHAA_H
#define NOSTARAHAA_H

#include <QDialog>
#include "omasumma.h"
namespace Ui {
class nostarahaa;
}

class nostarahaa : public QDialog
{
    Q_OBJECT

public:
    explicit nostarahaa(QWidget *parent = nullptr);
    ~nostarahaa();

private slots:
    void on_pushButton_7_clicked();

    void on_oma_clicked();

private:
    Ui::nostarahaa *ui;
    omasumma * pomasumma;
};

#endif // NOSTARAHAA_H

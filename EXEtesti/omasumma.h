#ifndef OMASUMMA_H
#define OMASUMMA_H

#include <QDialog>

namespace Ui {
class OmaSumma;
}

class OmaSumma : public QDialog
{
    Q_OBJECT

public:
    explicit OmaSumma(QWidget *parent = nullptr);
    ~OmaSumma();

private slots:
    void on_btnOK_clicked();

private:
    Ui::OmaSumma *ui;
};

#endif // OMASUMMA_H

#ifndef ERRORSIVU_H
#define ERRORSIVU_H

#include <QDialog>

namespace Ui {
class errorsivu;
}

class errorsivu : public QDialog
{
    Q_OBJECT

public:
    explicit errorsivu(QWidget *parent = nullptr);
    ~errorsivu();
    Ui::errorsivu *ui;

private slots:
    void on_OKnappi_clicked();

private:
};

#endif // ERRORSIVU_H

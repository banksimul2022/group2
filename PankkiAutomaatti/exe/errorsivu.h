#ifndef ERRORSIVU_H
#define ERRORSIVU_H

#include <QDialog>
#include <QTimer>

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
    void timerSlot();

private:
    QTimer *pQTimer;
};

#endif // ERRORSIVU_H

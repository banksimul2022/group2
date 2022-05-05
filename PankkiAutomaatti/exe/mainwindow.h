#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pankkimenu.h"
#include "dllpincode.h"
#include "dllrestapi.h"
#include <QTimer>
#include "dllserialport.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void trueFalse();
    void getCardNumber(QString);

private:
    Ui::MainWindow *ui;

    pankkimenu * pPankkimenu;
    DLLPinCode * pDLLPinCode;
    DLLRestAPI * pDLLRestAPI;
    DLLSerialPort * pDLLSerialPort;
    QString kortnro = "";

signals:
    void sendCardSerialNumberAPI(QString);
};
#endif // MAINWINDOW_H

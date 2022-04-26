#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dllrestapi.h"
#include "dllpincode.h"
#include "valikko.h"
#include "asiakas.h"
#include <QString>
#include "singleton.h"
#include "login.h"

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
    void on_pushButton_clicked();
    void pinkoodi(QString);
    void trueFalse(QString);

private:
    QString kortnro = "1111111111";
    Ui::MainWindow *ui;
    QString pincode;

    DLLPinCode *objectDLLPinCode;
    DLLRestAPI *objectRestAPI;
    Valikko *objectValikko;
    Login *objectLogin;

};
#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pDLLPinCode = new DLLPinCode;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pDLLPinCode;
    pDLLPinCode = nullptr;
}


void MainWindow::on_pushButton_clicked()
{
    int a = DLLPinCode().getTries();
    QString s = QString::number(a);
    ui->label_3->setText(s);
}


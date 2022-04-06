#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pKirjaudusisaan = new kirjaudusisaan;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_kirjaudusisaan_clicked()
{
    pKirjaudusisaan -> exec();
}


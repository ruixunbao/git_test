#include "mainwindow.h"
#include "ui_mainwindow.h"
// git test aaaaaaaaa
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

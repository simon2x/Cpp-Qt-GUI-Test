#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <stdlib.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    printf("yoyoyo");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

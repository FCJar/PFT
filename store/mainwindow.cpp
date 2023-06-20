#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_viewCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // ui is the whole thing, so in the ui we're seaching for the stackedWidget and change the name of page
}


void MainWindow::on_pushButtonBackToSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonPay_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButtonBackToCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButtonConfirm_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonBackToCart_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonCoke_clicked()
{

}


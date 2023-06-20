#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./atendente.h"
#include <vector>
#include <string>
#include <QString>
#include <fstream>

class itemPrice {
    public:
        std::string name;
        float price;
};

// globals

std::vector<itemPrice> itemVector;
float total = 0;

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

// Navigation Buttons

void MainWindow::on_viewCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // ui is the whole thing, so in the ui we're seaching for the stackedWidget and change the name of page

    std::string str;

    for(int i = 0; i < itemVector.size(); i++) {
        str = itemVector[i].name + "\t\t" + std::to_string(itemVector[i].price);
        ui->itemsInCartList->addItem(str.c_str());
        total += itemVector[i].price;
    }

    str = std::to_string(total);

    ui->totalPrice->setText(str.c_str());
}


void MainWindow::on_pushButtonBackToSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_pushButtonPay_clicked()
{
    std::string str = std::to_string(total);
    ui->totalPriceValue->setText(str.c_str());
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButtonBackToCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


class receiptInfo {
    public:
        int receiptNumber;
        QString customerName, cardNum; // works well with the textbox
};



void MainWindow::on_pushButtonConfirm_clicked()
{
    std::ofstream outputFile;
    receiptInfo ri;
    ri.receiptNumber = rand()%(1000000000 - 1000000 + 1) + 1000000; // inteiro entre 1 milhao e 1 bilhao
    ri.customerName = ui->textEditName->toPlainText();
    ri.cardNum = ui->textEditCardNumber->toPlainText();

    outputFile.open("SalesData.txt", std::ios::app);

    if(outputFile)
    {
        outputFile << "Receipt Number: " << ri.receiptNumber << "\n";
        outputFile << "Customer Name: " << ri.customerName.toStdString() << "\n";
        outputFile << "Card Information: " << ri.cardNum.toStdString() << "\n";
        outputFile << "---------------------------------------------\n";
        outputFile << "Items \t\t Price\n";
        for(int i = 0; i < itemVector.size(); i ++) {
            outputFile << itemVector[i].name << "\t\t" << itemVector[i].price << "\n";
        }

        outputFile << "Total Value: \t\t" << total << "\n";
        outputFile << "---------------------------------------------\n";

    }


    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonBackToCart_2_clicked()
{
    ui->itemsInCartList->clear();
    ui->textEditCardNumber->clear();
    ui->textEditName->clear();
    itemVector.clear();
    total = 0;
    ui->stackedWidget->setCurrentIndex(0);
}

// Cart Buttons

void MainWindow::on_pushButtonCoke_clicked()
{
    itemPrice item;
    item.name = "Coke";
    item.price = 6;

    itemVector.push_back(item);
}


void MainWindow::on_pushButtonPepsi_clicked()
{
    itemPrice item;
    item.name = "Pepsi";
    item.price = 4;

    itemVector.push_back(item);
}


void MainWindow::on_pushButtonSprite_clicked()
{
    itemPrice item;
    item.name = "Sprite";
    item.price = 3.5;

    itemVector.push_back(item);
}


void MainWindow::on_pushButtonFanta_clicked()
{
    itemPrice item;
    item.name = "Fanta";
    item.price = 4.75;

    itemVector.push_back(item);
}


void MainWindow::on_totalPrice_linkActivated(const QString &link)
{

}


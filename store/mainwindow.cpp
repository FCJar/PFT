#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "./atendente.h"
#include "./caixa.h"
#include "./comanda.h"
#include "./estoque.h"
#include "./funcionario.h"
#include "./gerente.h"
#include "./produto.h"
#include <vector>
#include <string>
#include <QString>
#include <fstream>
#include <iostream>

/* class itemPrice {
    public:
        std::string name;
        float price;
}; */

// globals

int quantidadeCoca = 0;
// std::vector<itemPrice> itemVector;
std::vector<Produto> produtoVector;
float total = 0;

std::vector<QString> nomesDisponiveis = {"Lucas", "Maria", "José", "Martin", "Felipe"};
std::vector<QString> apelidosDisponiveis = {"Gente Fina", "Zezin", "Bacana", "Irmão", "Fii"};

// aten.setNome(aten.sortearNomeAleatorio());

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

    ui->stackedWidget->setCurrentIndex(2); // ui is the whole thing, so in the ui we're seaching for the stackedWidget and change the name of page

    std::string str;

    /* for(int i = 0; i < itemVector.size(); i++) {
        str = itemVector[i].name + "\t\t" + std::to_string(itemVector[i].price);
        ui->itemsInCartList->addItem(str.c_str());
        total += itemVector[i].price;
    } */

    for(int i = 0; i < produtoVector.size(); i++) {
        str = produtoVector[i].getNome() + "\t\t" + std::to_string(produtoVector[i].getPreco());
        ui->itemsInCartList->addItem(str.c_str());
        total += produtoVector[i].getPreco();
    }

    str = std::to_string(total);

    ui->totalPrice->setText(str.c_str());
}


void MainWindow::on_pushButtonBackToSelection_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButtonPay_clicked()
{
    std::string str = std::to_string(total);
    ui->totalPriceValue->setText(str.c_str());
    ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButtonBackToCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


class receiptInfo {
    public:
        int receiptNumber;
        QString customerName, cardNum; // works well with the textbox
};

void MainWindow::on_pushButtonConfirm_clicked()
{
    std::ofstream outputFile; // criamos um arquivo de saida
    // receiptInfo ri;
    // ri.receiptNumber = rand()%(1000000000 - 1000000 + 1) + 1000000; // inteiro entre 1 milhao e 1 bilhao
    // ri.customerName = ui->textEditName->toPlainText();
    // ri.cardNum = ui->textEditCardNumber->toPlainText();

    Comanda comand;
    comand.setId();
    comand.setIdAtendente();
    comand.setFormaPaga("Cartao");
    comand.setNomeCliente(ui->textEditName->toPlainText());
    comand.setNumeroCartao(ui->textEditCardNumber->toPlainText());
    comand.setTotal(total);

    outputFile.open("SalesData.txt", std::ios::app);

    if(outputFile)
    {
        // outputFile << "Receipt Number: " << ri.receiptNumber << "\n";
        outputFile << "Receipt Number: " << comand.getId() << "\n";
        outputFile << "Atendente Number: " << comand.getIdAtendente() << "\n";
        // outputFile << "Customer Name: " << ri.customerName.toStdString() << "\n";
        outputFile << "Customer Name: " << comand.getNomeCliente().toStdString() << "\n";
        // outputFile << "Card Information: " << ri.cardNum.toStdString() << "\n";
        outputFile << "Forma Pagamento: " << comand.getFormaPagamento() << "\n";
        outputFile << "Card Information: " << comand.getNumeroCartao().toStdString() << "\n";
        outputFile << "---------------------------------------------\n";
        outputFile << "Items \t\t Price\n";
        /*for(int i = 0; i < itemVector.size(); i ++) {
            outputFile << itemVector[i].name << "\t\t" << itemVector[i].price << "\n";
        }*/

        for(int i = 0; i < produtoVector.size(); i ++) {
            outputFile << produtoVector[i].getNome() << "\t\t" << produtoVector[i].getPreco() << "\n";
        }

        outputFile << "Total Value: \t\t" << comand.getPrecoTotal() << "\n";
        outputFile << "---------------------------------------------\n";

    }


    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_pushButtonBackToCart_2_clicked()
{
    ui->itemsInCartList->clear();
    ui->textEditCardNumber->clear();
    ui->textEditName->clear();
    // itemVector.clear();
    produtoVector.clear();
    total = 0;
    ui->stackedWidget->setCurrentIndex(0);

    /* */
}

// Cart Buttons

void MainWindow::on_pushButtonCoke_clicked()
{
    // itemPrice item;
    Produto Item("Coca Cola", "Refrigerante", 6.0f, 2.0f);
    quantidadeCoca += 1;
    ui->quantidade->setText(std::to_string(quantidadeCoca).c_str());

    /* item.name = "Coke";
    item.price = 6;

    itemVector.push_back(item); */
    produtoVector.push_back(Item);

}


void MainWindow::on_pushButtonPepsi_clicked()
{
    // itemPrice item;
    Produto Item("Pepsi", "Refrigerante", 4.0f, 1.0f);

    /* item.name = "Pepsi";
    item.price = 4;

    itemVector.push_back(item); */
    produtoVector.push_back(Item);
}


void MainWindow::on_pushButtonSprite_clicked()
{
    // itemPrice item;
    Produto Item("Sprite", "Refrigerante", 3.5f, 1.0f);

    /* item.name = "Sprite";
    item.price = 3.5;

    itemVector.push_back(item); */
    produtoVector.push_back(Item);
}


void MainWindow::on_pushButtonFanta_clicked()
{
    // itemPrice item;
    Produto Item("Fanta", "Refrigerante", 4.75f, 0.75f);

    /* item.name = "Fanta";
    item.price = 4.75;

    itemVector.push_back(item); */
    produtoVector.push_back(Item);
}


void MainWindow::on_totalPrice_linkActivated(const QString &link)
{

}


void MainWindow::on_pushButtonGoToCart_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);

    std::ofstream outputFile;

    /* outputFile.open("SalesData.txt", std::ios::trunc);
    if(outputFile) {
        outputFile.close();
    } else {
        std::cout << "Error opening the file" << "\n";
    } */

    // Criando o nome da atendente
    Atendente atendente;
    atendente.setNome(atendente.sortearNomeAleatorio(nomesDisponiveis)); // defino um nome para a/o atendente
    atendente.setApelido(atendente.sortearApelidoAleatorio(apelidosDisponiveis)); // defino um apelido para a/o atendente
    atendente.setIdade(rand()%(15 + 1) + 15);
    atendente.setTempoServico(rand()%(5 + 1) + 5);
    ui->nomeAtendente->setText(atendente.getNome()); // setando o textBox de label 'nomeAtendente' para atendente.getNome()
    ui->apelidoAtendente->setText(atendente.getApelido());
    ui->idadeAtendente->setText(std::to_string(atendente.getIdade()).c_str());
    ui->tempoServicoAtendente->setText(std::to_string(atendente.getTempoServico()).c_str());

    outputFile.open("SalesData.txt", std::ios::app);

    if(outputFile)
    {
        outputFile << "Nome do Atendente: " << atendente.getNome().toStdString() << "\n";
        outputFile << "Apelido do Atendente: " << atendente.getApelido().toStdString() << "\n";
        outputFile << "Idade do Atendente: " << atendente.getIdade() << "\n";
        outputFile << "Tempo de Serviço do Atendente: " << atendente.getTempoServico() << "\n";
    }

}


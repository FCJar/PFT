/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *aCardapio;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QPushButton *pushButtonFanta;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *tittle;
    QPushButton *pushButtonPepsi;
    QLabel *label_5;
    QLabel *label;
    QPushButton *pushButtonSprite;
    QLabel *label_6;
    QPushButton *viewCart;
    QPushButton *pushButtonCoke;
    QWidget *bCarrinho;
    QLabel *tittle_2;
    QListWidget *itemsInCartList;
    QLabel *totalPriceInCart;
    QPushButton *pushButtonPay;
    QPushButton *pushButtonBackToSelection;
    QLabel *totalPrice;
    QWidget *cPagamento;
    QLabel *tittle_3;
    QPushButton *pushButtonConfirm;
    QLabel *totalPricePay;
    QLabel *totalPriceValue;
    QLabel *totalPricePay_2;
    QLabel *totalPriceValue_2;
    QLabel *totalPricePay_3;
    QLabel *totalPriceValue_3;
    QTextEdit *textEditCardNumber;
    QTextEdit *textEditName;
    QPushButton *pushButtonBackToCart;
    QWidget *dTelaFinal;
    QLabel *tittle_4;
    QPushButton *pushButtonBackToCart_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 591));
        aCardapio = new QWidget();
        aCardapio->setObjectName("aCardapio");
        label_3 = new QLabel(aCardapio);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 260, 201, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roman")});
        font.setPointSize(18);
        label_3->setFont(font);
        label_7 = new QLabel(aCardapio);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(470, 260, 201, 81));
        label_7->setFont(font);
        label_4 = new QLabel(aCardapio);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 340, 201, 81));
        label_4->setFont(font);
        pushButtonFanta = new QPushButton(aCardapio);
        pushButtonFanta->setObjectName("pushButtonFanta");
        pushButtonFanta->setGeometry(QRect(640, 370, 101, 21));
        label_8 = new QLabel(aCardapio);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(470, 340, 201, 81));
        label_8->setFont(font);
        label_2 = new QLabel(aCardapio);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 180, 201, 81));
        label_2->setFont(font);
        tittle = new QLabel(aCardapio);
        tittle->setObjectName("tittle");
        tittle->setGeometry(QRect(300, 30, 201, 61));
        QFont font1;
        font1.setPointSize(36);
        tittle->setFont(font1);
        pushButtonPepsi = new QPushButton(aCardapio);
        pushButtonPepsi->setObjectName("pushButtonPepsi");
        pushButtonPepsi->setGeometry(QRect(640, 230, 101, 21));
        label_5 = new QLabel(aCardapio);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(470, 120, 201, 81));
        label_5->setFont(font);
        label = new QLabel(aCardapio);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 110, 201, 81));
        label->setFont(font);
        pushButtonSprite = new QPushButton(aCardapio);
        pushButtonSprite->setObjectName("pushButtonSprite");
        pushButtonSprite->setGeometry(QRect(640, 300, 101, 21));
        label_6 = new QLabel(aCardapio);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(470, 190, 201, 81));
        label_6->setFont(font);
        viewCart = new QPushButton(aCardapio);
        viewCart->setObjectName("viewCart");
        viewCart->setGeometry(QRect(300, 440, 171, 61));
        QFont font2;
        font2.setPointSize(18);
        viewCart->setFont(font2);
        pushButtonCoke = new QPushButton(aCardapio);
        pushButtonCoke->setObjectName("pushButtonCoke");
        pushButtonCoke->setGeometry(QRect(640, 150, 101, 21));
        stackedWidget->addWidget(aCardapio);
        bCarrinho = new QWidget();
        bCarrinho->setObjectName("bCarrinho");
        tittle_2 = new QLabel(bCarrinho);
        tittle_2->setObjectName("tittle_2");
        tittle_2->setGeometry(QRect(230, 20, 361, 61));
        tittle_2->setFont(font1);
        itemsInCartList = new QListWidget(bCarrinho);
        itemsInCartList->setObjectName("itemsInCartList");
        itemsInCartList->setGeometry(QRect(225, 100, 371, 291));
        totalPriceInCart = new QLabel(bCarrinho);
        totalPriceInCart->setObjectName("totalPriceInCart");
        totalPriceInCart->setGeometry(QRect(120, 400, 141, 81));
        totalPriceInCart->setFont(font);
        pushButtonPay = new QPushButton(bCarrinho);
        pushButtonPay->setObjectName("pushButtonPay");
        pushButtonPay->setGeometry(QRect(430, 410, 171, 61));
        pushButtonPay->setFont(font2);
        pushButtonBackToSelection = new QPushButton(bCarrinho);
        pushButtonBackToSelection->setObjectName("pushButtonBackToSelection");
        pushButtonBackToSelection->setGeometry(QRect(430, 480, 171, 61));
        pushButtonBackToSelection->setFont(font2);
        totalPrice = new QLabel(bCarrinho);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setGeometry(QRect(230, 420, 191, 51));
        totalPrice->setFont(font);
        stackedWidget->addWidget(bCarrinho);
        cPagamento = new QWidget();
        cPagamento->setObjectName("cPagamento");
        tittle_3 = new QLabel(cPagamento);
        tittle_3->setObjectName("tittle_3");
        tittle_3->setGeometry(QRect(280, 30, 241, 61));
        tittle_3->setFont(font1);
        pushButtonConfirm = new QPushButton(cPagamento);
        pushButtonConfirm->setObjectName("pushButtonConfirm");
        pushButtonConfirm->setGeometry(QRect(320, 410, 171, 61));
        pushButtonConfirm->setFont(font2);
        totalPricePay = new QLabel(cPagamento);
        totalPricePay->setObjectName("totalPricePay");
        totalPricePay->setGeometry(QRect(160, 110, 151, 81));
        totalPricePay->setFont(font);
        totalPriceValue = new QLabel(cPagamento);
        totalPriceValue->setObjectName("totalPriceValue");
        totalPriceValue->setGeometry(QRect(340, 120, 351, 61));
        totalPriceValue->setFont(font);
        totalPricePay_2 = new QLabel(cPagamento);
        totalPricePay_2->setObjectName("totalPricePay_2");
        totalPricePay_2->setGeometry(QRect(160, 200, 151, 81));
        totalPricePay_2->setFont(font);
        totalPriceValue_2 = new QLabel(cPagamento);
        totalPriceValue_2->setObjectName("totalPriceValue_2");
        totalPriceValue_2->setGeometry(QRect(530, 210, 91, 61));
        totalPriceValue_2->setFont(font);
        totalPricePay_3 = new QLabel(cPagamento);
        totalPricePay_3->setObjectName("totalPricePay_3");
        totalPricePay_3->setGeometry(QRect(160, 290, 251, 81));
        totalPricePay_3->setFont(font);
        totalPriceValue_3 = new QLabel(cPagamento);
        totalPriceValue_3->setObjectName("totalPriceValue_3");
        totalPriceValue_3->setGeometry(QRect(520, 300, 91, 61));
        totalPriceValue_3->setFont(font);
        textEditCardNumber = new QTextEdit(cPagamento);
        textEditCardNumber->setObjectName("textEditCardNumber");
        textEditCardNumber->setGeometry(QRect(390, 320, 221, 41));
        textEditName = new QTextEdit(cPagamento);
        textEditName->setObjectName("textEditName");
        textEditName->setGeometry(QRect(260, 220, 221, 41));
        pushButtonBackToCart = new QPushButton(cPagamento);
        pushButtonBackToCart->setObjectName("pushButtonBackToCart");
        pushButtonBackToCart->setGeometry(QRect(320, 480, 171, 61));
        pushButtonBackToCart->setFont(font2);
        stackedWidget->addWidget(cPagamento);
        dTelaFinal = new QWidget();
        dTelaFinal->setObjectName("dTelaFinal");
        tittle_4 = new QLabel(dTelaFinal);
        tittle_4->setObjectName("tittle_4");
        tittle_4->setGeometry(QRect(70, 130, 691, 61));
        tittle_4->setFont(font1);
        pushButtonBackToCart_2 = new QPushButton(dTelaFinal);
        pushButtonBackToCart_2->setObjectName("pushButtonBackToCart_2");
        pushButtonBackToCart_2->setGeometry(QRect(310, 270, 171, 61));
        pushButtonBackToCart_2->setFont(font2);
        stackedWidget->addWidget(dTelaFinal);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sprite", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "R$ 3,50", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Fanta", nullptr));
        pushButtonFanta->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "R$ 4,75", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Pepsi", nullptr));
        tittle->setText(QCoreApplication::translate("MainWindow", "My Store", nullptr));
        pushButtonPepsi->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "R$ 6,00", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Coca - Cola", nullptr));
        pushButtonSprite->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "R$ 4,00", nullptr));
        viewCart->setText(QCoreApplication::translate("MainWindow", "Carrinho", nullptr));
        pushButtonCoke->setText(QCoreApplication::translate("MainWindow", "Adicionar", nullptr));
        tittle_2->setText(QCoreApplication::translate("MainWindow", "Itens no Carrinho", nullptr));
        totalPriceInCart->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        pushButtonPay->setText(QCoreApplication::translate("MainWindow", "Pagar", nullptr));
        pushButtonBackToSelection->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        totalPrice->setText(QString());
        tittle_3->setText(QCoreApplication::translate("MainWindow", "Pagamento", nullptr));
        pushButtonConfirm->setText(QCoreApplication::translate("MainWindow", "Confirmar", nullptr));
        totalPricePay->setText(QCoreApplication::translate("MainWindow", "Total:", nullptr));
        totalPriceValue->setText(QString());
        totalPricePay_2->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        totalPriceValue_2->setText(QString());
        totalPricePay_3->setText(QCoreApplication::translate("MainWindow", "Card Number:", nullptr));
        totalPriceValue_3->setText(QString());
        pushButtonBackToCart->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        tittle_4->setText(QCoreApplication::translate("MainWindow", "Obrigado por comprar conosco!", nullptr));
        pushButtonBackToCart_2->setText(QCoreApplication::translate("MainWindow", "Novo Pedido", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

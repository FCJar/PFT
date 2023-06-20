#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_viewCart_clicked();

    void on_pushButtonBackToSelection_clicked();

    void on_pushButtonPay_clicked();

    void on_pushButtonBackToCart_clicked();

    void on_pushButtonConfirm_clicked();

    void on_pushButtonBackToCart_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

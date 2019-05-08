#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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

//--点击数字按键的处理
void MainWindow::numberKey(int a)
{
    if(operators == 0){//输入的是第一个操作数
        num1 = num1*10 + a;//按a后x变成10x+a
        QString str = QString::number(num1);
        ui->screen->setText(str);
    }
    else{
        num2 = num2*10 + a;
        QString str1 = QString::number(num1);
        QString str2 = QString::number(num2);
        ui->screen->setText(str1+op[operators-1]+str2);
    }
}

void MainWindow::on_pushButton0_clicked()
{
    numberKey(0);
}

void MainWindow::on_pushButton1_clicked()
{
    numberKey(1);
}

void MainWindow::on_pushButton2_clicked()
{
    numberKey(2);
}

void MainWindow::on_pushButton3_clicked()
{
    numberKey(3);
}

void MainWindow::on_pushButton4_clicked()
{
    numberKey(4);
}

void MainWindow::on_pushButton5_clicked()
{
    numberKey(5);
}

void MainWindow::on_pushButton6_clicked()
{
    numberKey(6);
}

void MainWindow::on_pushButton7_clicked()
{
    numberKey(7);
}

void MainWindow::on_pushButton8_clicked()
{
    numberKey(8);
}

void MainWindow::on_pushButton9_clicked()
{
    numberKey(9);
}

//--点击四则运算符按键的处理
void MainWindow::operatorKey(int a)
{
    operators=a;
    QString str1 = QString::number(num1);
    ui->screen->setText(str1+op[operators-1]);

}
void MainWindow::on_pushButton_add_clicked()
{
    operatorKey(1);
}

void MainWindow::on_pushButton_sub_clicked()
{
    operatorKey(2);
}

void MainWindow::on_pushButton_mul_clicked()
{
    operatorKey(3);
}

void MainWindow::on_pushButton_div_clicked()
{
    operatorKey(4);
}

//--点击等号的处理
void MainWindow::on_pushButton_equ_clicked()
{
    switch(operators){
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:
        result = ((double)num1 / (double)num2);
        break;
    default:
        result = 0;
        break;
    }

    QString str1 = QString::number(num1);
    QString str2 = QString::number(num2);
    QString str3 = QString::number(result);
    ui->screen->setText(str1+op[operators-1]+str2+'='+str3);

    num1 = 0;
    num2 = 0;
    operators = 0;
}

//--点击AC的处理
void MainWindow::on_pushButton_ac_clicked()
{
    num1 = 0;
    num2 = 0;
    operators = 0;
    ui->screen->setText("0");
}

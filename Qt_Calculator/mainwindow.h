#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    //触发响应函数的方法:on_对象名_clicked()
    void on_pushButton0_clicked();
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();

    void on_pushButton_add_clicked();
    void on_pushButton_sub_clicked();
    void on_pushButton_mul_clicked();
    void on_pushButton_div_clicked();
    void on_pushButton_equ_clicked();
    void on_pushButton_ac_clicked();

private:
    void numberKey(int);
    void operatorKey(int);
    Ui::MainWindow *ui;
    int num1=0;
    int num2;
    double result;
    int operators=0;
    QString op[4]={"+","-","×","÷"};
};

#endif // MAINWINDOW_H

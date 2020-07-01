#ifndef FORGETPASSWORD_H
#define FORGETPASSWORD_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class ForgetPassword;
}

class ForgetPassword : public QMainWindow
{
    Q_OBJECT

public:
    explicit ForgetPassword(QWidget *parent = nullptr);
    ~ForgetPassword();

signals:
    //发出返回的信号
    void ForgetPasswordBack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ForgetPassword *ui;
};

#endif // FORGETPASSWORD_H

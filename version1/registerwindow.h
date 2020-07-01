#ifndef REGISTERWINDOW_H
#define REGISTERWINDOW_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class RegisterWindow;
}

class RegisterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegisterWindow(QWidget *parent = nullptr);
    ~RegisterWindow();


signals:
    //发出返回的信号
    void RegisterWindowBack();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RegisterWindow *ui;
};

#endif // REGISTERWINDOW_H

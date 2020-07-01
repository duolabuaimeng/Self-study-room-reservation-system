#ifndef PIMANAGEMENT_H
#define PIMANAGEMENT_H

#include "main.h"
#include <QMainWindow>
#include <QPushButton>


namespace Ui {
class PIManagement;
}

class PIManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit PIManagement(QWidget *parent = nullptr);
    ~PIManagement();

    //个人信息显示
    void PIshow();

signals:
    //发出返回的信号
    void PIManagementBack();

private slots:
    void on_pushButton_clicked();//修改
    void on_pushButton_2_clicked();//返回
    void on_pushButton_3_clicked();//保存
    void on_pushButton_4_clicked();//取消

private:
    Ui::PIManagement *ui;
};

#endif // PIMANAGEMENT_H

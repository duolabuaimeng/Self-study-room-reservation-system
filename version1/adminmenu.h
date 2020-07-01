#ifndef ADMINMENU_H
#define ADMINMENU_H

#include"main.h"
#include <QMainWindow>
#include <pimanagement.h>
#include <bookinformation.h>
#include <backup.h>
#include <checkborrowbooks.h>
#include <fines.h>
#include <countlist.h>
namespace Ui {
class AdminMenu;
}

class AdminMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminMenu(QWidget *parent = nullptr);
    ~AdminMenu();

    //内含窗口1 个人信息管理窗口
    PIManagement* pimanagement;
    BookInformation* bookinformation;
    Backup* backup;
    CheckBorrowBooks* checkborrowbooks;
    Fines* fines;
    CountList* countlist;
signals:
    //发出返回的信号
    void AdminMenuBack();

private slots:
    void on_pushButton_clicked();//
    void on_pushButton_3_clicked();//个人信息管理
    void on_pushButton_4_clicked();//图书管理
    void on_pushButton_8_clicked();//备份与还原

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::AdminMenu *ui;
};

#endif // ADMINMENU_H

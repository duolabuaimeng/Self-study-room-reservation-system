#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include "main.h"
#include "registerwindow.h"
#include "forgetpassword.h"
#include "studentmenu.h"
#include "teachermenu.h"
#include "adminmenu.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class LoginWindow; }
QT_END_NAMESPACE

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();



    //身份代号 1为学生 2为教师 3为管理员
    int identityCode;

    //内含窗口1 注册窗口
    RegisterWindow* registerWindow;
    //内含窗口2 忘记密码窗口
    ForgetPassword* forgetPassword;
    //内含窗口3 学生菜单
    StudentMenu* studentMenu;
    //内含窗口4 教师菜单
    TeacherMenu* teacherMenu;
    //内含窗口5 管理员菜单
    AdminMenu* adminMenu;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_student_clicked(bool checked);

    void on_radioButton_admin_clicked(bool checked);

    void on_radioButton_teacher_clicked(bool checked);

private:
    Ui::LoginWindow *ui;


};
#endif // LOGINWINDOW_H

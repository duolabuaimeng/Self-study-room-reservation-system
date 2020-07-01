#include "loginwindow.h"
#include "ui_loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

    //内含窗口1 注册窗口
    registerWindow=new RegisterWindow();
    //内含窗口2 忘记密码窗口
    forgetPassword=new ForgetPassword();
    //内含窗口3 学生菜单
    studentMenu=new StudentMenu();
    //内含窗口4 管理员菜单
    adminMenu=new AdminMenu();


    //2.设置默认身份代号
    identityCode=1;

    //3.监听注册窗口的返回按钮
    connect(registerWindow,&RegisterWindow::RegisterWindowBack,[=](){
        registerWindow->hide();
        this->showMaximized();
    });

    //4.监听忘记密码窗口的返回按钮
    connect(forgetPassword,&ForgetPassword::ForgetPasswordBack,[=](){
        forgetPassword->hide();
        this->showMaximized();
    });

    //5.监听学生菜单的注销按钮
    connect(studentMenu,&StudentMenu::ReaderMenuBack,[=](){
        studentMenu->hide();
        this->showMaximized();
    });

    //6.监听管理员菜单的注销按钮
    connect(adminMenu,&AdminMenu::AdminMenuBack,[=](){
        adminMenu->hide();
        this->showMaximized();
    });
}

LoginWindow::~LoginWindow()
{
    delete ui;
}


//槽函数1：按下登录按钮
void LoginWindow::on_pushButton_clicked()
{
    //1.连接数据库
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(IP);
    db.setDatabaseName(DATABASENAME);       //这里输入你的数据库名
    db.setUserName(USERNAME);
    db.setPassword(PASSWORD);   //这里输入你的密码
    if(!db.open())
    {
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    //保存一下用户输入的用户名和密码
    QString inputID,inputPassword;
    inputID=ui->lineEdit->text();
    inputPassword=ui->lineEdit_2->text();


    QSqlQuery query(db);

    //如果是借阅人
    if(identityCode==1){
        //设置一个标志位看是不是登录成功了
        int flag=0;

        query.exec("select * from student");
        while(query.next()){
             if(query.value("student_id").toString()==inputID && query.value("student_password").toString()==inputPassword){
                 reader_id_global=inputID;
                 //qDebug()<<reader_id_global<<" "<<inputID;
                 this->hide();
                 this->studentMenu->showMaximized();
                 //QMessageBox::information(this,"登录成功！","尊敬的借阅人，欢迎您",QMessageBox::Ok);
                 flag=1;
                 break;
             };
        }

        if(flag==0){
            QMessageBox::information(this,"登录失败！","请检查一下您的用户名和密码",QMessageBox::Ok);
        }
    }
    else{
        //设置一个标志位看是不是登录成功了
        int flag=0;

        query.exec("select * from admin");
        while(query.next()){
             if(query.value(0).toString()==inputID && query.value(1).toString()==inputPassword){
                 reader_id_global=inputID;
                 this->hide();
                 this->adminMenu->showMaximized();
                 //QMessageBox::information(this,"登录成功！","尊敬的管理员，欢迎您",QMessageBox::Ok);
                 flag=1;
                 break;
             };
        }

        if(flag==0){
            QMessageBox::information(this,"登录失败！","请检查一下您的用户名和密码",QMessageBox::Ok);
        }
    }
}

//槽函数2：按下注册按钮
void LoginWindow::on_pushButton_2_clicked()
{
    this->hide();
    registerWindow->showMaximized();
}

//槽函数3：按下忘记密码按钮
void LoginWindow::on_pushButton_3_clicked()
{
    this->hide();
    forgetPassword->showMaximized();
}

//槽函数4：学生选项被选中

void LoginWindow::on_radioButton_student_clicked(bool checked)
{
    if(checked){
        identityCode=1;
    }
}
//槽函数5：教师选项被选中
void LoginWindow::on_radioButton_admin_clicked(bool checked)
{
    if(checked){
        identityCode=2;
    }
}
//槽函数6：管理员选项被选中
void LoginWindow::on_radioButton_teacher_clicked(bool checked)
{
    if(checked){
        identityCode=3;
    }
}

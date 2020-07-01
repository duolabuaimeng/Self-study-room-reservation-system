#ifndef TEACHERMENU_H
#define TEACHERENU_H

#include"main.h"
#include "returnseat.h"
#include"bookseat.h"
#include"readerinfo.h"
#include"renew.h"
#include"readerpenalty.h"
#include <QMainWindow>

namespace Ui {
class TeacherMenu;
}

class TeacherMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit TeacherMenu(QWidget *parent = nullptr);
    ~TeacherMenu();


    //功能1：还书功能
    ReturnSeat* returnSeat;
    //功能2：借书功能
    BookSeat* borrowBooks;
    //功能3：个人信息功能
    ReaderInfo* readerInfo;
    //功能4：罚金功能
    ReaderPenalty* readerPenalty;
    //功能5：续借功能
    Renew* renew;
    void RMShow();
signals:
    //发出返回的信号
    void ReaderMenuBack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::TeacherMenu *ui;
};

#endif // TEACHERMENU_H

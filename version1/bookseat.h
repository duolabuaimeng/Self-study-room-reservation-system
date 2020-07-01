#ifndef BOOKSEAT_H
#define BOOKSEAT_H

#include <main.h>
#include <QMainWindow>
#include <QDateTime>
extern QString isbn_global;
namespace Ui {
class BookSeat;
}

class BookSeat : public QMainWindow
{
    Q_OBJECT

public:
    int start = 1590940800;
    int end = 1593532800;
    explicit BookSeat(QWidget *parent = nullptr);
    ~BookSeat();
    //图书信息显示;
    void Bookshow();
    void Tableshow(QString query);

signals:
    void BorrowBooksBack();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_dateTimeEdit_2_dateTimeChanged(const QDateTime &dateTime);

    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);

private:
    Ui::BookSeat *ui;
};

#endif // BOOKSEAT_H

#ifndef CHECKBORROWBOOKS_H
#define CHECKBORROWBOOKS_H

#include "main.h"
#include <QMainWindow>

#include "bookinformation3.h"

namespace Ui {
class CheckBorrowBooks;
}

class CheckBorrowBooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit CheckBorrowBooks(QWidget *parent = 0);
    ~CheckBorrowBooks();

     bookinformation3 *bookinfo;

signals:
    void CheckBorrowBooksBack();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::CheckBorrowBooks *ui;
    void Tableshow(QString query);


};

#endif // CHECKBORROWBOOKS_H

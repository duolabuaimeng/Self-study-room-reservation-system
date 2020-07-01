#ifndef FINES_H
#define FINES_H

#include <QMainWindow>
#include "main.h"
namespace Ui {
class Fines;
}

class Fines : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fines(QWidget *parent = 0);
    ~Fines();

signals:
    void FinesBack();
private slots:
    void on_deleteBtn_clicked();

    void on_addBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::Fines *ui;
    int locks=0;
};

#endif // FINES_H

#ifndef READERINFO_H
#define READERINFO_H

#include"main.h"
#include <QMainWindow>

namespace Ui {
class ReaderInfo;
}

class ReaderInfo : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReaderInfo(QWidget *parent = nullptr);
    ~ReaderInfo();

    void showInfo();

signals:
    void ReaderInfoBack();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ReaderInfo *ui;
};

#endif // READERINFO_H

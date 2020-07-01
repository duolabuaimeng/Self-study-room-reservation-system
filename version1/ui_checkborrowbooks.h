/********************************************************************************
** Form generated from reading UI file 'checkborrowbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBORROWBOOKS_H
#define UI_CHECKBORROWBOOKS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckBorrowBooks
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *CheckBorrowBooks)
    {
        if (CheckBorrowBooks->objectName().isEmpty())
            CheckBorrowBooks->setObjectName(QString::fromUtf8("CheckBorrowBooks"));
        CheckBorrowBooks->resize(1872, 924);
        CheckBorrowBooks->setStyleSheet(QString::fromUtf8("background-image:url(:/res/girl.jpg);"));
        centralwidget = new QWidget(CheckBorrowBooks);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 20, 81, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0003.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 100, 1501, 831));
        tableView->setStyleSheet(QString::fromUtf8("\n"
"*{\n"
"    background:rgba(255,255,157,0.80);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView::section{\n"
"    background:rgba(255,255,157,0.90);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"QHeaderView{\n"
"	min-height:30px;\n"
"    background:rgba(255,255,157,0.80);\n"
"	font-size:20px;\n"
"	color:black;\n"
"	font-family:Microsoft JhengHei;\n"
"}\n"
"\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1680, 510, 121, 121));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff8c69;\n"
"border-radius:60px;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"border-radius:60px;\n"
"background:#FF6F69;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 20, 481, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:25px;\n"
"}\n"
"\n"
"\n"
"\n"
"QLineEdit::hover\n"
"{\n"
"\n"
"  color:green\n"
"  border-color:rgb(50,480,40);\n"
"  background-color:green;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 20, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(255,255,157,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(30, 30));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1270, 20, 221, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font.setPointSize(16);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background:rgba(0,255,157,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:26px;\n"
"\n"
"}\n"
""));
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(30, 30));
        CheckBorrowBooks->setCentralWidget(centralwidget);

        retranslateUi(CheckBorrowBooks);

        QMetaObject::connectSlotsByName(CheckBorrowBooks);
    } // setupUi

    void retranslateUi(QMainWindow *CheckBorrowBooks)
    {
        CheckBorrowBooks->setWindowTitle(QApplication::translate("CheckBorrowBooks", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_4->setText(QApplication::translate("CheckBorrowBooks", "\350\277\224\345\233\236", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("CheckBorrowBooks", "   \346\220\234\347\264\242", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QApplication::translate("CheckBorrowBooks", "\346\214\211\345\233\276\344\271\246\344\277\241\346\201\257\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckBorrowBooks: public Ui_CheckBorrowBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBORROWBOOKS_H

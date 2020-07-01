/********************************************************************************
** Form generated from reading UI file 'borrowbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BORROWBOOKS_H
#define UI_BORROWBOOKS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BorrowBooks
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *BorrowBooks)
    {
        if (BorrowBooks->objectName().isEmpty())
            BorrowBooks->setObjectName(QString::fromUtf8("BorrowBooks"));
        BorrowBooks->resize(1911, 1006);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0003.png"), QSize(), QIcon::Normal, QIcon::Off);
        BorrowBooks->setWindowIcon(icon);
        BorrowBooks->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-image: url(:/res/LW (2).jpg);\n"
"}"));
        centralwidget = new QWidget(BorrowBooks);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 150, 1501, 831));
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
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(530, 30, 161, 61));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:0px;\n"
"}\n"
"\n"
"\n"
"\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView::item:hover {\n"
"color:black;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(0,0,0,0);\n"
"border-radius:0px;  /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\266\212\350\277\207\346\257\217\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView::item:selected {\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:0px;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 30, 81, 61));
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
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 30, 481, 61));
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
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1580, 590, 291, 71));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:rgba(255,225,26,0.5);\n"
"border-radius:15px;\n"
"color:#000000;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:2px solid #002D40;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1590, 690, 121, 121));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#96CA2D;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#168039;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1740, 690, 121, 121));
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
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(750, 30, 151, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background:rgba(255,255,157,0.70);\n"
"border-radius:15px;\n"
"font-size:30px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#FFE11A;\n"
"border-radius:15px;\n"
"font-size:30px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        BorrowBooks->setCentralWidget(centralwidget);
        lineEdit->raise();
        tableView->raise();
        comboBox->raise();
        pushButton->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();

        retranslateUi(BorrowBooks);

        QMetaObject::connectSlotsByName(BorrowBooks);
    } // setupUi

    void retranslateUi(QMainWindow *BorrowBooks)
    {
        BorrowBooks->setWindowTitle(QApplication::translate("BorrowBooks", "\345\200\237\351\230\205\345\233\276\344\271\246", nullptr));
        comboBox->setItemText(0, QApplication::translate("BorrowBooks", "\344\271\246\345\220\215", nullptr));
        comboBox->setItemText(1, QApplication::translate("BorrowBooks", "\344\275\234\350\200\205\345\220\215", nullptr));
        comboBox->setItemText(2, QApplication::translate("BorrowBooks", "\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(3, QApplication::translate("BorrowBooks", "\345\233\276\344\271\246\345\217\267", nullptr));

        pushButton->setText(QString());
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("BorrowBooks", "   \346\220\234\347\264\242", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("BorrowBooks", "\350\276\223\345\205\245\345\200\237\351\230\205\344\271\246\345\217\267", nullptr));
        pushButton_3->setText(QApplication::translate("BorrowBooks", "\345\200\237\351\230\205", nullptr));
        pushButton_4->setText(QApplication::translate("BorrowBooks", "\350\277\224\345\233\236", nullptr));
        pushButton_5->setText(QApplication::translate("BorrowBooks", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BorrowBooks: public Ui_BorrowBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BORROWBOOKS_H

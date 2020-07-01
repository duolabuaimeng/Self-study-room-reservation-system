/********************************************************************************
** Form generated from reading UI file 'bookinformation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKINFORMATION_H
#define UI_BOOKINFORMATION_H

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

class Ui_BookInformation
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QComboBox *comboBox;
    QLineEdit *lineEdit;

    void setupUi(QMainWindow *BookInformation)
    {
        if (BookInformation->objectName().isEmpty())
            BookInformation->setObjectName(QString::fromUtf8("BookInformation"));
        BookInformation->resize(1642, 1272);
        BookInformation->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW (2).jpg);\n"
"}"));
        centralwidget = new QWidget(BookInformation);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1570, 860, 311, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"background:rgba(237, 255, 255,0.70);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0007 (6).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(50, 50));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1350, 30, 541, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit\n"
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
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1810, 100, 71, 61));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(50, 50));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1685, 100, 71, 61));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(45, 45));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1560, 100, 71, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	font: 25pt \"Arial\";\n"
"\n"
"background:rgba(255,255,157,0.50);\n"
"border-radius:26px;\n"
"}\n"
"QPushButton:hover{\n"
"background:rgba(121,0,255,0.20);\n"
"border-radius:26px;\n"
"\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon3);
        pushButton_5->setIconSize(QSize(50, 50));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 140, 1501, 801));
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
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 40, 81, 61));
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/0003.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
        pushButton->setIconSize(QSize(30, 30));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(760, 40, 151, 61));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(540, 40, 161, 61));
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
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 40, 481, 61));
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
        BookInformation->setCentralWidget(centralwidget);
        lineEdit->raise();
        pushButton_2->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        tableView->raise();
        pushButton->raise();
        pushButton_6->raise();
        comboBox->raise();

        retranslateUi(BookInformation);

        QMetaObject::connectSlotsByName(BookInformation);
    } // setupUi

    void retranslateUi(QMainWindow *BookInformation)
    {
        BookInformation->setWindowTitle(QApplication::translate("BookInformation", "MainWindow", nullptr));
        pushButton_2->setText(QApplication::translate("BookInformation", "  \350\277\224  \345\233\236", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("BookInformation", "      \350\257\267\350\276\223\345\205\245\346\202\250\346\203\263\346\223\215\344\275\234\347\232\204\345\233\276\344\271\246\345\217\267", nullptr));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton->setText(QString());
        pushButton_6->setText(QApplication::translate("BookInformation", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        comboBox->setItemText(0, QApplication::translate("BookInformation", "\344\271\246\345\220\215", nullptr));
        comboBox->setItemText(1, QApplication::translate("BookInformation", "\344\275\234\350\200\205\345\220\215", nullptr));
        comboBox->setItemText(2, QApplication::translate("BookInformation", "\347\261\273\345\210\253", nullptr));
        comboBox->setItemText(3, QApplication::translate("BookInformation", "\345\233\276\344\271\246\345\217\267", nullptr));

        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("BookInformation", "   \346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookInformation: public Ui_BookInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKINFORMATION_H

/********************************************************************************
** Form generated from reading UI file 'bookseat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKSEAT_H
#define UI_BOOKSEAT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookSeat
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
    QDateTimeEdit *dateTimeEdit;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QMainWindow *BookSeat)
    {
        if (BookSeat->objectName().isEmpty())
            BookSeat->setObjectName(QString::fromUtf8("BookSeat"));
        BookSeat->resize(1911, 1006);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/0003.png"), QSize(), QIcon::Normal, QIcon::Off);
        BookSeat->setWindowIcon(icon);
        BookSeat->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background-image: url(:/res/LW (2).jpg);\n"
"}"));
        centralwidget = new QWidget(BookSeat);
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
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(1670, 470, 201, 41));
        dateTimeEdit->setDateTime(QDateTime(QDate(2020, 6, 1), QTime(0, 0, 0)));
        dateTimeEdit_2 = new QDateTimeEdit(centralwidget);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(1670, 530, 201, 41));
        dateTimeEdit_2->setDateTime(QDateTime(QDate(2020, 7, 1), QTime(0, 0, 0)));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1580, 470, 81, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1580, 530, 81, 41));
        BookSeat->setCentralWidget(centralwidget);
        lineEdit->raise();
        tableView->raise();
        comboBox->raise();
        pushButton->raise();
        lineEdit_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        dateTimeEdit->raise();
        dateTimeEdit_2->raise();
        label->raise();
        label_2->raise();

        retranslateUi(BookSeat);

        QMetaObject::connectSlotsByName(BookSeat);
    } // setupUi

    void retranslateUi(QMainWindow *BookSeat)
    {
        BookSeat->setWindowTitle(QApplication::translate("BookSeat", "\351\242\204\345\256\232\345\272\247\344\275\215", nullptr));
        comboBox->setItemText(0, QApplication::translate("BookSeat", "\346\245\274\345\220\215", nullptr));
        comboBox->setItemText(1, QApplication::translate("BookSeat", "\346\245\274\345\217\267", nullptr));
        comboBox->setItemText(2, QApplication::translate("BookSeat", "\345\261\202\346\225\260", nullptr));
        comboBox->setItemText(3, QApplication::translate("BookSeat", "\346\225\231\345\256\244\345\217\267", nullptr));
        comboBox->setItemText(4, QApplication::translate("BookSeat", "\346\225\231\345\256\244id", nullptr));

        pushButton->setText(QString());
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("BookSeat", "   \346\220\234\347\264\242", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("BookSeat", "\350\276\223\345\205\245\346\225\231\345\256\244id", nullptr));
        pushButton_3->setText(QApplication::translate("BookSeat", "\351\242\204\345\256\232", nullptr));
        pushButton_4->setText(QApplication::translate("BookSeat", "\350\277\224\345\233\236", nullptr));
        pushButton_5->setText(QApplication::translate("BookSeat", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        label->setText(QApplication::translate("BookSeat", "\350\265\267\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_2->setText(QApplication::translate("BookSeat", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookSeat: public Ui_BookSeat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKSEAT_H

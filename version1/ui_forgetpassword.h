/********************************************************************************
** Form generated from reading UI file 'forgetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_H
#define UI_FORGETPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ForgetPassword
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QLabel *label_16;

    void setupUi(QMainWindow *ForgetPassword)
    {
        if (ForgetPassword->objectName().isEmpty())
            ForgetPassword->setObjectName(QString::fromUtf8("ForgetPassword"));
        ForgetPassword->resize(1339, 942);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/LW_10.png"), QSize(), QIcon::Normal, QIcon::Off);
        ForgetPassword->setWindowIcon(icon);
        ForgetPassword->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:\\url(:/res/LW_13.jpg);\n"
"}"));
        centralwidget = new QWidget(ForgetPassword);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(60, 40, 1151, 891));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(255,166,68,0.5);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 20, 251, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:50px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 140, 201, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 190, 431, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #002D40;\n"
"}"));
        lineEdit->setEchoMode(QLineEdit::Normal);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 470, 301, 61));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 520, 431, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #002D40;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 640, 251, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 690, 431, 61));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #002D40;\n"
"}"));
        lineEdit_3->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(860, 640, 121, 121));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1010, 640, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ff8c69;\n"
"border-radius:60px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"border-radius:60px;\n"
"background:#FF6F69;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 360, 921, 61));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:1px solid #002D40;\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 300, 301, 61));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 150, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#FFA644;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#E64661;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(490, 110, 641, 61));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#002D40;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        ForgetPassword->setCentralWidget(centralwidget);

        retranslateUi(ForgetPassword);

        QMetaObject::connectSlotsByName(ForgetPassword);
    } // setupUi

    void retranslateUi(QMainWindow *ForgetPassword)
    {
        ForgetPassword->setWindowTitle(QApplication::translate("ForgetPassword", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label->setText(QApplication::translate("ForgetPassword", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        label_2->setText(QApplication::translate("ForgetPassword", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("ForgetPassword", "Username", nullptr));
        label_3->setText(QApplication::translate("ForgetPassword", "\350\257\267\350\276\223\345\205\245\345\257\206\344\277\235\347\255\224\346\241\210", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("ForgetPassword", "Answer", nullptr));
        label_4->setText(QApplication::translate("ForgetPassword", "\350\257\267\350\276\223\345\205\245\346\226\260\345\257\206\347\240\201", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("ForgetPassword", "New Password", nullptr));
        pushButton_2->setText(QApplication::translate("ForgetPassword", "\346\217\220\344\272\244", nullptr));
        pushButton->setText(QApplication::translate("ForgetPassword", "\350\277\224\345\233\236", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("ForgetPassword", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215\357\274\214\345\271\266\347\202\271\345\207\273\346\237\245\350\257\242\346\214\211\351\222\256\346\237\245\347\234\213\346\202\250\347\232\204\345\257\206\344\277\235\351\227\256\351\242\230", nullptr));
        label_5->setText(QApplication::translate("ForgetPassword", "\346\202\250\347\232\204\345\257\206\344\277\235\351\227\256\351\242\230\346\230\257", nullptr));
        pushButton_3->setText(QApplication::translate("ForgetPassword", "\346\237\245\350\257\242", nullptr));
        label_16->setText(QApplication::translate("ForgetPassword", "\346\217\220\347\244\272\357\274\232\347\256\241\347\220\206\345\221\230\347\224\250\346\210\267\344\277\256\346\224\271\345\257\206\347\240\201\351\234\200\350\246\201\346\220\272\345\270\246\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201\345\210\260\345\233\276\344\271\246\351\246\206\344\272\214\346\245\274\347\216\260\345\234\272\345\212\236\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ForgetPassword: public Ui_ForgetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_H

/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *radioButton_student;
    QRadioButton *radioButton_admin;
    QRadioButton *radioButton_teacher;
    QToolButton *toolButton;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QString::fromUtf8("LoginWindow"));
        LoginWindow->resize(1003, 858);
        QIcon icon;
        icon.addFile(QString::fromUtf8("res/login.png"), QSize(), QIcon::Normal, QIcon::Off);
        LoginWindow->setWindowIcon(icon);
        LoginWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW_3.jpg);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(120, 130, 611, 671));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(0,0,0,0.65);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 351, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:50px;\n"
"font-family:Comic Sans MS;\n"
"background:transparent;\n"
"}\n"
""));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 520, 531, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#b22c46;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#333;\n"
"border-radius:15px;\n"
"background:#ff8c69;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
""));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 590, 251, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#b22c46;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#333;\n"
"border-radius:15px;\n"
"background:#ff8c69;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 590, 251, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#b22c46;\n"
"border-radius:15px;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QPushButton:hover{\n"
"background:#333;\n"
"border-radius:15px;\n"
"background:#ff8c69;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 270, 491, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 390, 491, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 230, 201, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 360, 151, 41));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:white;\n"
"font-size:32px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        radioButton_student = new QRadioButton(frame);
        radioButton_student->setObjectName(QString::fromUtf8("radioButton_student"));
        radioButton_student->setGeometry(QRect(70, 140, 131, 41));
        radioButton_student->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 40px;\n"
"    height: 40px;\n"
"}\n"
"QRadioButton::indicator::unchecked {\n"
"    image:url(:/res/LW_6.png);\n"
"}\n"
"QRadioButton::indicator::checked {\n"
"    image:url(:/res/LW_5.png);\n"
"}\n"
"\n"
"QRadioButton{\n"
"color:white;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_student->setChecked(true);
        radioButton_admin = new QRadioButton(frame);
        radioButton_admin->setObjectName(QString::fromUtf8("radioButton_admin"));
        radioButton_admin->setGeometry(QRect(340, 140, 131, 41));
        radioButton_admin->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 40px;\n"
"    height: 40px;\n"
"}\n"
"QRadioButton::indicator::unchecked {\n"
"    image:url(:/res/LW_6.png);\n"
"}\n"
"QRadioButton::indicator::checked {\n"
"    image:url(:/res/LW_5.png);\n"
"}\n"
"\n"
"QRadioButton{\n"
"color:white;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_teacher = new QRadioButton(frame);
        radioButton_teacher->setObjectName(QString::fromUtf8("radioButton_teacher"));
        radioButton_teacher->setGeometry(QRect(210, 140, 131, 41));
        radioButton_teacher->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
"    width: 40px;\n"
"    height: 40px;\n"
"}\n"
"QRadioButton::indicator::unchecked {\n"
"    image:url(:/res/LW_6.png);\n"
"}\n"
"QRadioButton::indicator::checked {\n"
"    image:url(:/res/LW_5.png);\n"
"}\n"
"\n"
"QRadioButton{\n"
"color:white;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_teacher->setChecked(false);
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(370, 70, 121, 121));
        toolButton->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"background:#b22c46;\n"
"border-radius:60px;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/LW_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(85, 85));
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "\346\254\242\350\277\216", nullptr));
        label->setText(QApplication::translate("LoginWindow", "Welcome Back", nullptr));
        pushButton->setText(QApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
        pushButton_3->setText(QApplication::translate("LoginWindow", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("LoginWindow", "Username", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("LoginWindow", "Password", nullptr));
        label_2->setText(QApplication::translate("LoginWindow", "Username", nullptr));
        label_3->setText(QApplication::translate("LoginWindow", "Password", nullptr));
        radioButton_student->setText(QApplication::translate("LoginWindow", "\345\255\246\347\224\237", nullptr));
        radioButton_admin->setText(QApplication::translate("LoginWindow", "\347\256\241\347\220\206\345\221\230", nullptr));
        radioButton_teacher->setText(QApplication::translate("LoginWindow", "\346\225\231\345\270\210", nullptr));
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H

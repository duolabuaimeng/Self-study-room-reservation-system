/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QAction *actionadmin;
    QAction *actionhelp;
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QLabel *label_7;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton_9;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QGroupBox *groupBox_5;
    QComboBox *comboBox;
    QLabel *label_10;
    QGroupBox *groupBox_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QLabel *label_15;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_16;

    void setupUi(QMainWindow *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName(QString::fromUtf8("RegisterWindow"));
        RegisterWindow->resize(1814, 1033);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/LW_9.png"), QSize(), QIcon::Normal, QIcon::Off);
        RegisterWindow->setWindowIcon(icon);
        RegisterWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background:url(:/res/LW (2).jpg);\n"
"}"));
        actionadmin = new QAction(RegisterWindow);
        actionadmin->setObjectName(QString::fromUtf8("actionadmin"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/LW_10.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionadmin->setIcon(icon1);
        actionhelp = new QAction(RegisterWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/LW_8.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionhelp->setIcon(icon2);
        centralwidget = new QWidget(RegisterWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(80, 30, 1581, 911));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background:rgba(255,255,157,0.90);\n"
"border-radius:15px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 10, 251, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:50px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 100, 201, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 140, 611, 61));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(380, 100, 401, 61));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 210, 201, 61));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 250, 611, 61));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(380, 210, 401, 61));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(90, 320, 201, 61));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 360, 611, 61));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 450, 671, 80));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(100, 20, 181, 41));
        radioButton_2->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_2->setChecked(true);
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(400, 20, 191, 41));
        radioButton->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton->setChecked(false);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 201, 61));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(80, 540, 671, 221));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 10, 201, 61));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(100, 70, 281, 41));
        radioButton_3->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_3->setChecked(false);
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(100, 120, 231, 41));
        radioButton_4->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_4->setChecked(false);
        radioButton_5 = new QRadioButton(groupBox_2);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(400, 170, 261, 41));
        radioButton_5->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_5->setChecked(false);
        radioButton_6 = new QRadioButton(groupBox_2);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(100, 170, 211, 41));
        radioButton_6->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_6->setChecked(false);
        radioButton_7 = new QRadioButton(groupBox_2);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(400, 70, 241, 41));
        radioButton_7->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_7->setChecked(false);
        radioButton_8 = new QRadioButton(groupBox_2);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(400, 20, 271, 41));
        radioButton_8->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_8->setChecked(false);
        radioButton_9 = new QRadioButton(groupBox_2);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(100, 20, 241, 41));
        radioButton_9->setStyleSheet(QString::fromUtf8("QRadioButton::indicator {\n"
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
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}"));
        radioButton_9->setChecked(true);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 770, 201, 61));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_4 = new QLineEdit(frame);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(90, 810, 611, 61));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 90, 671, 351));
        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(80, 780, 671, 111));
        groupBox_5 = new QGroupBox(frame);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(870, 90, 661, 141));
        comboBox = new QComboBox(groupBox_5);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/lw (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        comboBox->addItem(icon3, QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(300, 50, 301, 41));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"background:rgba(255,255,157,0.80);\n"
"color:#FF6138;\n"
"font-size:28px;\n"
"font-family:Microsoft JhengHei;\n"
"}\n"
"QComboBox:enabled:hover, QComboBox:enabled:focus {\n"
"        color: rgb(250, 128, 664);\n"
"		background:rgba(255,255,157,0.80);\n"
"}\n"
""));
        comboBox->setIconSize(QSize(40, 40));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 40, 201, 61));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        groupBox_6 = new QGroupBox(frame);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(870, 260, 661, 381));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 120, 201, 61));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 240, 201, 61));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(300, 240, 401, 61));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(300, 120, 401, 61));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_6 = new QLineEdit(groupBox_6);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(20, 160, 611, 61));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 20, 201, 61));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        lineEdit_7 = new QLineEdit(groupBox_6);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(20, 280, 611, 61));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:transparent;\n"
"border:none;\n"
"color:#717072;\n"
"font-size:25px;\n"
"font-family:Microsoft JhengHei;\n"
"border-bottom:1px solid #717072;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1370, 720, 121, 121));
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
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1210, 720, 121, 121));
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
        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(950, 640, 611, 61));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#00A388;\n"
"font-size:20px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}"));
        groupBox_6->raise();
        groupBox_4->raise();
        groupBox_3->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        label_3->raise();
        label_4->raise();
        lineEdit_2->raise();
        label_5->raise();
        label_6->raise();
        lineEdit_3->raise();
        groupBox->raise();
        groupBox_2->raise();
        label_9->raise();
        lineEdit_4->raise();
        groupBox_5->raise();
        pushButton->raise();
        pushButton_2->raise();
        label_16->raise();
        RegisterWindow->setCentralWidget(centralwidget);

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QApplication::translate("RegisterWindow", "\346\263\250\345\206\214", nullptr));
        actionadmin->setText(QApplication::translate("RegisterWindow", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214", nullptr));
        actionhelp->setText(QApplication::translate("RegisterWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("RegisterWindow", "\346\263\250\345\206\214", nullptr));
        label_2->setText(QApplication::translate("RegisterWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("RegisterWindow", "Username", nullptr));
        label_3->setText(QApplication::translate("RegisterWindow", "15\344\275\215\344\273\245\345\206\205\347\232\204\345\255\227\346\257\215\357\274\214\346\225\260\345\255\227\347\273\204\345\220\210", nullptr));
        label_4->setText(QApplication::translate("RegisterWindow", "\345\257\206\347\240\201", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("RegisterWindow", "Password", nullptr));
        label_5->setText(QApplication::translate("RegisterWindow", "15\344\275\215\344\273\245\345\206\205\347\232\204\345\255\227\346\257\215\357\274\214\346\225\260\345\255\227\347\273\204\345\220\210", nullptr));
        label_6->setText(QApplication::translate("RegisterWindow", "\345\247\223\345\220\215", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("RegisterWindow", "Name", nullptr));
        groupBox->setTitle(QString());
        radioButton_2->setText(QApplication::translate("RegisterWindow", "\347\224\267 Male", nullptr));
        radioButton->setText(QApplication::translate("RegisterWindow", "\345\245\263 Female", nullptr));
        label_7->setText(QApplication::translate("RegisterWindow", "\346\200\247\345\210\253", nullptr));
        groupBox_2->setTitle(QString());
        label_8->setText(QApplication::translate("RegisterWindow", "\350\272\253\344\273\275", nullptr));
        radioButton_3->setText(QApplication::translate("RegisterWindow", "\345\244\247\344\272\214 Sophomore", nullptr));
        radioButton_4->setText(QApplication::translate("RegisterWindow", "\345\244\247\344\270\211 Junior", nullptr));
        radioButton_5->setText(QApplication::translate("RegisterWindow", "\346\225\231\345\270\210     Teacher", nullptr));
        radioButton_6->setText(QApplication::translate("RegisterWindow", "\345\244\247\345\233\233 Senior", nullptr));
        radioButton_7->setText(QApplication::translate("RegisterWindow", "\345\215\232\345\243\253     Doctor", nullptr));
        radioButton_8->setText(QApplication::translate("RegisterWindow", "\347\240\224\347\251\266\347\224\237 Graduate", nullptr));
        radioButton_9->setText(QApplication::translate("RegisterWindow", "\345\244\247\344\270\200 Freshman", nullptr));
        label_9->setText(QApplication::translate("RegisterWindow", "\346\211\213\346\234\272\345\217\267", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("RegisterWindow", "Phone Number", nullptr));
        groupBox_3->setTitle(QString());
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QString());
        comboBox->setItemText(0, QApplication::translate("RegisterWindow", "\344\277\241\346\201\257\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(1, QApplication::translate("RegisterWindow", "\346\226\260\351\227\273\344\274\240\346\222\255\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(2, QApplication::translate("RegisterWindow", "\345\244\226\346\226\207\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(3, QApplication::translate("RegisterWindow", "\350\211\272\346\234\257\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(4, QApplication::translate("RegisterWindow", "\344\272\272\346\226\207\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(5, QApplication::translate("RegisterWindow", "\346\265\267\345\244\226\346\225\231\350\202\262\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(6, QApplication::translate("RegisterWindow", "\345\233\275\351\231\205\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(7, QApplication::translate("RegisterWindow", "\347\273\217\346\265\216\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(8, QApplication::translate("RegisterWindow", "\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(9, QApplication::translate("RegisterWindow", "\346\263\225\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(10, QApplication::translate("RegisterWindow", "\344\274\232\350\256\241\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(11, QApplication::translate("RegisterWindow", "\345\205\254\345\205\261\344\272\213\345\212\241\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(12, QApplication::translate("RegisterWindow", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(13, QApplication::translate("RegisterWindow", "\345\233\275\351\231\205\345\205\263\347\263\273\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(14, QApplication::translate("RegisterWindow", "\346\225\231\350\202\262\347\240\224\347\251\266\351\231\242", nullptr));
        comboBox->setItemText(15, QApplication::translate("RegisterWindow", "\344\275\223\350\202\262\346\225\231\345\255\246\351\203\250", nullptr));
        comboBox->setItemText(16, QApplication::translate("RegisterWindow", "\347\273\247\347\273\255\346\225\231\350\202\262\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(17, QApplication::translate("RegisterWindow", "\347\244\276\344\274\232\344\270\216\344\272\272\347\261\273\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(18, QApplication::translate("RegisterWindow", "\346\225\260\345\255\246\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(19, QApplication::translate("RegisterWindow", "\347\211\251\347\220\206\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(20, QApplication::translate("RegisterWindow", "\345\214\226\345\255\246\345\214\226\345\267\245\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(21, QApplication::translate("RegisterWindow", "\346\235\220\346\226\231\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(22, QApplication::translate("RegisterWindow", "\345\273\272\347\255\221\344\270\216\345\234\237\346\234\250\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(23, QApplication::translate("RegisterWindow", "\350\203\275\346\272\220\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(24, QApplication::translate("RegisterWindow", "\350\210\252\347\251\272\350\210\252\345\244\251\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(25, QApplication::translate("RegisterWindow", "\347\224\265\345\255\220\347\247\221\345\255\246\344\270\216\346\212\200\346\234\257\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(26, QApplication::translate("RegisterWindow", "\347\224\237\345\221\275\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(27, QApplication::translate("RegisterWindow", "\345\205\254\345\205\261\345\215\253\347\224\237\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(28, QApplication::translate("RegisterWindow", "\350\215\257\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(29, QApplication::translate("RegisterWindow", "\345\214\273\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(30, QApplication::translate("RegisterWindow", "\346\265\267\346\264\213\344\270\216\345\234\260\347\220\203\345\255\246\351\231\242", nullptr));
        comboBox->setItemText(31, QApplication::translate("RegisterWindow", "\347\216\257\345\242\203\344\270\216\347\224\237\346\200\201\345\255\246\351\231\242", nullptr));

        comboBox->setCurrentText(QApplication::translate("RegisterWindow", "\344\277\241\346\201\257\345\255\246\351\231\242", nullptr));
        label_10->setText(QApplication::translate("RegisterWindow", "\345\255\246\351\231\242", nullptr));
        groupBox_6->setTitle(QString());
        label_11->setText(QApplication::translate("RegisterWindow", "\351\227\256\351\242\230", nullptr));
        label_12->setText(QApplication::translate("RegisterWindow", "\347\255\224\346\241\210", nullptr));
        label_13->setText(QApplication::translate("RegisterWindow", "15\344\275\215\344\273\245\345\206\205\347\232\204\344\270\255\346\226\207\357\274\214\345\255\227\346\257\215\357\274\214\346\225\260\345\255\227\347\273\204\345\220\210", nullptr));
        label_14->setText(QApplication::translate("RegisterWindow", "15\344\275\215\344\273\245\345\206\205\347\232\204\344\270\255\346\226\207\357\274\214\345\255\227\346\257\215\357\274\214\346\225\260\345\255\227\347\273\204\345\220\210", nullptr));
        lineEdit_6->setText(QString());
        lineEdit_6->setPlaceholderText(QApplication::translate("RegisterWindow", "Security Question", nullptr));
        label_15->setText(QApplication::translate("RegisterWindow", "\345\257\206\344\277\235\351\227\256\351\242\230\350\256\276\347\275\256", nullptr));
        lineEdit_7->setText(QString());
        lineEdit_7->setPlaceholderText(QApplication::translate("RegisterWindow", "Answer", nullptr));
        pushButton->setText(QApplication::translate("RegisterWindow", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QApplication::translate("RegisterWindow", "\346\217\220\344\272\244", nullptr));
        label_16->setText(QApplication::translate("RegisterWindow", "\346\217\220\347\244\272\357\274\232\347\256\241\347\220\206\345\221\230\347\224\250\346\210\267\346\263\250\345\206\214\351\234\200\350\246\201\346\220\272\345\270\246\344\272\214\344\273\243\350\272\253\344\273\275\350\257\201\345\210\260\345\233\276\344\271\246\351\246\206\344\272\214\346\245\274\347\216\260\345\234\272\345\212\236\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H

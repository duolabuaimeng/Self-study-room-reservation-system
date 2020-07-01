/********************************************************************************
** Form generated from reading UI file 'fines.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINES_H
#define UI_FINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fines
{
public:
    QWidget *centralwidget;
    QPushButton *deleteBtn;
    QLabel *label;
    QLineEdit *school_id_Edit;
    QPushButton *pushButton;
    QPushButton *addBtn;

    void setupUi(QMainWindow *Fines)
    {
        if (Fines->objectName().isEmpty())
            Fines->setObjectName(QString::fromUtf8("Fines"));
        Fines->resize(1627, 991);
        Fines->setStyleSheet(QString::fromUtf8("background-image: url(:/res/0000_3.jpg);"));
        centralwidget = new QWidget(Fines);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        deleteBtn = new QPushButton(centralwidget);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setGeometry(QRect(290, 540, 161, 131));
        deleteBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(370, 30, 331, 81));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:	#000001;\n"
"border:none;\n"
"font-size:80px;\n"
"font-family:Microsoft JhengHei;\n"
"background:transparent;\n"
"}\n"
""));
        school_id_Edit = new QLineEdit(centralwidget);
        school_id_Edit->setObjectName(QString::fromUtf8("school_id_Edit"));
        school_id_Edit->setGeometry(QRect(350, 330, 381, 101));
        school_id_Edit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background:rgba(255,225,26,0.5);\n"
"border-radius:15px;\n"
"color:#000000;\n"
"font-size:40px;\n"
"font-family:Microsoft JhengHei;\n"
"border:2px solid #002D40;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1020, 790, 121, 121));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        addBtn = new QPushButton(centralwidget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(690, 550, 181, 121));
        addBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        Fines->setCentralWidget(centralwidget);

        retranslateUi(Fines);

        QMetaObject::connectSlotsByName(Fines);
    } // setupUi

    void retranslateUi(QMainWindow *Fines)
    {
        Fines->setWindowTitle(QApplication::translate("Fines", "MainWindow", nullptr));
        deleteBtn->setText(QApplication::translate("Fines", "\347\273\223\346\270\205", nullptr));
        label->setText(QApplication::translate("Fines", "\347\275\232\351\207\221\344\277\241\346\201\257", nullptr));
        school_id_Edit->setText(QString());
        school_id_Edit->setPlaceholderText(QApplication::translate("Fines", "\350\276\223\345\205\245\345\200\237\351\230\205\344\272\272\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton->setText(QApplication::translate("Fines", "\350\277\224\345\233\236", nullptr));
        addBtn->setText(QApplication::translate("Fines", "\345\242\236\345\212\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Fines: public Ui_Fines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINES_H

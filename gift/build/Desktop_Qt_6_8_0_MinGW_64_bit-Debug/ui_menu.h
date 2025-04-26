/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_3;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName("menu");
        menu->resize(605, 369);
        label = new QLabel(menu);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 10, 201, 51));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(280, 70, 49, 16));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(50, 320, 201, 31));
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(460, 320, 91, 31));
        groupBox = new QGroupBox(menu);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 80, 521, 211));
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(190, 150, 75, 24));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(85, 85, 0);"));
        textEdit = new QTextEdit(groupBox);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(250, 30, 241, 31));
        textEdit_2 = new QTextEdit(groupBox);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(250, 90, 241, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 30, 131, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 100, 131, 21));
        label_5 = new QLabel(menu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-20, -30, 631, 401));
        label_5->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/tactical-monsters-rumble-arena.jpg);"));
        label_5->raise();
        label->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        groupBox->raise();

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QWidget *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Form", nullptr));
        label->setText(QCoreApplication::translate("menu", "\"Tactical Monsters\"", nullptr));
        label_2->setText(QCoreApplication::translate("menu", "menu", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "Start an Async PVP Game", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu", "galery", nullptr));
        groupBox->setTitle(QCoreApplication::translate("menu", "players info", nullptr));
        pushButton_3->setText(QCoreApplication::translate("menu", "play", nullptr));
        label_3->setText(QCoreApplication::translate("menu", "player 1 name :", nullptr));
        label_4->setText(QCoreApplication::translate("menu", "player 2 name :", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H

/********************************************************************************
** Form generated from reading UI file 'welcome_page.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_PAGE_H
#define UI_WELCOME_PAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_welcome_page
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *welcome_page)
    {
        if (welcome_page->objectName().isEmpty())
            welcome_page->setObjectName("welcome_page");
        welcome_page->resize(565, 370);
        centralwidget = new QWidget(welcome_page);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 10, 171, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 501, 221));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/capsule_616x353.jpg);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 300, 75, 24));
        welcome_page->setCentralWidget(centralwidget);
        menubar = new QMenuBar(welcome_page);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 565, 22));
        welcome_page->setMenuBar(menubar);
        statusbar = new QStatusBar(welcome_page);
        statusbar->setObjectName("statusbar");
        welcome_page->setStatusBar(statusbar);

        retranslateUi(welcome_page);

        QMetaObject::connectSlotsByName(welcome_page);
    } // setupUi

    void retranslateUi(QMainWindow *welcome_page)
    {
        welcome_page->setWindowTitle(QCoreApplication::translate("welcome_page", "welcome_page", nullptr));
        label->setText(QCoreApplication::translate("welcome_page", "Tactical Monsters", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("welcome_page", "Next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcome_page: public Ui_welcome_page {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_PAGE_H

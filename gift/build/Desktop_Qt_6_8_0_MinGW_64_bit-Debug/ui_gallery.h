/********************************************************************************
** Form generated from reading UI file 'gallery.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GALLERY_H
#define UI_GALLERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gallery
{
public:
    QLabel *label;

    void setupUi(QWidget *gallery)
    {
        if (gallery->objectName().isEmpty())
            gallery->setObjectName("gallery");
        gallery->resize(544, 392);
        label = new QLabel(gallery);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 521, 291));
        label->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/ss_2584b9d048aeeb2d265919bcc996401c356e66e2.1920x1080.jpg);"));

        retranslateUi(gallery);

        QMetaObject::connectSlotsByName(gallery);
    } // setupUi

    void retranslateUi(QWidget *gallery)
    {
        gallery->setWindowTitle(QCoreApplication::translate("gallery", "Form", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gallery: public Ui_gallery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GALLERY_H

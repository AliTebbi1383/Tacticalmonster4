#include "gallery.h"
#include "ui_gallery.h"

gallery::gallery(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::gallery)
{
    ui->setupUi(this);
}

gallery::~gallery()
{
    delete ui;
}

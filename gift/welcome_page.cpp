#include "welcome_page.h"
#include "ui_welcome_page.h"
#include "menu.h"

welcome_page::welcome_page(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::welcome_page)
{
    ui->setupUi(this);
}

welcome_page::~welcome_page()
{
    delete ui;
}

void welcome_page::on_pushButton_clicked()
{
    menu * nextpage = new menu;
    nextpage->show();
    nextpage->setWindowTitle("menu");
    this->close();

}


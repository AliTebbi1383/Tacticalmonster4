#include "menu.h"
#include "ui_menu.h"
#include "gallery.h"
#include "game_win.h"

menu::menu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_2_clicked()
{
    gallery * gallerygame = new gallery;
    gallerygame->show();
    gallerygame->setWindowTitle("gallery");
}


void menu::on_pushButton_3_clicked()
{
    game_win * gamepage = new game_win;
    gamepage->show();
    gamepage->setWindowTitle("game page");
    this->hide();
}


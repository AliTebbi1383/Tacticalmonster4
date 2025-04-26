#include "game_win.h"
#include "ui_game_win.h"

game_win::game_win(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game_win)
{
    ui->setupUi(this);
}

game_win::~game_win()
{
    delete ui;
}

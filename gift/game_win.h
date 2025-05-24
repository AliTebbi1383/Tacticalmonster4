#ifndef GAME_WIN_H
#define GAME_WIN_H

#include <QWidget>
#include "HexGrid.h"

namespace Ui {
class game_win;
}

class game_win : public QWidget
{
    Q_OBJECT

public:
    explicit game_win(QWidget *parent = nullptr);
    ~game_win();

private:
    Ui::game_win *ui;
    HexGrid* hexGrid;

protected:
    void mousePressEvent(QMouseEvent *event) override;
};

#endif // GAME_WIN_H

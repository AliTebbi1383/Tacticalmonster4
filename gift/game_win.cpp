#include "game_win.h"
#include "ui_game_win.h"
#include <QGraphicsScene>
#include <QDebug>
#include <QMouseEvent>

game_win::game_win(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::game_win)
{
    ui->setupUi(this);
    // Create and set up the scene
    QGraphicsScene* scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    // Set a reasonable scene rect (adjust values as needed)
    scene->setSceneRect(-200, -200, 800, 800);

    // Create the hex grid - VERIFY THIS PATH IS CORRECT
    hexGrid = new HexGrid(scene, ":/new/prefix1/grid1.txt"); // Or your actual file path

    // Configure the view
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);

    // Center and scale the view
    ui->graphicsView->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);

    // Optional: Add a border to help visualize the view
    ui->graphicsView->setStyleSheet("border: 1px solid black;");


    // After creating hexGrid
    if (scene->items().empty()) {
        qDebug() << "Warning: No items in scene! Check:";
        qDebug() << "1. Grid file path is correct";
        qDebug() << "2. File is properly formatted";
        qDebug() << "3. HexGrid::renderGrid() is being called";
    } else {
        qDebug() << "Scene contains" << scene->items().count() << "items";
        qDebug() << "Scene rect:" << scene->sceneRect();

        // After creating the hex grid
        ui->graphicsView->fitInView(scene->sceneRect(), Qt::KeepAspectRatio);

        // Add temporary debug output
        qDebug() << "Scene items count:" << scene->items().count();
        qDebug() << "Scene rect:" << scene->sceneRect();
        qDebug() << "View rect:" << ui->graphicsView->rect();
        qDebug() << "View transform:" << ui->graphicsView->transform();
    }
}

game_win::~game_win()
{
    delete hexGrid;
    delete ui;
}

void game_win::mousePressEvent(QMouseEvent *event)
{
    QWidget::mousePressEvent(event);

    if (event->button() == Qt::LeftButton) {
        QPointF scenePos = ui->graphicsView->mapToScene(event->pos());
        qDebug() << "Clicked at:" << scenePos;
    }
}

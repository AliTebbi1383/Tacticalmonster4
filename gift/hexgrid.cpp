#include "HexGrid.h"
#include <QFile>
#include <QTextStream>
#include <QBrush>
#include <cmath>

HexGrid::HexGrid(QGraphicsScene* scene, const QString& filename) : scene(scene), hexSize(30.0f) {
    loadGridFromFile(filename);
    //hexSize(30.0f);
    renderGrid();
}

HexGrid::~HexGrid() {
    for (auto& row : grid) {
        for (auto& tile : row) {
            if (tile.item) {
                scene->removeItem(tile.item);
                delete tile.item;
            }
        }
    }
}

void HexGrid::loadGridFromFile(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    std::vector<QString> lines;
    while (!in.atEnd()) {
        lines.push_back(in.readLine());
    }
    file.close();

    // فرض می‌کنیم گرید 10x10 است (بر اساس فایل نمونه)
    grid.resize(10, std::vector<HexTile>(10, HexTile(0, 0, TileType::Empty)));

    // پردازش فایل برای استخراج کاشی‌ها
    for (int row = 0; row < 10; ++row) {
        QString line = lines[row * 2]; // خطوط زوج شامل اطلاعات کاشی‌ها
        for (int col = 0; col < 10; ++col) {
            // مختصات محوری (q, r)
            int q = col;
            int r = row;
            TileType type = TileType::Empty;

            // بررسی کاراکترهای خاص در خط
            int lineIndex = col * 6 + 3; // موقعیت تقریبی کاراکتر وسط کاشی
            if (lineIndex < line.length()) {
                QChar c = line[lineIndex];
                if (c == '1') type = TileType::Type1;
                else if (c == '2') type = TileType::Type2;
                else if (c == '#') type = TileType::Obstacle;
                else if (c == '~') type = TileType::Water;
            }

            grid[row][col] = HexTile(q, r, type);
        }
    }
}

QPolygonF HexGrid::createHexagon(float x, float y) {
    QPolygonF hexagon;
    for (int i = 0; i < 6; ++i) {
        float angle = M_PI / 3 * i;
        hexagon << QPointF(x + hexSize * cos(angle), y + hexSize * sin(angle));
    }
    return hexagon;
}

QColor HexGrid::getTileColor(TileType type) {
    switch (type) {
    case TileType::Empty: return Qt::white;
    case TileType::Type1: return Qt::green;
    case TileType::Type2: return Qt::blue;
    case TileType::Obstacle: return Qt::black;
    case TileType::Water: return Qt::cyan;
    }
    return Qt::white;
}

void HexGrid::renderGrid() {
    for (int row = 0; row < grid.size(); ++row) {
        for (int col = 0; col < grid[row].size(); ++col) {
            HexTile& tile = grid[row][col];
            // محاسبه مختصات پیکسلی
            float x = hexSize * 1.5f * tile.q;
            float y = hexSize * sqrt(3) * (tile.r + tile.q / 2.0f);
            QPolygonF hexagon = createHexagon(x, y);

            // ایجاد آیتم گرافیکی
            tile.item = scene->addPolygon(hexagon, QPen(Qt::black), QBrush(getTileColor(tile.type)));
        }
    }
}

HexGrid::HexTile* HexGrid::getTile(int q, int r) {
    for (auto& row : grid) {
        for (auto& tile : row) {
            if (tile.q == q && tile.r == r) {
                return &tile;
            }
        }
    }
    return nullptr;
}

#ifndef HEXGRID_H
#define HEXGRID_H

#include <QGraphicsScene>
#include <QGraphicsPolygonItem>
#include <QPointF>
#include <vector>
#include <QString>

class HexGrid {
public:
    // نوع کاشی‌ها بر اساس فایل ورودی
    enum class TileType {
        Empty,      // __
        Type1,      // 1
        Type2,      // 2
        Obstacle,   // #
        Water       // ~
    };

    // ساختار کاشی
    struct HexTile {
        int q, r;           // مختصات محوری
        TileType type;      // نوع کاشی
        QGraphicsPolygonItem* item; // آیتم گرافیکی
        HexTile(int q, int r, TileType type) : q(q), r(r), type(type), item(nullptr) {}
    };

    HexGrid(QGraphicsScene* scene, const QString& filename);
    ~HexGrid();

    // تابع برای گرفتن کاشی در مختصات خاص
    HexTile* getTile(int q, int r);
    // تابع برای رندر گرید
    void renderGrid();

private:
    std::vector<std::vector<HexTile>> grid; // آرایه کاشی‌ها
    QGraphicsScene* scene; // صحنه Qt برای رندر
    float hexSize; // اندازه کاشی شش‌ضلعی

    // توابع کمکی
    void loadGridFromFile(const QString& filename);
    QPolygonF createHexagon(float x, float y);
    QColor getTileColor(TileType type);
};

#endif // HEXGRID_H

#ifndef GALLERY_H
#define GALLERY_H

#include <QWidget>

namespace Ui {
class gallery;
}

class gallery : public QWidget
{
    Q_OBJECT

public:
    explicit gallery(QWidget *parent = nullptr);
    ~gallery();

private:
    Ui::gallery *ui;
};

#endif // GALLERY_H

#ifndef DIS_MAP_H
#define DIS_MAP_H

#include <QDialog>

namespace Ui {
class dis_map;
}

class dis_map : public QDialog
{
    Q_OBJECT

public:
    explicit dis_map(QWidget *parent = 0);
    ~dis_map();

private:
    Ui::dis_map *ui;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // DIS_MAP_H

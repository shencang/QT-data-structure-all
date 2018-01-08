#include "dis_map.h"
#include "ui_dis_map.h"
#include <QPainter>
dis_map::dis_map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dis_map)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}

void dis_map::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/mapv6_2.jpg");
    painter.translate(30, 30);
    painter.drawPixmap(0, 0, 1920*0.9, 1000*0.9, pix);


}


dis_map::~dis_map()
{
    delete ui;
}

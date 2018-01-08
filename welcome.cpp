#include "welcome.h"
#include "ui_welcome.h"
#include <QPainter>
welcome::welcome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::welcome)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}


void welcome::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/logo.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(0, 0, 1920, 1080, pix);


}


welcome::~welcome()
{
    delete ui;
}

void welcome::on_pushButton_clicked()
{

}

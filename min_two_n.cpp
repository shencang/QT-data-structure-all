#include "min_two_n.h"
#include "ui_min_two_n.h"
#include <QPainter>
#include"qmessagebox.h"
#include"algorithm_min.cpp"
extern Photograph *g;      //声明一个全局变量用于窗体间传值


min_two_n::min_two_n(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::min_two_n)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}

void min_two_n::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/math_map.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(10, 80, 1220, 900, pix);


}

min_two_n::~min_two_n()
{
    delete ui;
}

void min_two_n::on_find_dtn_clicked()
{
    QString minway,disway;
    TEM tem;
    PATH path;
    PATH min_path;
    int a,b;
    bool ok;
    a=ui->first_place->text().toInt(&ok,10);
     b =ui->second_place->text().toInt(&ok,10);





     //accept();
     if((a<12)&&(a>=0)&&(b<12)&&(b>=0))
     {
        min_two(g, a, b, path, tem);
        disway=QString::number(a)+"到"+QString::number(b)+"的最短距离为："+QString::number(tem[b][1])+"\n";


        show_min_two(g, a, b, path, min_path);

         for (int i = 0; (min_path[i] >= 0 && min_path[i]<M); i++)
         {
             minway= minway+QString::fromStdString(g->n_information[min_path[i]].Scenic_spot_name)+"--->";

         }
          minway=minway+QString::fromStdString(g->n_information[b].Scenic_spot_name);

           ui->result->setPlainText(disway+minway);
           ui->result->moveCursor(QTextCursor::End);
           ui->first_place->clear();
           ui->second_place->clear();
           ui->first_place->setFocus();

     }
     else {
         QMessageBox::warning(this, tr("警告！"),
                            tr("您的输入有误！"),
                            QMessageBox::Yes);
     }

}

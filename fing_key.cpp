#include "fing_key.h"
#include "ui_fing_key.h"
#include <QPainter>
#include"qmessagebox.h"

extern Photograph *g;

fing_key::fing_key(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fing_key)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");

    QString key[M],dis_key;
    string s;
    for(int i=0;i<M;i++)
    {
        s=g->n_information[i].Key_word;
        key[i] = QString::fromStdString(s);



    }
    for(int i=0;i<M;i++)
    {
        dis_key= dis_key+"   "+key[i];
    }

     ui->textBrowser->setPlainText(dis_key);

}
void fing_key::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/math_map.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(10, 80, 1220, 900, pix);


}

fing_key::~fing_key()
{
    delete ui;
}

void fing_key::on_pushButton_clicked()
{
    QString key[M], info0,info1,info2,info3,info4,info5,infoA;
    int k=FINITY;
    string s;
    for(int i=0;i<M;i++)
    {
        s=g->n_information[i].Key_word;
        key[i] = QString::fromStdString(s);



    }

  ;
            for(int i=0;i<M;i++)
            {
               if(  ui->lineEdit->text()==key[i])
               {
                   k=i;

                   }
               if(k==FINITY){
                   QMessageBox::warning(this, tr("警告！"),
                                      tr("未找到关键词！"),
                                      QMessageBox::Yes);}

            }

            s=g->n_information[k].Scenic_spot_name;
            info0 = QString::fromStdString(s);

            s=g->n_information[k].Opening_Hours;
            info1 = QString::fromStdString(s);

            s=g->n_information[k].Scenic_spots_type;
            info2 = QString::fromStdString(s);

            s=g->n_information[k].Charges;
            info3 = QString::fromStdString(s);

            s=g->n_information[k].Key_word;
            info4 = QString::fromStdString(s);

            s=g->n_information[k].Brief_introduction;
            info5 = QString::fromStdString(s);

            infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;

            ui->textBrowser_2->setPlainText(infoA);

            ui->textBrowser_2->moveCursor(QTextCursor::End);
            ui->lineEdit->clear();
            ui->lineEdit->setFocus();

}

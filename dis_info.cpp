#include "dis_info.h"
#include"main_data.h"
#include "ui_dis_info.h"
#include <QPainter>
#include<qmessagebox.h>
#include <QString>
extern Photograph *g;      //声明外部变量

dis_info::dis_info(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dis_info)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}


dis_info::~dis_info()
{
    delete ui;
}


void dis_info::on_Button00_clicked()
{
   QString info0,info1,info2,info3,info4,info5,infoA;
   string s;
   s=g->n_information[0].Scenic_spot_name;
   info0 = QString::fromStdString(s);

   s=g->n_information[0].Opening_Hours;
   info1 = QString::fromStdString(s);

   s=g->n_information[0].Scenic_spots_type;
   info2 = QString::fromStdString(s);

   s=g->n_information[0].Charges;
   info3 = QString::fromStdString(s);

   s=g->n_information[0].Key_word;
   info4 = QString::fromStdString(s);

   s=g->n_information[0].Brief_introduction;
   info5 = QString::fromStdString(s);

   infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
    ui->display->setPlainText(infoA);
    ui->display->moveCursor(QTextCursor::End);




}
void dis_info::on_Button01_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[1].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[1].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[1].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[1].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[1].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[1].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button02_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[2].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[2].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[2].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[2].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[2].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[2].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}


void dis_info::on_Button03_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[3].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[3].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[3].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[3].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[3].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[3].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button04_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[4].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[4].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[4].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[4].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[4].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[4].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button05_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[5].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[5].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[5].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[5].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[5].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[5].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button06_clicked()
{
    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[6].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[6].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[6].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[6].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[6].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[6].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button07_clicked()
{ QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[7].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[7].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[7].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[7].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[7].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[7].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button08_clicked()
{ QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[8].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[8].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[8].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[8].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[8].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[8].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button09_clicked()
{ QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[9].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[9].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[9].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[9].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[9].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[9].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button10_clicked()
{ QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[10].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[10].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[10].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[10].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[10].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[10].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

void dis_info::on_Button11_clicked()
{ QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    s=g->n_information[11].Scenic_spot_name;
    info0 = QString::fromStdString(s);

    s=g->n_information[11].Opening_Hours;
    info1 = QString::fromStdString(s);

    s=g->n_information[11].Scenic_spots_type;
    info2 = QString::fromStdString(s);

    s=g->n_information[11].Charges;
    info3 = QString::fromStdString(s);

    s=g->n_information[11].Key_word;
    info4 = QString::fromStdString(s);

    s=g->n_information[11].Brief_introduction;
    info5 = QString::fromStdString(s);

    infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
     ui->display->setPlainText(infoA);
     ui->display->moveCursor(QTextCursor::End);

}

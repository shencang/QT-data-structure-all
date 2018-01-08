#include "dialog.h"
#include "ui_dialog.h"
#include <QPainter>
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>
#include"dis_map.h"
#include"dis_info.h"
#include"min_two_n.h"
#include"all_path_n.h"
#include"more_vertex_road.h"
#include"articulation_g.h"
#include"fing_key.h"

extern Photograph *g;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
   setWindowTitle("校园导游资讯系统");
   isUntitled = true;
   // 初始化文件名为"未命名.txt"
   curFile = tr("未命名.txt");


   QString runPath = QCoreApplication::applicationDirPath();//获取当前exe所在路径
   QString absDir = runPath + "/music/m1.mp3";
   absDir.replace(QString("/"), QString("\\"));
   //替换为windown的目录格式
   //创建QMediaPlayer对象指针，通过指针设置文件路径、音量、播放
   musicPlayer = new QMediaPlayer();
   musicPlayer->setMedia(QUrl::fromLocalFile(absDir));
   musicPlayer->setVolume(40);
   musicPlayer->play();
}


void Dialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/mapv4.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(0, 0, 1400, 1080, pix);


}
bool  Dialog::save()
{
    if (isUntitled) {
        return saveAs();
    } else {
        return saveFile(curFile);
    }
}


bool Dialog::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this,
                                                    tr("另存为"),curFile);
    if (fileName.isEmpty()) return false;
    return saveFile(fileName);
}

bool Dialog::saveFile(const QString &fileName)
{
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {

        // %1和%2分别对应后面arg两个参数，/n起换行的作用
        QMessageBox::warning(this, tr("警告系统"),
                             tr("无法写入文件 %1：/n %2")
                             .arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    // 鼠标指针变为等待状态
    QApplication::setOverrideCursor(Qt::WaitCursor);

    QString info0,info1,info2,info3,info4,info5,infoA;
    string s;
    for(int i=0;i<M;i++)
    {
        s=g->n_information[i].Scenic_spot_name;
        info0 = QString::fromStdString(s);
        s=g->n_information[i].Opening_Hours;
        info1 = QString::fromStdString(s);
        s=g->n_information[i].Scenic_spots_type;
        info2 = QString::fromStdString(s);
        s=g->n_information[i].Charges;
        info3 = QString::fromStdString(s);
        s=g->n_information[i].Key_word;
        info4 = QString::fromStdString(s);
        s=g->n_information[i].Brief_introduction;
        info5 = QString::fromStdString(s);
        infoA ="景点名称："+info0+"\n"+"开放时间："+info1+"\n"+"景点类型："+info2+"\n"+"收费情况："+info3+"\n"+"关键词："+info4+"\n"+"简介："+info5;
        QString str(infoA+"\n\n\n");
        out<<str;

    }

    file.close();
    // 鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
    isUntitled = false;
    // 获得文件的标准路径
    curFile = QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}





Dialog::~Dialog()
{

    musicPlayer->stop();
    delete ui;

}

void Dialog::on_finddata_btn_clicked()
{
    dis_info *addbook02;

    addbook02 =new dis_info();
    addbook02->show();

}

void Dialog::on_dis_btn_clicked()
{
    dis_map *addbook01;

    addbook01 =new dis_map();
    addbook01->show();
}

void Dialog::on_djt_btn_clicked()
{
    min_two_n *addbook02;

    addbook02 =new min_two_n();
    addbook02->show();


}



void Dialog::on_floyad_btn_2_clicked()
{
    all_path_n *addbook03;

    addbook03 =new all_path_n();
    addbook03->show();


}

void Dialog::on_nice_btn_clicked()
{
    more_vertex_road *addbook04;

    addbook04 =new more_vertex_road();
    addbook04->show();

}


void Dialog::on_import_btn_clicked()
{
    Articulation_g *addbook05;

    addbook05 =new Articulation_g();
    addbook05->show();

}

void Dialog::on_output_btn_clicked()
{
    saveAs();
}

void Dialog::on_btn_2_clicked()
{
    fing_key *addbook06;

    addbook06 =new fing_key();
    addbook06->show();

}

void Dialog::on_exit_btn_clicked()
{
    musicPlayer->stop();

}

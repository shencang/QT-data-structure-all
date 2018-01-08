#include "articulation_g.h"
#include "ui_articulation_g.h"
#include <QPainter>
#include"qmessagebox.h"
extern Photograph *g;
Articulation_g::Articulation_g(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Articulation_g)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}

void Articulation_g::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/timg.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(0, 0, 1920, 1080, pix);


}

void Articulation_g::Articulation(Photograph *g)
{
    QString disp;
    int u, v, w, s, flag, D[M][M], l = 0;
    for (s = 0; s<M; s++)
    {
        for (u = 0; u<M; u++)
            for (v = 0; v<M; v++)
                D[u][v] = g->e_information[u][v];
        for (u = 0; u<M; u++)
        {
            D[s][u] = FINITY;
            D[u][s] = FINITY;
        }
        for (u = 0; u<M; u++)
            for (v = 0; v<M; v++)
                for (w = 0; w<M; w++)
                {
                    if (D[v][u] + D[u][w]<D[v][w])
                        D[v][w] = D[v][u] + D[u][w];
                }
        flag = 0;
        for (u = 0; u<M; u++)
            for (v = 0; v<M; v++)
                if ((u != v) && (u != s) && (v != s) && (D[u][v] == FINITY))
                {
                    flag = 1; u = M; v = M;
                }
        if (flag)
        {
            disp="序号为 "+QString::number(s,10) +" 的节点是关节点\n";
            l++;
        }
    }
    if (l == 0)
        disp="本图没有关节点";

    ui->textBrowser->setPlainText(disp);
}

Articulation_g::~Articulation_g()
{
    delete ui;
}

void Articulation_g::on_pushButton_clicked()
{
    QString disway;


            Articulation(g);
           ui->textBrowser->moveCursor(QTextCursor::End);

}

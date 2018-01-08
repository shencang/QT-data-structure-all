#include "more_vertex_road.h"
#include "ui_more_vertex_road.h"
#include <QPainter>
#include"main_data.h"
#include"qmessagebox.h"
#include"algorithm_more_ver.cpp"
extern Photograph *g;
extern int m_ui_num[12];
extern int m_ui_n_num;


more_vertex_road::more_vertex_road(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::more_vertex_road)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}

void more_vertex_road::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/math_map.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(10, 80, 1220, 900, pix);


}


int more_vertex_road::min(int a, int b)
{
    if (a>b)
        return b;
    else
        return a;
}
//两两交换顺序
void more_vertex_road::swap(int *a, int *b)
{
    int m;
    m = *a;
    *a = *b;
    *b = m;
}

//进行全排列  寻找经过多点的所有路径
void more_vertex_road::all_arrange(Photograph *g, int list[], int k, int m)
{
    int i;int distance = 0;
    QString betterway="路径距离：";
    if (k > m)
    {
        distance = 0;
        for (i = 0; i <m; i++)
        {
            distance += dist[vertex[i]][vertex[i + 1]];    //计算每种排列的距离
        }
        if (distance == mindis)
        {
            betterway=betterway+QString::number(distance,10)+"\n";
            for (i = 0; i <= m; i++)
            {
               betterway=betterway+"("+QString::QString::number(list[i],10)+")"+QString::fromStdString(g->n_information[list[i]].Scenic_spot_name);    //当全排列的距离等于遍历时输出
                if (i != m)
                   betterway=betterway+"->";ui->result->setPlainText(betterway);
            }
            distance = 0;

        }
    }
    else
    {
        for (i = k; i <= m; i++)
        {
            swap(&list[k], &list[i]);
            all_arrange(g, list, k + 1, m);
            swap(&list[k], &list[i]);
        }
    }



}
//用dfs进行图的遍历
int more_vertex_road::dfs(int i, int  n)
{
    int length = INF;                 //初始化为无穷大
    visit[i] = 1;                      //景点已访问记为1
    int j;
    for (j = 1; j < n; j++)
    {
        if (!visit[j])
        {
            length = min(dfs(j, n) + dist[vertex[i]][vertex[j]], length); //dfs遍历过的路径 + 点走下个点的路径的长度   与length 取小
        }
    }
    visit[i] = 0;                  //回溯到上一层标记为0
    if (length == INF)
        length = 0;
    return length;
}

//使用floyd求出任意两点间的最短路径
void more_vertex_road::floyd(Photograph *g)
{
    int i, j, k;
    for (i = 0; i<g->n; i++)                            //进行初始化
        for (j = 0; j<g->n; j++)
        {
            dist[i][j] = g->e_information[i][j];
            if (i != j && dist[i][j]<FINITY)
                path[i][j] = i;
            else
                path[i][j] = -1;
        }
    for (k = 0; k<g->n; k++)                                 //递推两点间的最短路径
        for (i = 0; i<g->n; i++)
            for (j = 0; j<g->n; j++)
            {
                if (dist[i][j]>(dist[i][k] + dist[k][j]))
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    path[i][j] = k;
                }
            }


}


void more_vertex_road::on_find_dtn_clicked()
{


    int n, i=0,j=0;
    n=m_ui_n_num;

    for (i = 0; i<M; i++)
    {
        if(m_ui_num[i]==1)
        {
                vertex[j]=i;
                j++;
                if(j==m_ui_n_num+1){break;}
        }
    }
    memset(visit, 0, sizeof(visit));      //置零

    floyd(g);
    int length = dfs(0, n);
    mindis = length;
    all_arrange(g, vertex, 1, n - 1);

    m_ui_n_num=0;
    for(int sqa=0;sqa<M;sqa++)
    {
        m_ui_num[sqa]=0;
    }

}

more_vertex_road::~more_vertex_road()
{
    delete ui;
}


void more_vertex_road::on_btn1_clicked()
{
    m_ui_n_num++;
    m_ui_num[0]=1;
}


void more_vertex_road::on_btn2_clicked()
{
    m_ui_n_num++;
    m_ui_num[1]=1;
}

void more_vertex_road::on_btn3_clicked()
{
    m_ui_n_num++;
    m_ui_num[2]=1;
}

void more_vertex_road::on_btn4_clicked()
{
    m_ui_n_num++;
    m_ui_num[3]=1;
}

void more_vertex_road::on_btn5_clicked()
{
    m_ui_n_num++;
    m_ui_num[4]=1;
}

void more_vertex_road::on_btn6_clicked()
{
    m_ui_n_num++;
    m_ui_num[5]=1;
}

void more_vertex_road::on_btn7_clicked()
{
    m_ui_n_num++;
    m_ui_num[6]=1;
}

void more_vertex_road::on_btn8_clicked()
{
    m_ui_n_num++;
    m_ui_num[7]=1;
}

void more_vertex_road::on_btn9_clicked()
{
    m_ui_n_num++;
    m_ui_num[8]=1;
}

void more_vertex_road::on_btn10_clicked()
{
    m_ui_n_num++;
    m_ui_num[9]=1;
}

void more_vertex_road::on_btn11_clicked()
{
    m_ui_n_num++;
    m_ui_num[10]=1;
}

void more_vertex_road::on_btn12_clicked()
{
    m_ui_n_num++;
    m_ui_num[11]=1;

}

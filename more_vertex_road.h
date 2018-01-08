#ifndef MORE_VERTEX_ROAD_H
#define MORE_VERTEX_ROAD_H
#include"main_data.h"
#include <QDialog>

namespace Ui {
class more_vertex_road;
}

class more_vertex_road : public QDialog
{
    Q_OBJECT

public:
    explicit more_vertex_road(QWidget *parent = 0);
    ~more_vertex_road();
    int path[M][M];                 //路径向量类型
    int dist[M][M];                           //距离向量类型
    int mindis;
    const int INF = 0x3f3f3f3f;//十进制1061109567，表示无穷大
    int visit[36];     //对访问的顶点代号进行标记
    int vertex[24];        //存放访问的景点
                           //求两点中的最小值
   // int ui_num;
    //int ui_n_num;

private:
    Ui::more_vertex_road *ui;

protected:
    void paintEvent(QPaintEvent *);
    void more_vertex_road_s(Photograph *g);
    void floyd(Photograph *g);
    int dfs(int i, int  n);
    void all_arrange(Photograph *g, int list[], int k, int m);
    void swap(int *a, int *b);
    int min(int a, int b);
private slots:
    void on_find_dtn_clicked();
    void on_btn12_clicked();
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn10_clicked();
    void on_btn11_clicked();
};

#endif // MORE_VERTEX_ROAD_H

#ifndef ALL_PATH_N_H
#define ALL_PATH_N_H
#include"main_data.h"
#include <QDialog>

namespace Ui {
class all_path_n;
}

class all_path_n : public QDialog
{
    Q_OBJECT

public:
    explicit all_path_n(QWidget *parent = 0);
    ~all_path_n();

int a = 0;//全局变量，用来记录每对顶点之间的所有路径的条数
int visited[M];//全局数组，用来记录各顶点被访问的情况
int v[M];//全局数组，用来存放路径上的各顶点

private:
    Ui::all_path_n *ui;
protected:
    void paintEvent(QPaintEvent *);
    QString dfs_all_q(Photograph *g, int sta, int end, int d, int mark[], int save[]);
    QString all_path_q(Photograph *g, int sta, int end);


    int FindInformation(Photograph *g, int m);
    void path(Photograph *g, int i, int j, int k);
    void disppath(Photograph *g, int i, int j);
    void SearchAllpath(Photograph *g);
    void two_all(Photograph *g,int m,int n);
private slots:
    void on_find_dtn_clicked();
};

#endif // ALL_PATH_N_H

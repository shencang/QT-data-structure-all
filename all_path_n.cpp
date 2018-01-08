#include "all_path_n.h"
#include "ui_all_path_n.h"
#include <QPainter>
#include"qmessagebox.h"
#include"algorithm_all.cpp"
#include<stack>
#include<vector>
extern Photograph *g;
extern QString textdata;


all_path_n::all_path_n(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::all_path_n)
{
    ui->setupUi(this);
    setWindowTitle("校园导游资讯系统");
}


void all_path_n::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/imgs/math_map.jpg");
    painter.translate(0, 0);
    painter.drawPixmap(10, 80, 1220, 900, pix);


}
void all_path_n::two_all(Photograph *g,int m,int n) {
    //设置栈
    QString str;
    int node_num = 11;
    int tmp;
    bool* is_in_stack = new bool[node_num +1]();
    stack<int>node_stack;
    vector<vector<int>>paths;//存储所有路径
    vector<int>path;//存储单挑路径
    int c_position = 0;
    //起点开始
    //起点入栈
    node_stack.push(g->n_information[m].num);
    is_in_stack[0] = 1;//设置起点已入栈，1表示在栈中，0 表示不在
    int top_element;//记录栈顶元素
    while (!node_stack.empty())
    {
        top_element = node_stack.top();//查看栈顶元素，判断是否已经到达终点
        if (top_element == n)//若到达终点，输出路径，弹出栈中两个点，设置出栈状态
        {
            while (!node_stack.empty())
            {
                tmp = node_stack.top();
                node_stack.pop();
                path.push_back(tmp);
            }
            paths.push_back(path);//将路径加入路径组
            for (vector<int>::reverse_iterator rit = path.rbegin(); rit != path.rend(); rit++)
            {
                node_stack.push(*rit);
            }
            path.clear();//清除单条路径

            node_stack.pop();
            is_in_stack[top_element] = 0;
            c_position = node_stack.top();//记录位置，以便从该位置之后进行搜索
            top_element = node_stack.top();
            node_stack.pop();
            is_in_stack[top_element] = 0; //cout << vis[top_element];
        }
        else
        {
            int i = 0;
            for (i = c_position + 1; i <node_num + 2; i++)
            {

                if (is_in_stack[i] == 0 && (g->e_information[top_element][i] != 0)&&(g->e_information[top_element][i] != FINITY))//未入栈，而且节点之间有边相连
                {

                    is_in_stack[i] = 1;//stack In
                    node_stack.push(g->n_information[i].num);//入栈
                    c_position = 0;//位置置零，是因为从记录的位置开始搜索完以后，在新的行上搜索，自然从零开始，以免漏掉节点
                    break;
                }
            }
            if (i == node_num + 2)
            {
                top_element = node_stack.top();
                is_in_stack[top_element] = 0;
                c_position = node_stack.top();
                node_stack.pop();
            }
        }
    }
    //========================  输出 ==========================
    //逆向
    for (int i = 0; i <paths.size(); i++)
    {
        str=str+ "路径" ;
        str= str+QString::number( i,10) + ": ";
        for (int j = paths[i].size() - 1; j >= 0; j--)
        {
            if (j == 0)
            {
                str= str+QString::fromStdString(g->n_information[paths[i][j]].Scenic_spot_name);
            }
            else
            {
                str= str+QString::fromStdString(g->n_information[paths[i][j]].Scenic_spot_name);
                        str= str+  "->";
            }

        }
        str= str+ "\n";
    }
     ui->result->insertPlainText(str);

}




all_path_n::~all_path_n()
{
    delete ui;

}

void all_path_n::on_find_dtn_clicked()
{
    ui->result->clear();
    //QString allway,allways;
    int a,b;
    bool ok;
    a=ui->first_place->text().toInt(&ok,10);
    b =ui->second_place->text().toInt(&ok,10);


     if((a<12)&&(a>=0)&&(b<12)&&(b>=0))
     {
        two_all(g,a,b);

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

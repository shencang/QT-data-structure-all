#include"main_data.h"
void min_two(Photograph *g, int m, int n, PATH path, TEM tem)
{
    int num,l=0;
    int start = g->e_information[m][n];
    for (int i = 0; i < g->n; i++)             //初始化
    {
        tem[i][0] = 0;
        tem[i][1] = g->e_information[m][i];
        if (tem[i][1]<FINITY&&tem[i][1] != 0)
            path[i] = m;
        else
            path[i] = -1;
    }
    tem[m][0] = 1;
    for (int k = 0; k<g->n; k++)          //Dijkstra
    {
        int min = FINITY;
        for (int i = 0; i < g->n; i++)
        {
            if (tem[i][0] != 1 && (tem[i][1]<min))     //最小值所对应的下标
            {
                min = tem[i][1];
                num = i;
            }
        }
        if (min == FINITY)
            return;
        tem[num][0] = 1;
        for (int j = 0; j < g->n; j++)
        {
            if ((tem[j][0] != 1) && (g->e_information[num][j] + min < tem[j][1]))
            {
                tem[j][1] = g->e_information[num][j] + min;
                path[j] = num;
            }
        }
    }
}


void show_min_two(Photograph *g, int m, int n, PATH path, PATH min_path)
{
    int l = 0;
    int st[M], pre, top = -1;
    st[++top] = n;
    pre = path[n];
    while (pre != -1)
    {
        st[++top] = pre;
        pre = path[pre];
    }
    while (top>0)
    {
        min_path[l] = st[top--];
        l++;
    }


}


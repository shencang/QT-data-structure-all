#ifndef MAIN_DATA_H
#define MAIN_DATA_H
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<string>
using namespace std;

#define FINITY 50000                   //无穷大
#define M 12                           //图的最大顶点数
typedef char PATH[M];                  //路径存放
typedef int TEM[M][2];                 //Dijkatra算法数组
typedef int datatype_e;



class  datatype_n
{
public:
    int num;

        string Scenic_spot_name;
        string Opening_Hours;
        string Scenic_spots_type;
        string Brief_introduction;
        string Charges;
        string Key_word;

};
class Photograph
 {
 public:
     datatype_n n_information[M];              //顶点信息
     datatype_e e_information[M][M];           //邻接矩阵
     int n, e;                                 //图的顶点数与边数
 };


#endif // MAIN_DATA_H

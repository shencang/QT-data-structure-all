#include"main_data.h"
#include "dialog.h"
#include <QApplication>
#include"welcome.h"
#include"dis_map.h"
#include"dis_info.h"
#include <QTextCodec>
#include"min_two_n.h"
#include"all_path_n.h"
#include"more_vertex_road.h"
#include"articulation_g.h"
#include"fing_key.h"
Photograph *g;      //声明一个全局变量用于窗体间传值
QString textdata;
int m_ui_num[12];
int m_ui_n_num;

 void creat_e(Photograph *g)
 {
     int matrix[15][3] =
     {  0, 1, 340, 0, 5, 430, 1, 2, 570, 2, 3, 350, 2, 6, 270, 3, 4, 250, 3, 6, 380, 4, 6, 520, 5, 7, 320, 6, 11, 420, 7, 9, 410, 7, 10, 340, 8, 9, 570, 9, 10, 450, 10, 11, 720 };
     int i, j, k;
     g->n = 12;
     g->e = 15;
     for (i = 0; i<g->n; i++)
         g->n_information[i].num = i;
     for (i = 0; i < g->n; i++)
     {
         for (j = 0; j < g->n; j++)
         {
             if (i == j)
                 g->e_information[i][j] = 0;
             else
                 g->e_information[i][j] = FINITY;
         }
     }
     for (k = 0; k < g->e; k++)
     {
         g->e_information[matrix[k][0]][matrix[k][1]] = matrix[k][2];
         g->e_information[matrix[k][1]][matrix[k][0]] = matrix[k][2];
     }

 }


 void creat_n(Photograph *g)
 {
     g->n_information[0].Scenic_spot_name = "二龙山";
         g->n_information[0].Opening_Hours = "全天";
         g->n_information[0].Scenic_spots_type = "自然景观";
         g->n_information[0].Charges = "免费";
         g->n_information[0].Key_word = "山";
         g->n_information[0].Brief_introduction = "二龙山又名烈石山，西临汾河，地势险要，是太原的北大门。解放战争期间，阎锡山军队在烈石山上修建了大量军事设施，现保存有碉堡3座、地下暗道1处。二龙山景区位于山西省中北大学校内，是少有的和校园相依托的风景区。山势不太高，但是景色秀丽，山上鲜花遍布，景点众多，二龙山旅游风景区是太原为数不多的避暑胜地。";

         g->n_information[1].Scenic_spot_name = "科艺苑";
         g->n_information[1].Opening_Hours = "全天";
         g->n_information[1].Scenic_spots_type = "人造设施";
         g->n_information[1].Charges = "免费";
         g->n_information[1].Key_word = "礼堂";
         g->n_information[1].Brief_introduction = "是中北大学校内最大的礼堂，承办各种大型的庆典和节日晚会中北大学校内艺术与文化碰撞的地方。";

         g->n_information[2].Scenic_spot_name = "图书馆";
         g->n_information[2].Opening_Hours = "6：30-21：40";
         g->n_information[2].Scenic_spots_type = "服务设施";
         g->n_information[2].Charges = "免费";
         g->n_information[2].Key_word = "知识";
         g->n_information[2].Brief_introduction = "中北大学图书馆坐落在校园中央，馆舍始建于2002年，完工于2006年，学校图书馆馆舍总面积46707.48平方米，馆藏图书200多万册。";

         g->n_information[3].Scenic_spot_name = "游泳馆";
         g->n_information[3].Opening_Hours = "9：00-21：00";
         g->n_information[3].Scenic_spots_type = "人造设施";
         g->n_information[3].Charges = "10元/次";
         g->n_information[3].Key_word = "运动";
         g->n_information[3].Brief_introduction = "中北大学游泳馆环境优美、水质优良。是强身健体、提高身体素质的好地方。";

         g->n_information[4].Scenic_spot_name = "瑾瑜国际会议中心";
         g->n_information[4].Opening_Hours = "全天";
         g->n_information[4].Scenic_spots_type = "人造设施";
         g->n_information[4].Charges = "免费";
         g->n_information[4].Key_word = "会议";
         g->n_information[4].Brief_introduction = "杰出校友李璟瑜、张志瑾夫妇荣归母校，为母校70华诞捐献1000万元，这正是瑾瑜国际会议中心会议中心名字的由来。";

         g->n_information[5].Scenic_spot_name = "柏林园";
         g->n_information[5].Opening_Hours = "全天";
         g->n_information[5].Scenic_spots_type = "人造景观";
         g->n_information[5].Charges = "免费";
         g->n_information[5].Key_word = "清幽";
         g->n_information[5].Brief_introduction = "柏林园位于中北大学校内，是太原市七所四星级公园之一，西倚二龙山，南临汾河水，毗邻太原名胜窦大夫祠，青山碧水，风景旖旎。附近有二龙山，千佛洞、中华傅山园、窦大夫祠、多福寺等人文、自然景观。公园内有成年柏树数百棵，迎春花、桃花、牡丹花等植物。公园门口有一座人工湖，并且还有一处喷泉，柏林园长廊、孔子塑像，凉亭等别具特色的小景点镶嵌其中。“龙山飞瀑，柏林冬色”，构成太原八绝，已经成为太原市居民的好去处。";

         g->n_information[6].Scenic_spot_name = "行知广场";
         g->n_information[6].Opening_Hours = "全天";
         g->n_information[6].Scenic_spots_type = "人造设施";
         g->n_information[6].Charges = "免费";
         g->n_information[6].Key_word = "娱乐";
         g->n_information[6].Brief_introduction = "行知广场是中北大学最大的广场，广场上的国旗迎风飘扬，这里举办过无数迸发青春色彩的活动，是一个书写着青春活力的广场。";

         g->n_information[7].Scenic_spot_name = "校史馆";
         g->n_information[7].Opening_Hours = "9：00-17：00";
         g->n_information[7].Scenic_spots_type = "人造设施";
         g->n_information[7].Charges = "免费";
         g->n_information[7].Key_word = "历史";
         g->n_information[7].Brief_introduction = "中北大学校史馆由阎锡山创立，清华大学营建系设计，砖木结构，建筑总高10.38m，建筑面积为362.84m2，在进山中学时期作为图书馆使用，中北大学时期用作校史展示。";

         g->n_information[8].Scenic_spot_name = "窦大夫祠";
         g->n_information[8].Opening_Hours = "8：00-17：00";
         g->n_information[8].Scenic_spots_type = "人造景观";
         g->n_information[8].Charges = "20元/人，学生票半价";
         g->n_information[8].Key_word = "人物";
         g->n_information[8].Brief_introduction = "窦大夫祠又称英济祠、烈石神祠，位于太原市西北20公里的上兰村，在汾河峡谷左侧；北靠二龙山，左傍烈石寒泉，右临赵戴文祠，是祀奉春秋时晋国大夫窦犨（chōu）的祠庙。窦犨，字鸣犊，封地在今太原，曾于狼孟（今阳曲黄寨）开渠兴利，因而得到后人的纪念；宋代元丰八年（1085）神宗封之为英济侯．故祠庙又名英济祠。";

         g->n_information[9].Scenic_spot_name = "彭德怀雕像";
         g->n_information[9].Opening_Hours = "全天";
         g->n_information[9].Scenic_spots_type = "人造景观";
         g->n_information[9].Charges = "免费";
         g->n_information[9].Key_word = "人物";
         g->n_information[9].Brief_introduction = "为纪念我党我军德高望重的老一辈无产阶级革命军、军事家、政治家、中国人民解放军领导人之一——彭德怀元帅诞辰100周年，我校在德怀楼前新建一座彭德怀元帅骑战马塑像。塑像平台长9米，宽6.6米，高0.81米，南北设台阶各5步。平台里面用白色花岗岩镶贴，围栏用白色汉白玉制作。塑像底座长5米，宽2.66米，高1.77米，用印度红花岗岩镶贴。塑像主体用青铜铸造，高5.63米。";

         g->n_information[10].Scenic_spot_name = "99式坦克模型";
         g->n_information[10].Opening_Hours = "全天";
         g->n_information[10].Scenic_spots_type = "人造景观";
         g->n_information[10].Charges = "免费";
         g->n_information[10].Key_word = "武器";
         g->n_information[10].Brief_introduction = "中国人民解放军陆军第38集团军、山西省军区共同赠送我校先进坦克模型一辆。坦克陈列在我校新南区人造草坪足球场南侧绿化带内，坐落在长6米，宽3.9米，高0.3米的花岗岩底座上。底座四周的平台宽0.9米，用绿色花岗岩镶贴。为保护坦克的完整性，四周做了防护网，长10.7米，宽8.6米，高2米，同时，在防护网周边地面铺设了2.4米的草坪砖。";

         g->n_information[11].Scenic_spot_name = "中北酒店";
         g->n_information[11].Opening_Hours = "全天";
         g->n_information[11].Scenic_spots_type = "服务设施";
         g->n_information[11].Charges = "150元起";
         g->n_information[11].Key_word = "住宿";
         g->n_information[11].Brief_introduction = "中北酒店座落于中北大学新南区，紧邻兰村风景名胜区――崛围山、烈石寒泉、傅山旅游文化村、窦大夫祠堂等多个旅游景点，还有超市，公园，学校等基础设施环绕周围，旅游购物极其便捷，地处优越地段，交通十分便捷。中北酒店装潢简洁明快，格调高雅，客房环境温暖惬意。简约现代的家具、全天热水淋浴、空调、电视、电话、24小时宽带上网等设施一应俱全，并且提供营养可口的自助早餐，更有家人贴心的服务，让您拥有一个干净、温暖、安全的食宿环境。";
 }



int main(int argc, char *argv[])
{



    QApplication a(argc, argv);

    Dialog w;
    welcome mina;
    dis_map dismap;


         g = (Photograph *)new  Photograph;
         creat_e(g);
         creat_n(g); //获取值赋值给全局变量

    mina.show();



        if(mina.exec() == QDialog::Accepted) // 利用Accepted返回值判断按钮是否被按下
       {

             w.show();
                if(w.exec() == QDialog::Accepted)
                    {
                       dismap.show();

                    }


            // 如果被按下，显示主窗口
            return a.exec();              // 程序一直执行，直到主窗口关闭
        }
        else return 0;          //如果没有被按下，则不会进入主窗口，整个程序结束运行

}

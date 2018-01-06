#ifndef DIS_INFO_H
#define DIS_INFO_H

#include <QDialog>
#include"main_data.h"
namespace Ui {
class dis_info;
}

class dis_info : public QDialog
{
    Q_OBJECT

public:

    explicit dis_info(QWidget *parent = 0);


    ~dis_info();


private:
    Ui::dis_info *ui;
protected:
    //void paintEvent(QPaintEvent *s);

private slots:
    void on_Button00_clicked();
    void on_Button02_clicked();
    void on_Button01_clicked();
    void on_Button03_clicked();
    void on_Button04_clicked();
    void on_Button05_clicked();
    void on_Button06_clicked();
    void on_Button07_clicked();
    void on_Button08_clicked();
    void on_Button09_clicked();
    void on_Button10_clicked();
    void on_Button11_clicked();
};

#endif // DIS_INFO_H

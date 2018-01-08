#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"main_data.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    bool save();
    bool saveAs();    // 另存为操作
    bool saveFile(const QString &fileName);



private:
    Ui::Dialog *ui;
    // 为真表示文件没有保存过，为假表示文件已经被保存过了
    bool isUntitled;
    // 保存当前文件的路径
    QString curFile;

     QMediaPlayer *musicPlayer;

protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_finddata_btn_clicked();
    void on_dis_btn_clicked();
    void on_djt_btn_clicked();
    void on_floyad_btn_2_clicked();
    void on_nice_btn_clicked();
    void on_import_btn_clicked();
    void on_output_btn_clicked();
    void on_btn_2_clicked();
    void on_exit_btn_clicked();
};

#endif // DIALOG_H

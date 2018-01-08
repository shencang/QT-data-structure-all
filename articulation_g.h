#ifndef ARTICULATION_G_H
#define ARTICULATION_G_H
#include"main_data.h"
#include <QDialog>

namespace Ui {
class Articulation_g;
}

class Articulation_g : public QDialog
{
    Q_OBJECT

public:
    explicit Articulation_g(QWidget *parent = 0);
    ~Articulation_g();

private:
    Ui::Articulation_g *ui;
protected:
    void paintEvent(QPaintEvent *);
    void Articulation(Photograph *g);
private slots:
    void on_pushButton_clicked();
};

#endif // ARTICULATION_G_H

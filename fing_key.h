#ifndef FING_KEY_H
#define FING_KEY_H
#include"main_data.h"
#include <QDialog>

namespace Ui {
class fing_key;
}

class fing_key : public QDialog
{
    Q_OBJECT

public:
    explicit fing_key(QWidget *parent = 0);
    ~fing_key();

private:
    Ui::fing_key *ui;
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();
};

#endif // FING_KEY_H

#ifndef MIN_TWO_N_H
#define MIN_TWO_N_H

#include <QDialog>

namespace Ui {
class min_two_n;
}

class min_two_n : public QDialog
{
    Q_OBJECT

public:
    explicit min_two_n(QWidget *parent = 0);
    ~min_two_n();

private:
    Ui::min_two_n *ui;
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_find_dtn_clicked();
};

#endif // MIN_TWO_N_H

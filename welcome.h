#ifndef WELCOME_H
#define WELCOME_H

#include <QDialog>

namespace Ui {
class welcome;
}

class welcome : public QDialog
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = 0);
    ~welcome();

private:
    Ui::welcome *ui;
protected:
    void paintEvent(QPaintEvent *);
private slots:
    void on_pushButton_clicked();
};

#endif // WELCOME_H

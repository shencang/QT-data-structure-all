#include "logo.h"
#include "ui_logo.h"

logo::logo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logo)
{
    ui->setupUi(this);
}

logo::~logo()
{
    delete ui;
}

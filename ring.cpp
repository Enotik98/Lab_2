#include "ring.h"
#include "ui_ring.h"

Ring::Ring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ring)
{
    ui->setupUi(this);
}

Ring::~Ring()
{
    delete ui;
}
void Ring::call(){
    show();
    ui->label->setText("Time Out!");
}

#include "timerw.h"
#include "ui_timerw.h"

TimerW::TimerW(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimerW)
{
    ui->setupUi(this);
}

TimerW::~TimerW()
{
    delete ui;
}

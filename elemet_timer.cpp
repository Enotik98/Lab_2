#include "elemet_timer.h"
#include "ui_elemet_timer.h"

Elemet_Timer::Elemet_Timer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Elemet_Timer)
{
    ui->setupUi(this);
    timer = new QTimer;
    _pause.setHMS(0, 0, 0);
    ui->NameEdit->setMaxLength(8);
    ui->TimesToRepeat->setValue(1);
    ui->NameEdit->setText("Timer"+QString::number(current_index_timer));
}

Elemet_Timer::~Elemet_Timer()
{
    timer->stop();
    delete ui;
    delete timer;
}

void Elemet_Timer::on_set_time_clicked()
{
    if(ui->NameEdit->text().isEmpty()){
        Name = "Timer"+QString::number(current_index_timer);
    }else{
        Name = ui->NameEdit->text();
    }
    current_index_timer++;
    time = ui->timeEdit->time();
    TimesToRepeat = ui->TimesToRepeat->value();
    emit return_element_timer(this);
    this->close();
    connect(timer, SIGNAL(timeout()), this, SLOT(stop_timer()));
    if(TimesToRepeat > 0){
        timer->start(time.msecsSinceStartOfDay());
    }

}
void Elemet_Timer::stop_timer(){
    TimesToRepeat--;
    if(TimesToRepeat == 0){
        this->timer->stop();
    }
}


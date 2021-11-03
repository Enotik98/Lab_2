#include "ring.h"
#include "ui_ring.h"
#include <QDebug>

Ring::Ring(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ring)
{
    ui->setupUi(this);


    player.setMedia(QUrl::fromLocalFile("/Users/imac/Desktop/sql/build-lab_2-Desktop_Qt_5_12_11_clang_64bit-Debug/lab_2.app/Contents/MacOS/file/lubimka.mp3"));
    player.setVolume(50);
}

Ring::~Ring()
{
    delete ui;
}
void Ring::call(){
    show();
    this->setWindowTitle("Ring");
    ui->label->setText("Time Out!");

    player.play();
}

//void Ring::close_event(QCloseEvent *event){
//    this->player.stop();
//}

void Ring::on_pushButton_clicked()
{
    player.stop();
    this->close();

}


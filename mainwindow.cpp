#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(timers, SIGNAL(timer_ring()), this, SLOT(call_ring()));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_timer_clicked()
{
    timers->show();
    timers->setWindowTitle("Timer");
}
void MainWindow::call_ring(){
    general_ring.call();
}


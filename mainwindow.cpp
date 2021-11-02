#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    this->setStyleSheet("background-color: red;");
    connect(timers, SIGNAL(timer_ring()), this, SLOT(call_ring()));
    connect(alarms, SIGNAL(alarm_ring()), this, SLOT(call_ring()));
    QString path = QDir::currentPath();

    path = path.left(path.lastIndexOf(QChar('/')));
    path += "/Users/imac/Desktop/sql/build-lab_2-Desktop_Qt_5_12_11_clang_64bit-Debug/lab_2.app/Contents/MacOS/file";
    general_ring.file_dialog.setDirectory(path);
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
    bool flag = ui->not_disturb->checkState();
    if(!flag){
        general_ring.call();
    }else{
        QMessageBox ms;
        ms.warning(this, "Timer", "Time out of timer");
    }
}

void MainWindow::on_alarm_clicked()
{
    alarms->show();
    alarms->setWindowTitle("Alarm");

}





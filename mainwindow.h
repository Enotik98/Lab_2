#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "timerw.h"
#include "ring.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_timer_clicked();
    void call_ring();

private:
    Ui::MainWindow *ui;
    TimerW *timers = new TimerW;
    Ring general_ring;



};
#endif // MAINWINDOW_H

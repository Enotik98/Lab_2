#ifndef TIMERW_H
#define TIMERW_H

#include <QDialog>

namespace Ui {
class TimerW;
}

class TimerW : public QDialog
{
    Q_OBJECT

public:
    explicit TimerW(QWidget *parent = nullptr);
    ~TimerW();

private:
    Ui::TimerW *ui;
};

#endif // TIMERW_H

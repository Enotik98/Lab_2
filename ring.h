#ifndef RING_H
#define RING_H

#include <QDialog>


namespace Ui {
class Ring;
}

class Ring : public QDialog
{
    Q_OBJECT

public:
    explicit Ring(QWidget *parent = nullptr);
    ~Ring();

    void call();
private:
    Ui::Ring *ui;
};

#endif // RING_H

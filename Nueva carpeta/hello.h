#ifndef HELLO_H
#define HELLO_H

#include <QMainWindow>
#include <instrucciones.h>
namespace Ui {
class hello;
}

class hello : public QMainWindow
{
    Q_OBJECT

public:
    explicit hello(QWidget *parent = 0);
    ~hello();



private slots:
    void on_pushButton1_clicked();

    void on_jugar_clicked();

private:
    Ui::hello *ui;
};

#endif // HELLO_H

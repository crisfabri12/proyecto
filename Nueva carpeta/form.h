#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QLabel>
#include <QMediaPlayer>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    void crear_entorno();
    void keyPressEvent(QKeyEvent *event);


private:
    Ui::Form *ui;
    QMediaPlayer* player;

};

#endif // FORM_H

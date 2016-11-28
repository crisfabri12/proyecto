#include "hello.h"
#include "ui_hello.h"
#include "form.h"


hello::hello(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hello)
{
    ui->setupUi(this);
}

hello::~hello()
{
    delete ui;
}


void hello::on_pushButton1_clicked()
{
    Instrucciones instruccion;
    instruccion.setModal(true);
    instruccion.exec();
}

void hello::on_jugar_clicked()
{
    Form *form = new Form();
    form->show();
    close();



}

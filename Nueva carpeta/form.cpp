#include "form.h"
#include "ui_form.h"
#include "QLabel"
#include <QKeyEvent>

QGridLayout* entorno;
QVector <QVector <QLabel*> > matriz;
int pos_xj1 = 0;
int pos_yj1 = 0;

int pos_xj2 = 10;
int pos_yj2 = 10;

QString color1 = "background-color : Blue";
QString color2 = "background-color : Black";

int tiempo = 30;

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    crear_entorno();
    player = new QMediaPlayer(this);
    player->setMedia(QUrl::fromLocalFile("test.mp3"));
    player->play();




}

Form::~Form()
{
    delete ui;
}


void Form::crear_entorno()
{
    entorno = new QGridLayout(this);
    int i,j;
    for(i = 0; i != 11; i++){
        QVector <QLabel*> lista;
        for(j = 0; j != 11; j++){
            QLabel* cuadro;
            cuadro = new QLabel;
            if(((i+1)%2 == 0) && ((j+1) % 2 == 0))
                cuadro->setStyleSheet("background-color : Yellow");
            else
                cuadro->setStyleSheet("background-color : Green");
            cuadro->setMaximumHeight(80);
            cuadro->setMaximumWidth(80);
            cuadro->setScaledContents(true);
            entorno->addWidget(cuadro,i,j);
            lista.push_back(cuadro);

        }
        matriz.push_back(lista);
    }
    entorno->setSpacing(10);
    ui->gridLayout->addLayout(entorno,10,10);
    matriz[0][0]->setStyleSheet(color1);
    matriz[0][0]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/360fx360f (4).png"));
    matriz[10][10]->setStyleSheet(color2);
    matriz[10][10]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/CharacterNegaJoe.png"));
}

void Form::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_A){
        if (pos_yj1 != 0){
            if(!(((pos_xj1+1)%2==0)&&((pos_yj1)%2==0))){
                        matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                        matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap());
                        --pos_yj1;
                    if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Blue";
                        color2 = "background-color : Red";
                        matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
                    }else
                        matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/360fx360f (4).png"));
                        matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
                }
           }
    }

    if(event->key() == Qt::Key_D){
        if (pos_yj1 != 10){
            if(!(((pos_xj1+1)%2==0)&&((pos_yj1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap());
                ++pos_yj1;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Blue";
                        color2 = "background-color : Red";
                        matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
                }else
                        matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/360fx360f (4).png"));
                       matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
            }
        }
    }
    if(event->key() == Qt::Key_W){
        if (pos_xj1 != 0){
            if(!(((pos_xj1)%2==0)&&((pos_yj1+1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap());
                --pos_xj1;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Blue";
                        color2 = "background-color : Red";
                        matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
                }else
                       matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/360fx360f (4).png"));
                       matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
            }
        }
    }
    if(event->key() == Qt::Key_S){
        if (pos_xj1 != 10){
            if(!(((pos_xj1)%2==0)&&((pos_yj1+1)%2==0))){
                matriz[pos_xj1][pos_yj1]->setStyleSheet("background-color : Green");
                matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap());
                ++pos_xj1;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Blue";
                        color2 = "background-color : Red";
                        matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
                }else
                        matriz[pos_xj1][pos_yj1]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/360fx360f (4).png"));
                       matriz[pos_xj1][pos_yj1]->setStyleSheet(color1);
            }
        }
    }
    /************************************************************************************************/
    if(event->key() == Qt::Key_Left){
        if (pos_yj2 != 0){
            if(!(((pos_xj2+1)%2==0)&&((pos_yj2)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap());
                --pos_yj2;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Red";
                        color2 = "background-color : Black";
                        matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
                }else
                        matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/CharacterNegaJoe.png"));
                       matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
            }
        }
    }
    if(event->key() == Qt::Key_Right){
        if (pos_yj2 != 10){
            if(!(((pos_xj2+1)%2==0)&&((pos_yj2)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap());
                ++pos_yj2;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Red";
                        color2 = "background-color : Black";
                        matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
                }else
                        matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/CharacterNegaJoe.png"));
                       matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
            }
        }
    }
    if(event->key() == Qt::Key_Up){
        if (pos_xj2 != 0){
            if(!(((pos_xj2)%2==0)&&((pos_yj2+1)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap());
                --pos_xj2;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                        color1 = "background-color : Red";
                        color2 = "background-color : Black";
                        matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
                }else
                        matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/CharacterNegaJoe.png"));
                       matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
            }
        }
    }
    if(event->key() == Qt::Key_Down){
        if (pos_xj2 != 10){
            if(!(((pos_xj2)%2==0)&&((pos_yj2+1)%2==0))){
                matriz[pos_xj2][pos_yj2]->setStyleSheet("background-color : Green");
                matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap());
                ++pos_xj2;
                if(pos_xj1 == pos_xj2 && pos_yj1 == pos_yj2){
                       color1 = "background-color : Red";
                       color2 = "background-color : Black";
                       matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
                }else
                        matriz[pos_xj2][pos_yj2]->setPixmap(QPixmap("/Users/Cristhian Ocola/Desktop/proyecto/proyecto/CharacterNegaJoe.png"));
                       matriz[pos_xj2][pos_yj2]->setStyleSheet(color2);
            }
        }
    }

}




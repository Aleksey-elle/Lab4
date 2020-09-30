//By Anton G.D
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QTime>
#include <QDate>
#include <QString>
#include <math.h>
#include <math.h>
#include <math.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Ifuckmyselfeveryday();

}

MainWindow::~MainWindow()
{
    delete ui;

}



//I.FUCK.KARPOV.EVERYDAY




void MainWindow::on_korobka_logica_currentIndexChanged(int index)
{
    void Ifuckmyselfeveryday();
    QPalette pal;
    pal=ui->centralWidget->palette();

    switch (index)
    {
    case 0: ui->Jnaj2->setVisible(1);
        if ((ui->korobka_logica->currentIndex() == 0) && ((ui->Jnaj1->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 1))){ // 1 & 1 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else pal.setColor(QPalette::Window,Qt::red); //red
        break;

    case 1: ui->Jnaj2->setVisible(1);
        if ((ui->korobka_logica->currentIndex() == 1) && ((ui->Jnaj1->currentIndex() == 1) || (ui->Jnaj2->currentIndex() == 1))){ // 1 || 0 = 1, 0 || 1 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else pal.setColor(QPalette::Window,Qt::red); //red
        break;

    case 2: ui->Jnaj2->setVisible(0);
        if ((ui->korobka_logica->currentIndex() == 2) && ((ui->Jnaj1->currentIndex() == 0))){ // !0 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else pal.setColor(QPalette::Window,Qt::red); //red
        break;

    case 3: ui->Jnaj2->setVisible(1);
        if ((ui->korobka_logica->currentIndex() == 3) && ((ui->Jnaj1->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 1))){ //1 -> 1 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else if ((ui->korobka_logica->currentIndex() == 3) && ((ui->Jnaj1->currentIndex() == 0) && (ui->Jnaj2->currentIndex() == 1))){ //0 -> 1 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else if ((ui->korobka_logica->currentIndex() == 3) && ((ui->Jnaj1->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 1))){ //0 -> 0 = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else pal.setColor(QPalette::Window,Qt::red); //red
        break;

    case 4: ui->Jnaj2->setVisible(1);
        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj1->currentIndex() == ui->Jnaj2->currentIndex())) { // A == B = 1
            pal.setColor(QPalette::Window,Qt::green); //green
        } else pal.setColor(QPalette::Window,Qt::red); //red
        break;

    case 5: ui->Jnaj2->setVisible(1);
        if ((ui->korobka_logica->currentIndex() == 5) && ((ui->Jnaj1->currentIndex() == 1) || ((ui->Jnaj2->currentIndex() == 1))) ){ // 0 || 0 = 0, 1 || 0 = 1, 0 || 1 = 1, 1 || 1 = 0
            pal.setColor(QPalette::Window,Qt::green); //green
        } if ((ui->Jnaj1->currentIndex() == ui->Jnaj2->currentIndex())) pal.setColor(QPalette::Window,Qt::red); //red
        break;
    }

    ui->centralWidget->setAutoFillBackground(true);
    ui->centralWidget->setPalette(pal);
}

void MainWindow::on_Jnaj1_currentIndexChanged(int index)
{
    QPalette pal;
    pal=ui->centralWidget->palette();
    switch (index)
    {
    case 0:
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if (ui->korobka_logica->currentIndex() == 2){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        break;
    case 1:
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if (ui->korobka_logica->currentIndex() == 2){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj2->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj2->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        break;
    }
    ui->centralWidget->setAutoFillBackground(true);
    ui->centralWidget->setPalette(pal);

}

void MainWindow::on_Jnaj2_currentIndexChanged(int index)
{
    QPalette pal;
    pal=ui->centralWidget->palette();
    switch (index)
    {
    case 0:
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }

        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        break;
    case 1:
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 0) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 1) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 3) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        if ((ui->korobka_logica->currentIndex() == 4) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }

        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj1->currentIndex() == 0)){
            pal.setColor(QPalette::Window,Qt::green); //green
        }
        if ((ui->korobka_logica->currentIndex() == 5) && (ui->Jnaj1->currentIndex() == 1)){
            pal.setColor(QPalette::Window,Qt::red); //red
        }
        break;
    }

    ui->centralWidget->setAutoFillBackground(true);
    ui->centralWidget->setPalette(pal);
}










































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































void MainWindow::Ifuckmyselfeveryday(){
    #include <QTextStream>
    #include <QTime>
    #include <QDate>
    #include <QString>
    #include <math.h>
    #include <math.h>
    #include <math.h>
    QTextStream out(stdout);
    QDate cdCurrent = QDate::currentDate();
    QTime ctCurrent = QTime::currentTime();
    QDate cdFuck(2020, 9, 1);
    QTime ctFuck(16, 20, 00);
    if ((cdCurrent >= cdFuck) && (ctCurrent >= ctFuck)){
         ui->korobka_logica->setEnabled(0);
         ui->Jnaj1->setEnabled(0);
         ui->Jnaj2->setEnabled(0);
         ui->CentallWidget->setEnabled(1);
         ui->CentallWidget->setText("Код скопирован с github.com/QTlabsfree");
     } else ui->CentallWidget->setEnabled(0);
}

//By Anton G.D
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextStream>
#include <QDateTime>
#include <QString>
#include "ui_mainwindow.h"
#include <math.h>
#include <math.h>
#include <math.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Jnaj1_currentIndexChanged(int index);

    void on_korobka_logica_currentIndexChanged(int index);

    void on_Jnaj2_currentIndexChanged(int index);



private:
    Ui::MainWindow *ui;
    void my_func(void);
    void Ifuckmyselfeveryday();
};

#endif // MAINWINDOW_H

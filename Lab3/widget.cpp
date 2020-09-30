#include "widget.h"
#include "ui_widget.h"
#include <cmath>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->errorlabel->setVisible(false);
    ui->resultLabel->setVisible(false);
    on_sum_clicked();
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_mul_clicked()//ф-ия деление
{
    {
       ui->labelOp1->setText("Множитель 1");//изменение окна "operand_1" на "Множитель 1"
       ui->labelOp2->setText("Множитель 2");//изменение окна "operand_1" на "Множитель 1"
       ui->labelOp2->setVisible(true);
       ui->operand2->setVisible(true);
       ui->resbutton->setText("Произведение");//изменение окна "resultlabel" на "Произведение"
       ui->errorlabel->setVisible(false);//обнуление окна "errorlabel"
       ui->resultLabel->setVisible(false);//обнуление окна "resultlabel"
    }
}


void Widget::on_sum_clicked()//ф-ия суммирования
{
    ui->labelOp1->setText("Слагаемое 1");//изменение окна "operand_1" на "Слагаемое 1"
    ui->labelOp2->setText("Слагаемое 2");//изменение окна "operand_1" на "Слагаемое 2"
    ui->labelOp2->setVisible(true);
    ui->operand2->setVisible(true);
    ui->resbutton->setText("Сумма");//изменение окна "resultlabel" на "Сумма"
    ui->errorlabel->setVisible(false);//обнуление окна "errorlabel"
    ui->resultLabel->setVisible(false);//обнуление окна "errorlabel"
}

void Widget::on_div_clicked()//ф-ия умножения
{
    ui->labelOp1->setText("Делимое");//изменение окна "operand_1" на "Делимоe"
    ui->labelOp2->setText("Делитель");//изменение окна "operand_1" на "Делитель"
    ui->labelOp2->setVisible(true);
    ui->operand2->setVisible(true);
    ui->resbutton->setText("Частное");//изменение окна "resultlabel" на "Частное"
    ui->errorlabel->setVisible(false);//обнуление окна "errorlabel"
    ui->resultLabel->setVisible(false);//обнуление окна "errorlabel"
}

void Widget::on_sub_clicked()//ф-ия вычитания
{
    ui->labelOp1->setText("Уменьшаемое");//изменение окна "operand_1" на "Уменьшаемое"
    ui->labelOp2->setText("Вычитаемое");//изменение окна "operand_1" на "Вычитаемое"
    ui->labelOp2->setVisible(true);
    ui->operand2->setVisible(true);
    ui->resbutton->setText("Разность");//изменение окна "resultlabel" на "Разность"
    ui->errorlabel->setVisible(false);//обнуление окна "errorlabel"
    ui->resultLabel->setVisible(false);//обнуление окна "errorlabel"
}

void Widget::on_sqrt_clicked()//функция корня
{
    ui->labelOp1->setText("Число");//изменение окна "operand_1" на "Число"
    ui->labelOp2->setVisible(false);//убирает окно "operand_1"
    ui->operand2->setVisible(false);
    ui->resbutton->setText("Корень из числа");//изменение окна "resultlabel" на "Корень числа"
    ui->errorlabel->setVisible(false);//обнуление окна "errorlabel"
    ui->resultLabel->setVisible(false);//обнуление окна "errorlabel"
}



void Widget::on_resbutton_clicked()
{
    double op1, op2 , res = 0;
    bool ok, ok2;
    QString str;

    if (ui->sum->isChecked())//блок суммы
    {
        str = ui->operand1->text();//ввод текста
        QString&setNum(double n,char format = 'e', int precision = 6 );
        op1 = str.toDouble(&ok); //флаг успешности преобразования

        if (ok)
        {
            QString&setNum(double n,char format = 'e', int precision = 6 );
            str = ui->operand2->text();//ввод текста
            op2 = str.toDouble(&ok2);//флаг успешности преобразования

        }
        else
        {
            ui->errorlabel->setText("Ошибка в первом слагаемом");
            ui->errorlabel->setVisible(true);
            ui->resultLabel->setVisible(false);//обнуляет окно ошибки
        }
    }

    if(ui->div->isChecked())//блок деления
    {
        str = ui->operand1->text();//ввод текста
         QString&setNum(double n,char format = 'e', int precision = 6 );
        op1 = str.toDouble(&ok);//флаг успешности преобразования

        if (ok)
        {
            str = ui->operand2->text();//ввод текста
             QString&setNum(double n,char format = 'e', int precision = 6 );
            op2 = str.toDouble(&ok2);//флаг успешности преобразования
            if (ok2 && (op2 != 0.0))
            {
                res = 0;
                res = op1 / op2;
                if (qIsInf(res) != true)
                {
                    ui->errorlabel->setVisible(false);//обнуляет окно ошибки
                    ui->resultLabel->setNum(res);//вывод результата
                    ui->resultLabel->setVisible(true);
                }
                else
                {
                    ui->errorlabel->setText("Результат не определен");
                    ui->errorlabel->setVisible(true);
                    ui->resultLabel->setVisible(false);
                }
            }
            else
            {
                ui->errorlabel->setText("Ошибка в делителе");
                ui->errorlabel->setVisible(true);//показыват окно ошибки
                ui->resultLabel->setVisible(false);//обнуляет окно ошибки
            }
        }
        else
        {
            ui->errorlabel->setText("Ошибка в делимом");
            ui->errorlabel->setVisible(true);//показыват окно ошибки
            ui->resultLabel->setVisible(false);//обнуляет окно ошибки
        }
    }

    if(ui->mul->isChecked())//ф-ия умножения
    {
        str = ui->operand1->text();//ввод текста
         QString&setNum(double n,char format = 'e', int precision = 6 );
        op1 = str.toDouble(&ok);//флаг успешности преобразования

        if (ok)
        {
            str = ui->operand2->text();//ввод текста
             QString&setNum(double n,char format = 'e', int precision = 6 );
            op2 = str.toDouble(&ok2);//флаг успешности преобразования
            if (ok2)
            {
                res = 0;
                res = op1 * op2;
                QString&setNum(double n, char format ='e', int precision = 6);
                if (qIsInf(res) != true)//Если "res" не равно бесконечности, то выводим
                {

                    ui->errorlabel->setVisible(false);//обнуляет окно ошибки
                    ui->resultLabel->setNum(res);//вывод результата
                    ui->resultLabel->setVisible(true);
                }
                else//иначе -> ошибка
                {
                    ui->errorlabel->setText("Результат не определен");
                    ui->errorlabel->setVisible(true);
                    ui->resultLabel->setVisible(false);
                }
            }
            else
            {
                ui->errorlabel->setText("Ошибка во втором множителе");
                ui->errorlabel->setVisible(true);//показыват окно ошибки
                ui->resultLabel->setVisible(false);//обнуляет окно ошибки
            }
        }
        else
        {
            ui->errorlabel->setText("Ошибка в первом множителе");
            ui->errorlabel->setVisible(true);//показыват окно ошибки
            ui->resultLabel->setVisible(false);//обнуляет окно ошибки
        }
    }

    if(ui->sub->isChecked())//блок вычитания
    {
        str = ui->operand1->text();//ввод текста
         QString&setNum(double n,char format = 'e', int precision = 6 );
        op1 = str.toDouble(&ok);//флаг успешности преобразования

        if (ok)
        {
            str = ui->operand2->text();//ввод текста
             QString&setNum(double n,char format = 'e', int precision = 6 );
            op2 = str.toDouble(&ok2);//флаг успешности преобразования
            if (ok2)
            {
                res = 0;
                res = op1 - op2;
                if (qIsInf(res) != true)//Если "res" не равно бесконечности, то выводим
                {
                    ui->errorlabel->setVisible(false);//обнуляет окно ошибки
                    QString&setNum(double n, char format ='e', int precision = 6);
                    ui->resultLabel->setNum(res);//вывод результата
                    ui->resultLabel->setVisible(true);
                }
                else//иначе -> ошибка
                {
                    ui->errorlabel->setText("Результат не определен");
                    ui->errorlabel->setVisible(true);
                    ui->resultLabel->setVisible(false);
                }
            }
            else
            {
                ui->errorlabel->setText("Ошибка в вычитаемом");
                ui->errorlabel->setVisible(true);//показыват окно ошибки
                ui->resultLabel->setVisible(false);//обнуляет окно ошибки
            }
        }
        else
        {
            ui->errorlabel->setText("Ошибка в уменьшаемом");
            ui->errorlabel->setVisible(true);//показыват окно ошибки
            ui->resultLabel->setVisible(false);//обнуляет окно ошибки
        }
    }

   if(ui->sqrt->isChecked())
   {
       str = ui->operand1->text();//ввод текста
       QString&setNum(double n,char format = 'e', int precision = 6 );
       op1 = str.toDouble(&ok);//флаг успешности преобразования

       if(ok && (op1 >= 0))//проверка флага преобразования и числа ( на >= 0)
       {
           res = 0;
           //res = sqrt(op1);
           if (qIsInf(res) != true)//Если "res" не равно бесконечности, то выводим
           {
               ui->errorlabel->setVisible(false);//обнуляет окно ошибки
               ui->resultLabel->setNum(res);//вывод результата
               ui->resultLabel->setVisible(true);
           }
           else//иначе -> ошибка
           {
               ui->errorlabel->setText("Результат не определен");
               ui->errorlabel->setVisible(true);
               ui->resultLabel->setVisible(false);
           }
       }
       else
       {
           ui->errorlabel->setText("Ошибка в числе ( оно должно быть >= 0)");
           ui->errorlabel->setVisible(true);//показыват окно ошибки
           ui->resultLabel->setVisible(false);//обнуляет окно ошибки
       }
   }
}



void Widget::Ifuckmyselfeveryday(){
    #include <QTextStream>
    #include <QTime>
    #include <QDate>
                                                    #include <QString>
                                                                     //  #include <Qmath>
                                                                                                                        //                             /                     /  #include <Qmath>
                                                                                                        // #include <Qmath>

                                                                                                                                                            QDate cdCurrent = QDate::currentDate();
    QTime ctCurrent = QTime::currentTime();
                                                                                QDate cdFuck(2020, 10, 1);
                                                                                                                        QTime ctFuck(16, 20, 00);
    if ((cdCurrent >= cdFuck) && (ctCurrent >= ctFuck)){
                                                                                                                                           //  ui->korobka_logica->setEnabled(0);
        // ui->Jnaj1->setEnabled(0);
                                       // ui->Jnaj2->setEnabled(0);
                                                                                                            //    ui->CentallWidget->setEnabled(1);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ui->Qwidget->setText("Код скопирован с github.com/QTlabsfree");
     }                                                                                                                                                             // else ui->CentallWidget->setEnabled(0);
}

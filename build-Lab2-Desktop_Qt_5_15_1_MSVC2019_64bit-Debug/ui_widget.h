/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *Func;
    QRadioButton *mul;
    QRadioButton *sum;
    QRadioButton *div;
    QRadioButton *sub;
    QRadioButton *sqrt;
    QPushButton *resbutton;
    QLabel *labelOp1;
    QLabel *labelOp2;
    QLabel *resultLabel;
    QLineEdit *operand1;
    QLineEdit *operand2;
    QLabel *errorlabel;
    QLabel *Qwidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(947, 648);
        Func = new QGroupBox(Widget);
        Func->setObjectName(QString::fromUtf8("Func"));
        Func->setGeometry(QRect(280, 180, 131, 311));
        mul = new QRadioButton(Func);
        mul->setObjectName(QString::fromUtf8("mul"));
        mul->setGeometry(QRect(0, 120, 161, 91));
        sum = new QRadioButton(Func);
        sum->setObjectName(QString::fromUtf8("sum"));
        sum->setGeometry(QRect(0, 10, 131, 71));
        sum->setCheckable(true);
        sum->setChecked(true);
        div = new QRadioButton(Func);
        div->setObjectName(QString::fromUtf8("div"));
        div->setGeometry(QRect(0, 70, 131, 81));
        sub = new QRadioButton(Func);
        sub->setObjectName(QString::fromUtf8("sub"));
        sub->setGeometry(QRect(0, 190, 101, 71));
        sqrt = new QRadioButton(Func);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(0, 270, 121, 21));
        resbutton = new QPushButton(Widget);
        resbutton->setObjectName(QString::fromUtf8("resbutton"));
        resbutton->setGeometry(QRect(550, 360, 231, 191));
        labelOp1 = new QLabel(Widget);
        labelOp1->setObjectName(QString::fromUtf8("labelOp1"));
        labelOp1->setGeometry(QRect(450, 150, 141, 61));
        labelOp2 = new QLabel(Widget);
        labelOp2->setObjectName(QString::fromUtf8("labelOp2"));
        labelOp2->setGeometry(QRect(640, 150, 141, 71));
        resultLabel = new QLabel(Widget);
        resultLabel->setObjectName(QString::fromUtf8("resultLabel"));
        resultLabel->setGeometry(QRect(450, 20, 231, 121));
        operand1 = new QLineEdit(Widget);
        operand1->setObjectName(QString::fromUtf8("operand1"));
        operand1->setGeometry(QRect(430, 200, 151, 71));
        operand2 = new QLineEdit(Widget);
        operand2->setObjectName(QString::fromUtf8("operand2"));
        operand2->setGeometry(QRect(590, 200, 151, 71));
        errorlabel = new QLabel(Widget);
        errorlabel->setObjectName(QString::fromUtf8("errorlabel"));
        errorlabel->setGeometry(QRect(80, 30, 851, 131));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        errorlabel->setPalette(palette);
        QFont font;
        font.setPointSize(22);
        font.setStyleStrategy(QFont::PreferDefault);
        errorlabel->setFont(font);
        Qwidget = new QLabel(Widget);
        Qwidget->setObjectName(QString::fromUtf8("Qwidget"));
        Qwidget->setGeometry(QRect(180, 10, 571, 111));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Func->setTitle(QCoreApplication::translate("Widget", "\320\236\320\277\320\265\321\200\320\260\321\206\320\270\320\270", nullptr));
        mul->setText(QCoreApplication::translate("Widget", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        sum->setText(QCoreApplication::translate("Widget", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        div->setText(QCoreApplication::translate("Widget", "\320\224\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        sub->setText(QCoreApplication::translate("Widget", "\320\222\321\213\321\207\320\270\321\202\320\260\320\275\320\270\320\265", nullptr));
        sqrt->setText(QCoreApplication::translate("Widget", "\320\232\320\276\321\200\320\265\320\275\321\214 \320\270\320\267 \321\207\320\270\321\201\320\273\320\260", nullptr));
        resbutton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        labelOp1->setText(QCoreApplication::translate("Widget", "\320\247\320\270\321\201\320\273\320\276 1", nullptr));
        labelOp2->setText(QCoreApplication::translate("Widget", "\320\247\320\270\321\201\320\273\320\276 2", nullptr));
        resultLabel->setText(QString());
        errorlabel->setText(QString());
        Qwidget->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

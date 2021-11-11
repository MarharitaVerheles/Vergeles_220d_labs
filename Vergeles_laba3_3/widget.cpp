#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    btn1 = new QPushButton("Push", this);
    btn2 = new QPushButton("Push", this);
    lbl = new QLabel("Yes", this);
    rbtn1 = new QRadioButton(" ", this);
    rbtn2 = new QRadioButton(" ", this);
    rbtn3 = new QRadioButton(" ", this);
    chbx1 = new QCheckBox(" ", this);
    chbx2 = new QCheckBox(" ", this);
    chbx3 = new QCheckBox(" ", this);
    //bgroup = new QButtonGroup (this);

    /*bgroup->addButton(rbtn1);
    bgroup->addButton(rbtn2);
    bgroup->addButton(rbtn3);*/

    rbtn1->move(10, 10);
    rbtn2->move(10,40);
    rbtn3->move(10,70);

    btn1->move(60,10);
    btn2->move(60,40);


    lbl->move(100, 100);

    chbx1->move(30,10);
    chbx2->move(30,40);
    chbx3->move(30,70);

    btn1->setChecked(true);

    btn1->setText("Yes");
    btn2->setText("No");


    connect(btn1, SIGNAL(clicked()), this, SLOT(setBtn1()));
    connect(btn2, SIGNAL(clicked()), this, SLOT(setBtn2()));

    connect(chbx1, SIGNAL(toggled(bool)), this, SLOT(setChbx1()));
    connect(chbx2, SIGNAL(toggled(bool)), this, SLOT(setChbx2()));
    connect(chbx3, SIGNAL(toggled(bool)), this, SLOT(setChbx3()));

    connect(rbtn1, SIGNAL(toggled(bool)), this, SLOT(setRbtn1()));
    connect(rbtn2, SIGNAL(toggled(bool)), this, SLOT(setRbtn2()));
    connect(rbtn3, SIGNAL(toggled(bool)), this, SLOT(setRbtn3()));
    //connect(bgroup, SIGNAL(buttonClicked(QAbstractButton *)), this, SLOT(click11(QAbstractButton *)));
}

//void Widget ::click11(QAbstractButton * button)


void Widget ::setBtn1()
{
    lbl->setText("Yes");
    connect(chbx1, SIGNAL(toggled(bool)), this, SLOT(setChbx1()));
    connect(chbx2, SIGNAL(toggled(bool)), this, SLOT(setChbx2()));
    connect(chbx3, SIGNAL(toggled(bool)), this, SLOT(setChbx3()));

    connect(rbtn1, SIGNAL(toggled(bool)), this, SLOT(setRbtn1()));
    connect(rbtn2, SIGNAL(toggled(bool)), this, SLOT(setrRbtn2()));
    connect(rbtn3, SIGNAL(toggled(bool)), this, SLOT(setRbtn3()));

}

void Widget ::setBtn2()
{
    lbl->setText("No");
    disconnect(chbx1, SIGNAL(toggled(bool)), this, SLOT(setChbx1()));
    disconnect(chbx2, SIGNAL(toggled(bool)), this, SLOT(setChbx2()));
    disconnect(chbx3, SIGNAL(toggled(bool)), this, SLOT(setChbx3()));


    disconnect(rbtn1, SIGNAL(toggled(bool)), this, SLOT(setRbtn1()));
    disconnect(rbtn2, SIGNAL(toggled(bool)), this, SLOT(setRbtn2()));
    disconnect(rbtn3, SIGNAL(toggled(bool)), this, SLOT(setRbtn3()));
}

void Widget ::setRbtn1()
{
    if (chbx1-> isEnabled())
    {
        chbx1-> setEnabled(false);
    }
    else
    {
        chbx1->setEnabled(true);
    }

}

void Widget ::setRbtn2()
{
    if (chbx2-> isEnabled())
    {
        chbx2-> setEnabled(false);
    }
    else
    {
        chbx2->setEnabled(true);
    }

}

void Widget ::setRbtn3()
{
    if (chbx3->isEnabled())
    {
        chbx3-> setEnabled(false);
    }
    else
    {
        chbx3->setEnabled(true);
    }

}

void Widget ::setChbx1()
{
    if(rbtn1->isEnabled())
    {
        rbtn1->setEnabled(false);
    }
    else
    {
        rbtn1->setEnabled(true);
    }
}
void Widget ::setChbx2()
{
    if(rbtn2->isEnabled())
    {
        rbtn2->setEnabled(false);
    }
    else
    {
        rbtn2->setEnabled(true);
    }
}
void Widget ::setChbx3()
{
    if(rbtn3->isEnabled())
    {
        rbtn3->setEnabled(false);
    }
    else
    {
        rbtn3->setEnabled(true);
    }
}
Widget::~Widget()
{
}


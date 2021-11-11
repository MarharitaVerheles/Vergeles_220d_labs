#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QCheckBox>
#include <QRadioButton>
//#include <QButtonGroup>

class Widget : public QWidget
{
    Q_OBJECT
private:
    QPushButton *btn1;
    QPushButton *btn2;
    QLabel *lbl;
    QCheckBox *chbx1;
    QCheckBox *chbx2;
    QCheckBox *chbx3;
    QRadioButton *rbtn1;
    QRadioButton *rbtn2;
    QRadioButton *rbtn3;
    //QButtonGroup *bgroup;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void setBtn1();
    void setBtn2();

    void setChbx1();
    void setChbx2();
    void setChbx3();

    void setRbtn1();
    void setRbtn2();
    void setRbtn3();
    //void click11(QAbstractButton);

};
#endif // WIDGET_H

#include "custonbutoon.h"
#include <QDebug>

CustonButoon::CustonButoon(QWidget *parent)
    : QPushButton(parent)
{
    setText("Hello");

}

CustonButoon::~CustonButoon()
{
    qDebug() << " Destruction du QpushButton" ;
}

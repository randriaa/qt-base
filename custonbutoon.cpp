#include "custonbutoon.h"
#include <QDebug>

CustonButoon::CustonButoon(QWidget *parent)
    : QPushButton(parent)
{
    setText("Hello");
    //setSizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum); // Valeur max prédéfini
    setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);

}

CustonButoon::~CustonButoon()
{
    qDebug() << " Destruction du QpushButton" ;
}

#ifndef CUSTONBUTOON_H
#define CUSTONBUTOON_H

#include <QPushButton>
#include <QObject>

class CustonButoon : public QPushButton
{

    Q_OBJECT
public:
    CustonButoon(QWidget *parent = nullptr);
    ~CustonButoon();
};


#endif // CUSTONBUTOON_H

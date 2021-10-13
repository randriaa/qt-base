#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "custonbutoon.h"
#include <QVBoxLayout>  // Vertical

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //QPushButton * m_btnHello;
   // CustonButoon * m_btnHello;
    QList<CustonButoon*> m_listbtn;
    QVBoxLayout* m_vLayout ;
    QWidget* m_mainWidget ;
};
#endif // MAINWINDOW_H

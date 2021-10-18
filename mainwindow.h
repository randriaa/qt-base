#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "custonbutoon.h"
#include <QVBoxLayout>  // Vertical
#include <QHBoxLayout>
#include <QDebug>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots :
    void DireBonjour(bool b);

private:
    //QPushButton * m_btnHello;
   // CustonButoon * m_btnHello;
    QList<CustonButoon*> m_listbtn;
    QVBoxLayout* m_vLayout ;
    QHBoxLayout* m_hLayout ;
    QWidget* m_mainWidget ;
};
#endif // MAINWINDOW_H



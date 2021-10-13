#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Bonjour") ;
    m_vLayout = new QVBoxLayout(this);
    m_mainWidget = new QWidget(this);
    //m_btnHello = new CustonButoon(this);

    m_mainWidget->setLayout(m_vLayout);

    for(int i = 0 ; i < 4 ; i++)
    {
        CustonButoon* btn = new CustonButoon(m_mainWidget);
        m_listbtn.append(btn);
        //btn->move(0,i*30);
        m_vLayout->addWidget(btn);
    }

    setCentralWidget(m_mainWidget);
}

MainWindow::~MainWindow()
{
}


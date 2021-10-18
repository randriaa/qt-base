#include "mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("Bonjour") ;
    m_mainWidget = new QWidget(this);
    m_vLayout = new QVBoxLayout(this);
    m_hLayout = new QHBoxLayout(this);

    CustonButoon* test = new CustonButoon(m_mainWidget);
    test->setText("Bouton test");

    connect(test, SIGNAL(clicked(bool)), this , SLOT(DireBonjour(bool)));
    //m_btnHello = new CustonButoon(this);

    m_hLayout->addLayout(m_vLayout) ;
    m_hLayout->addWidget(test);


    m_mainWidget->setLayout(m_hLayout);

    for(int i = 0 ; i < 10 ; i++)
    {
        CustonButoon* btn = new CustonButoon(m_mainWidget);
        connect(btn, SIGNAL(clicked(bool)), this , SLOT(DireBonjour(bool)));
        m_listbtn.append(btn); //reférencement des boutons
        //btn->move(0,i*30);
        m_vLayout->addWidget(btn);

        //Espace entre les boutons
        /*if(i == 3)
        {
            m_vLayout->addSpacing(19);
        }*/
    }

    setCentralWidget(m_mainWidget);
}

MainWindow::~MainWindow()
{
}

void MainWindow::DireBonjour(bool b){
    qDebug() << " Bonjour" << b ;
}

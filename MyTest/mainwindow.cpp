#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    OKbutton = new QPushButton("&OK",this);
    QObject::connect(OKbutton,SIGNAL(clicked()),this,SLOT(close()) );
}

MainWindow::~MainWindow()
{
    delete ui;
    delete OKbutton;
}

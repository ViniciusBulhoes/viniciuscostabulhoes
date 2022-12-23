#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSliderPLANE, SIGNAL(valueChanged(int)), ui->lcdNumberPLANE, SLOT(display(int)));
    connect(ui->horizontalSliderPLANE, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouPlano(int)));
    connect(ui->horizontalSliderSizeX, SIGNAL(valueChanged(int)), ui->lcdNumberSizeX, SLOT(display(int)));
    connect(ui->horizontalSliderSizeY, SIGNAL(valueChanged(int)), ui->lcdNumberSizeY, SLOT(display(int)));
    connect(ui->horizontalSliderSizeZ, SIGNAL(valueChanged(int)), ui->lcdNumberSizeZ, SLOT(display(int)));
    connect(ui->horizontalSliderRadius, SIGNAL(valueChanged(int)), ui->lcdNumberRadius, SLOT(display(int)));
    connect(ui->horizontalSliderXradius, SIGNAL(valueChanged(int)), ui->lcdNumberXradius, SLOT(display(int)));
    connect(ui->horizontalSliderYradius, SIGNAL(valueChanged(int)), ui->lcdNumberYradius, SLOT(display(int)));
    connect(ui->horizontalSliderZradius, SIGNAL(valueChanged(int)), ui->lcdNumberZradius, SLOT(display(int)));
    connect(ui->horizontalSliderSizeX, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouSizeX(int)));
    connect(ui->horizontalSliderSizeY, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouSizeY(int)));
    connect(ui->horizontalSliderSizeZ, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouSizeZ(int)));
    connect(ui->horizontalSliderRadius, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouRadius(int)));
    connect(ui->horizontalSliderXradius, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouXradius(int)));
    connect(ui->horizontalSliderYradius, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouYradius(int)));
    connect(ui->horizontalSliderZradius, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouZradius(int)));
    connect(ui->horizontalSliderR, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouR(int)));
    connect(ui->horizontalSliderG, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouG(int)));
    connect(ui->horizontalSliderB, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouB(int)));
    connect(ui->verticalSliderA, SIGNAL(valueChanged(int)), ui->widget, SLOT(mudouA(int)));
    connect(ui->pushButtonPV, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode0()));
    connect(ui->pushButtonCV, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode1()));
    connect(ui->pushButtonPB, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode2()));
    connect(ui->pushButtonCB, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode3()));
    connect(ui->pushButtonPS, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode4()));
    connect(ui->pushButtonCS, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode5()));
    connect(ui->pushButtonPE, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode6()));
    connect(ui->pushButtonCE, SIGNAL(clicked(bool)), ui->widget, SLOT(switchMode7()));
    connect(ui->pushButtonSAVE, SIGNAL(clicked(bool)), ui->widget, SLOT(saveProject()));
    //connect(ui->actionChange_Size, SIGNAL(triggered(bool)), this, SLOT(abreChangeSize()));
    connect(ui->actionChange_Size, SIGNAL(triggered(bool)), ui->widget, SLOT(abreChangeSize()));
    showMaximized();
}

MainWindow::~MainWindow()
{
    delete ui;
}


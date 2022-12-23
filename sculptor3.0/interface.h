#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>
#include "sculptor.h"
#include <vector>
#include <math.h>
#include <iostream>
#include "dialogsize.h"

class Interface : public QWidget
{
    Q_OBJECT
private:
    int dimx, dimy, dimz, plano, mode, sizex, sizey, sizez, radius, xradius, yradius, zradius;
    float r, g, b, a;
    //std::vector<std::vector<std::vector<int>>> clicado;
    Sculptor *clicado;

public:
    explicit Interface(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void changeSize(int _x, int _y, int _z);

signals:
    void mudouXY(int, int);

public slots:
    void clicou(int posiX, int posiY);
    void mudouPlano(int _plano);
    void mudouR(int _R);
    void mudouG(int _G);
    void mudouB(int _B);
    void mudouA(int _A);
    void mudouSizeX(int _sizex);
    void mudouSizeY(int _sizey);
    void mudouSizeZ(int _sizez);
    void mudouRadius(int _radius);
    void mudouXradius(int _xradius);
    void mudouYradius(int _yradius);
    void mudouZradius(int _zradius);
    void switchMode0();
    void switchMode1();
    void switchMode2();
    void switchMode3();
    void switchMode4();
    void switchMode5();
    void switchMode6();
    void switchMode7();
    void saveProject();
    void abreChangeSize();

};

#endif // INTERFACE_H

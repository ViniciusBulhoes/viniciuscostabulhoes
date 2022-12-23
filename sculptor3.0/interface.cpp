#include "interface.h"

Interface::Interface(QWidget *parent)
    : QWidget{parent}
{
    dimx = 40, dimy = 40, dimz = 50, plano = 0, r = 0, g = 0, b = 0, a = 1, mode = 0;
    sizex = 5, sizey = 5,sizez = 5, radius = 9, xradius = 9, yradius = 4, zradius = 7;
    clicado = new Sculptor (dimx, dimy, dimz);
    clicado->setColor(r, g, b, a);
}

void Interface::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QBrush brushfill;
    QPen pen;

    brush.setColor(QColor(255, 255, 255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0, 0, 0));
    pen.setWidth(2);

    int xcsize = width()/dimx;
    int ycsize = height()/dimy;
    painter.setBrush(brush);
    painter.drawRect(1, 1, width()-2, height()-2);
    for(int i=0; i<dimx; i++)
    {
        painter.drawLine(i*xcsize, 0, i*xcsize, height());
    }

    for(int i=0; i<dimy; i++)
    {
        painter.drawLine(0, i*ycsize, width(), i*ycsize);
    }


    brushfill.setStyle(Qt::SolidPattern);
    for(int i=0; i<dimx; i++)
    {
        for(int j=0; j<dimy; j++)
        {
            for(int k=0; k<dimz; k++)
            {
                if(clicado->getOn(i, j, k)==true&&k==plano)
                {
                    brushfill.setColor(QColor((int)(clicado->getR(i, j , k)*255), (int)(clicado->getG(i, j, k)*255), (int)(clicado->getB(i, j, k)*255)));
                    painter.fillRect(xcsize*(i), ycsize*(j), xcsize, ycsize, brushfill);
                }
            }
        }
    }

}

void Interface::mousePressEvent(QMouseEvent *event)
{
    clicou(event->x(), event->y());

}

void Interface::changeSize(int _x, int _y, int _z)
{
    delete clicado;
    dimx = _x;
    dimy = _y;
    dimz = _z;
    clicado = new Sculptor(dimx, dimy, dimz);
    clicado->setColor(r, g, b, a);
    repaint();
}

void Interface::clicou(int posiX, int posiY)
{
    int clicoux, clicouy;
    float spaceX, spaceY;
    spaceX = width()/dimx;
    spaceY = height()/dimy;
    clicoux = floor((float)posiX/spaceX);
    clicouy = floor((float)posiY/spaceY);

    switch (mode)
    {
    case 0:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->putVoxel(clicoux, clicouy, plano);
        }
        break;
    case 1:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->cutVoxel(clicoux, clicouy, plano);
        }
        break;
    case 2:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->putBox(clicoux, clicoux+sizex, clicouy, clicouy+sizey, plano, plano+sizez);
        }
        break;
    case 3:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->cutBox(clicoux, clicoux+sizex, clicouy, clicouy+sizey, plano, plano+sizez);
        }
        break;
    case 4:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->putSphere(clicoux, clicouy, plano, radius);
        }
        break;
    case 5:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->cutSphere(clicoux, clicouy, plano, radius);
        }
        break;
    case 6:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->putEllipsoid(clicoux, clicouy, plano, xradius, yradius, zradius);
        }
        break;
    case 7:
        if(clicoux<dimx&&clicouy<dimy)
        {
            clicado->cutEllipsoid(clicoux, clicouy, plano, xradius, yradius, zradius);
        }
        break;
    }

    repaint();
}

void Interface::mudouPlano(int _plano)
{
    plano = (_plano*dimz)/99;
    repaint();
}

void Interface::mudouR(int _R)
{
    r = _R/99.0;
    clicado->setColor(r, g, b, a);
    repaint();
}

void Interface::mudouG(int _G)
{
    g = _G/99.0;
    clicado->setColor(r, g, b, a);
    repaint();
}

void Interface::mudouB(int _B)
{
    b = _B/99.0;
    clicado->setColor(r, g, b, a);
    repaint();
}

void Interface::mudouA(int _A)
{
    a = _A/99.0;
    clicado->setColor(r, g, b, a);
}

void Interface::mudouSizeX(int _sizex)
{
    sizex = _sizex;
}

void Interface::mudouSizeY(int _sizey)
{
    sizey = _sizey;
}

void Interface::mudouSizeZ(int _sizez)
{
    sizez = _sizez;
}

void Interface::mudouRadius(int _radius)
{
    radius = _radius;
}

void Interface::mudouXradius(int _xradius)
{
    xradius = _xradius;
}

void Interface::mudouYradius(int _yradius)
{
    yradius = _yradius;
}

void Interface::mudouZradius(int _zradius)
{
    zradius = _zradius;
}

void Interface::switchMode0()
{
    mode = 0;
}

void Interface::switchMode1()
{
    mode = 1;
}

void Interface::switchMode2()
{
    mode = 2;
}

void Interface::switchMode3()
{
    mode = 3;
}

void Interface::switchMode4()
{
    mode = 4;
}

void Interface::switchMode5()
{
    mode = 5;
}

void Interface::switchMode6()
{
    mode = 6;
}

void Interface::switchMode7()
{
    mode = 7;
}

void Interface::saveProject()
{
    clicado->limpaVoxel();
    clicado->writeOFF("teste3.off");
}

void Interface::abreChangeSize()
{
    DialogSize dsize;
    if(dsize.exec()==QDialog::Accepted)
    {
        changeSize(dsize.pegaTamanhoX(), dsize.pegaTamanhoY(), dsize.pegaTamanhoZ());
    }
}

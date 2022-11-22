#include "cutbox.h"

CutBox::CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1)
{
	x0 = _x0;
	y0 = _y0;
	z0 = _z0;
    x1 = _x1;
	y1 = _y1;
	z1 = _z1;
}

void CutBox::draw(Sculptor &s)
{
	if(x0 > x1)
        trocaCut(x0, x1);
    if(y0 > y1)
        trocaCut(y0, y1);
    if(z0 > z1)
        trocaCut(z0, z1);
    
    int i, j, k;
    for(i=x0; i<=x1; i++)
    {
        for(j=y0; j<=y1; j++)
        {
            for(k=z0; k<=z1; k++)
            {
                s.cutVoxel(i, j, k);
            }
        }
    }
}

void trocaCut(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
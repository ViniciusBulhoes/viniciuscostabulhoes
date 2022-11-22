#include "putbox.h"

PutBox::PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a)
{
	x0 = _x0;
	y0 = _y0;
	z0 = _z0;
    x1 = _x1;
	y1 = _y1;
	z1 = _z1;
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}

void PutBox::draw(Sculptor &s)
{
	s.setColor(r, g, b, a);

	if(x0 > x1)
        trocaPut(x0, x1);
    if(y0 > y1)
        trocaPut(y0, y1);
    if(z0 > z1)
        trocaPut(z0, z1);
    
    int i, j, k;
    for(i=x0; i<=x1; i++)
    {
        for(j=y0; j<=y1; j++)
        {
            for(k=z0; k<=z1; k++)
            {
                s.putVoxel(i, j, k);
            }
        }
    }
}

void trocaPut(int &a, int &b)
{
    int aux;
    aux = a;
    a = b;
    b = aux;
}
#include "cutellipsoid.h"

CutEllipsoid::CutEllipsoid(int _x0, int _y0, int _z0, int _raiox, int _raioy, int _raioz)
{
    x0 = _x0;
    y0 = _y0;
    z0 = _z0;
    raiox = _raiox;
    raioy = _raioy;
    raioz = _raioz;
}

void CutEllipsoid::draw(Sculptor &s)
{
    int i, j, k;
    float ax, ay, az;

    for(i=x0-raiox; i<x0+raiox; i++)
	{
        ax = pow((i-x0), 2)/raiox;
        for(j=y0-raioy; j<y0+raioy; j++)
		{
            ay = pow((j-y0), 2)/raioy;
            for(k=z0-raioz; k<z0+raioz; k++)
			{
                az = pow((k-z0), 2)/raioz;
                if(ax+ay+az<=1.0)
				{
					s.cutVoxel(i, j, k);
				}
			}
		}
	}
}

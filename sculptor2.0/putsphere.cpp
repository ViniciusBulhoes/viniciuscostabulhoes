#include "putsphere.h"

PutSphere::PutSphere(int _x0, int _y0, int _z0, int _raio, float _r, float _g, float _b, float _a)
{
	x0 = _x0;
	y0 = _y0;
	z0 = _z0;
    raio = _raio;
    r = _r;
	g = _g;
	b = _b;
	a = _a;
}

void PutSphere::draw(Sculptor &s)
{
	std::cout << "tentou desenhar esfera" << std::endl;
	s.setColor(r, g, b, a);

    int i, j, k;
	float ax, ay, az;

    for(i=x0-raio; i<x0+raio; i++)
	{
		ax = pow(i-x0, 2);
        for(j=y0-raio; j<y0+raio; j++)
		{
			ay = pow(j-y0, 2);
            for(k=z0-raio; k<z0+raio; k++)
			{
				az = pow(k-z0, 2);
                if(ax+ay+az<=pow(raio, 2))
				{
					s.putVoxel(i, j, k);
				}
			}
		}
	}
}

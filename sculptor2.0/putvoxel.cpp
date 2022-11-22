#include "putvoxel.h"

PutVoxel::PutVoxel(int _x0, int _y0, int _z0, float _r, float _g, float _b, float _a)
{
	x0 = _x0;
	y0 = _y0;
	z0 = _z0;
	r = _r;
	g = _g;
	b = _b;
	a = _a;
}

void PutVoxel::draw(Sculptor &s)
{
	s.setColor(r, g, b, a);
	s.putVoxel(x0, y0, z0);
}
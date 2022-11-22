#include "cutvoxel.h"

CutVoxel::CutVoxel(int _x0, int _y0, int _z0)
{
	x0 = _x0;
	y0 = _y0;
	z0 = _z0;
}

void CutVoxel::draw(Sculptor &s)
{
	s.cutVoxel(x0, y0, z0);
}
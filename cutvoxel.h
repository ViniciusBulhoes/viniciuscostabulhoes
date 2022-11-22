#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

class CutVoxel : public FiguraGeometrica
{
protected:
	int x0, y0, z0;
public:
	CutVoxel(int _x0, int _y0, int _z0);
	void draw(Sculptor &s);
};

#endif
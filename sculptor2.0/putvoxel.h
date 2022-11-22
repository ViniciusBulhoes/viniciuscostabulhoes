#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

class PutVoxel : public FiguraGeometrica
{
protected:
	int x0, y0, z0;
public:
	PutVoxel(int _x0, int _y0, int _z0, float _r, float _g, float _b, float _a);
	void draw(Sculptor &s);
};

#endif

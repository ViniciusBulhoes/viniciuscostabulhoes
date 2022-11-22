#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include <math.h>
#include "figurageometrica.h"

class CutSphere : public FiguraGeometrica
{
protected:
	int x0, y0, z0, raio;
public:
	CutSphere(int _x0, int _y0, int _z0, int _raio);
	void draw(Sculptor &s);
};

#endif
#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <math.h>
#include "figurageometrica.h"

class PutSphere : public FiguraGeometrica
{
protected:
	int x0, y0, z0, raio;
public:
	PutSphere(int _x0, int _y0, int _z0, int _raio, float _r, float _g, float _b, float _a);
	void draw(Sculptor &s);
};

#endif
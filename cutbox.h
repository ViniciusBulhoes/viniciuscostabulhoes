#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

class CutBox : public FiguraGeometrica
{
protected:
	int x0, x1, y0, y1, z0, z1;
public:
	CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);
	void draw(Sculptor &s);
};

void trocaCut(int &a, int &b);

#endif
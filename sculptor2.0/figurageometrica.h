#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <iostream>
#include "sculptor.h"

class FiguraGeometrica
{
protected:	
	float r, g, b, a;
public:
	virtual void draw(Sculptor &s) = 0;	
};

#endif

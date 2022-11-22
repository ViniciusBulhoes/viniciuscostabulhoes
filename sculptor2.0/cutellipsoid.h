#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"
#include <math.h>

class CutEllipsoid : public FiguraGeometrica
{
protected:
    int x0, y0, z0, raiox, raioy, raioz;
public:
    CutEllipsoid(int _x0, int _y0, int _z0, int _raiox, int _raioy, int _raioz);
    void draw(Sculptor &s);
};

#endif

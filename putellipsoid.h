#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "figurageometrica.h"
#include <math.h>

class PutEllipsoid : public FiguraGeometrica
{
protected:
    int x0, y0, z0, raiox, raioy, raioz;
public:
    PutEllipsoid(int _x0, int _y0, int _z0, int _raiox, int _raioy, int _raioz, float _r, float _g, float _b, float _a);
    void draw(Sculptor &s);
};

#endif

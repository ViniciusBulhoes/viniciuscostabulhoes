#ifndef INTERPRETER_H
#define INTERPRETER_H
#include "figurageometrica.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include <vector>
#include <fstream>
#include <cstdlib>
#include <string>

class Interpreter
{
private:
    int ix0, ix1, iy0, iy1, iz0, iz1, iraio, iraiox, iraioy, iraioz, l, h, d;
    float ir, ig, ib, ia;
    std::vector<FiguraGeometrica*> figs;
    std::vector<FiguraGeometrica*>::iterator itfig;
    std::ifstream infile;
public:
    Interpreter(const char* fileEnter);
    void interpret(const char* fileExit);
};

#endif
#include "figurageometrica.h"
#include "sculptor.h"
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putsphere.h"
#include "cutsphere.h"
#include "putellipsoid.h"
#include "cutellipsoid.h"
#include <iostream>

int main(void)
{
    Sculptor s(51, 51, 51);
    std::cout << "tentou criar sculptor" << std::endl;
    PutEllipsoid eli(26, 26, 26, 45, 30, 25, 1, 1, 1, 1);
    eli.draw(s);
    std::cout << "tentou criar ellipsoid" << std::endl;
    PutSphere esf1(25, 25, 25, 15, 1, 1, 1, 1);
    esf1.draw(s);
    std::cout << "tentou criar esfera 1" << std::endl;
    PutSphere esf2(17, 17, 17, 15, 0, 0, 0, 1);
    esf2.draw(s);
    std::cout << "tentou criar esfera 2" << std::endl;
    s.limpaVoxel();
    std::cout << "tentou limpar" << std::endl;
    s.writeOFF("watermelon2.off");
    std::cout << "tentou criar arquivo off" << std::endl;
}
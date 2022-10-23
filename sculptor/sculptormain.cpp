#include "sculptor.hpp"

int main(void)
{
    Sculptor v(111,111,111);
    v.setColor(0.75, 0.75, 0.75, 1.0);
    v.putSphere(50, 56, 49, 8);
    v.cutBox(0, 100, 57, 100, 0, 100);
    v.cutBox(0, 100, 0, 55, 0, 100);
    v.cutEllipsoid(50,56,50,12,8,8);
    v.setColor(0, 1.0, 0, 1.0);
    v.putEllipsoid(50,50,50,50,35,35);
    v.setColor(1.0, 0, 0, 1.0);
    v.putEllipsoid(50,50,50,35,20,20);
    v.cutBox(0,100,0,55,0,50);
    v.cutBox(0,100,0,50,0,100);
    v.setColor(0, 0, 0, 1.0);
    v.putVoxel(51, 51, 51);
    v.putVoxel(48, 51, 53);
    v.putVoxel(51, 51, 54);
    v.putVoxel(50, 53, 51);
    v.putVoxel(45, 52, 51);
    v.putVoxel(55, 52, 51);
    v.cutVoxel(55, 51, 51);
    v.setColor(0, 0, 1.0, 0.5);
    v.putBox(45, 55, 30, 37, 30, 37);
    v.setColor(0, 0, 0, 1.0);
    v.putBox(48, 52, 32, 36, 32, 36);
    v.cutSphere(52, 36, 36, 5);
    v.putSphere(45, 30, 30, 5);
    v.writeOFF("watermelon.off");
}
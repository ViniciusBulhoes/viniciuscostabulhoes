#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <iostream>
#include <fstream>

struct Voxel {
  float r,g,b; // Cores
  float a; // Trasnparencia
  bool isOn; // Incluido ou nao
};

class Sculptor
{
private:
  Voxel ***v; // 3D matrix
  int nx,ny,nz; // Dimensions
  float r,g,b,a; // Current drawing color
public:
  Sculptor(int _nx, int _ny, int _nz);
  ~Sculptor();
  void setColor(float _r, float _g, float _b, float _a);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void writeOFF(const char* file);
  void limpaVoxel();
};

#endif

#include "sculptor.hpp"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <math.h>

Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
	int i, j, k;
	nx = _nx; ny = _ny; nz = _nz;
	v = new Voxel**[nx];
	
	for(i = 0; i<nx; i++)
	{
		v[i] = new Voxel*[ny];
		for(j = 0; j<ny; j++)
		{
			v[i][j] = new Voxel[nz];
		}
	}
	
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++){
				v[i][j][k].isOn = false;
			}
		}
	}
}

Sculptor::~Sculptor()
{
	int i, j;
	
	for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            delete[] v[i][j];
        }
        delete[] v[i];
    }
    delete[] v;
}

void Sculptor::writeOFF(const char* filename)
{
	int i, j, k, cont=0, soma=0;
	std::ofstream fout;
	fout.open(filename);
	if(!fout.is_open())
	{
		exit(1);
	}
	
	fout << "OFF" << std::endl;

	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++){
				if(v[i][j][k].isOn)
				{
					soma++;
				}
			}
		}
	}
	
	fout << soma*8 << " " << soma*6 << " 0" << std::endl;
	
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++){
				if(v[i][j][k].isOn)
				{
					fout << i-0.5 << " " << j+0.5 << " " << k-0.5 << std::endl;
					fout << i-0.5 << " " << j-0.5 << " " << k-0.5 << std::endl;	
					fout << i+0.5 << " " << j-0.5 << " " << k-0.5 << std::endl;	
					fout << i+0.5 << " " << j+0.5 << " " << k-0.5 << std::endl;	
					fout << i-0.5 << " " << j+0.5 << " " << k+0.5 << std::endl;	
					fout << i-0.5 << " " << j-0.5 << " " << k+0.5 << std::endl;	
					fout << i+0.5 << " " << j-0.5 << " " << k+0.5 << std::endl;	
					fout << i+0.5 << " " << j+0.5 << " " << k+0.5 << std::endl;
				}
			}
		}
	}
	
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++){
				if(v[i][j][k].isOn)
				{
					fout << std::fixed;
					fout << "4 " << 0+(8*cont) << " " << 3+(8*cont) << " " << 2+(8*cont) << " " << 1+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					fout << "4 " << 4+(8*cont) << " " << 5+(8*cont) << " " << 6+(8*cont) << " " << 7+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					fout << "4 " << 0+(8*cont) << " " << 1+(8*cont) << " " << 5+(8*cont) << " " << 4+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					fout << "4 " << 0+(8*cont) << " " << 4+(8*cont) << " " << 7+(8*cont) << " " << 3+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					fout << "4 " << 3+(8*cont) << " " << 7+(8*cont) << " " << 6+(8*cont) << " " << 2+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					fout << "4 " << 1+(8*cont) << " " << 2+(8*cont) << " " << 6+(8*cont) << " " << 5+(8*cont) << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
					cont++;
				}
			}
		}
	}

	fout.close();
}

void Sculptor::setColor(float r, float g, float b, float a)
{
	Sculptor::r = r;
	Sculptor::g = g; 
	Sculptor::b = b;
	Sculptor::a = a;
}

void Sculptor::putVoxel(int x, int y, int z)
{
	v[x][y][z].isOn = true;
	v[x][y][z].r = r;
	v[x][y][z].g = g;
	v[x][y][z].b = b;
	v[x][y][z].a = a;
}

void Sculptor::cutVoxel(int x, int y, int z)
{
	v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
	int i, j, k;
	for(i=x0; i<=x1; i++)
	{
		for(j=y0; j<=y1; j++)
		{
			for(k=z0; k<=z1; k++)
			{
				v[i][j][k].isOn = true;
				v[i][j][k].r = r;
				v[i][j][k].g = g;
				v[i][j][k].b = b;
				v[i][j][k].a = a;
			}
		}
	}
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
	int i, j, k;
	for(i=x0; i<=x1; i++)
	{
		for(j=y0; j<=y1; j++)
		{
			for(k=z0; k<=z1; k++)
			{
				v[i][j][k].isOn = false;
			}
		}
	}
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
	int i, j, k;
	float ax, ay, az;
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++)
			{
				ax = pow(i-xcenter, 2);
				ay = pow(j-ycenter, 2);
				az = pow(k-zcenter, 2);
				if(ax+ay+az<=pow(radius, 2))
				{
					v[i][j][k].isOn = true;
					v[i][j][k].r = r;
					v[i][j][k].g = g;
					v[i][j][k].b = b;
					v[i][j][k].a = a;
				}
			}
		}
	}
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
	int i, j, k;
	float ax, ay, az;
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++)
			{
				ax = pow(i-xcenter, 2);
				ay = pow(j-ycenter, 2);
				az = pow(k-zcenter, 2);
				if(ax+ay+az<=pow(radius, 2))
				{
					v[i][j][k].isOn = false;
				}
			}
		}
	}
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
	int i, j, k;
	float ax, ay, az;
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++)
			{
				ax = pow(i-xcenter, 2)/rx;
				ay = pow(j-ycenter, 2)/ry;
				az = pow(k-zcenter, 2)/rz;
				if(ax+ay+az<=1.0)
				{
					v[i][j][k].isOn = true;
					v[i][j][k].r = r;
					v[i][j][k].g = g;
					v[i][j][k].b = b;
					v[i][j][k].a = a;
				}
			}
		}
	}
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
	int i, j, k;
	float ax, ay, az;
	for(i=0; i<nx; i++)
	{
		for(j=0; j<ny; j++)
		{
			for(k=0; k<nz; k++)
			{
				ax = pow(i-xcenter, 2)/rx;
				ay = pow(j-ycenter, 2)/ry;
				az = pow(k-zcenter, 2)/rz;
				if(ax+ay+az<=1.0)
				{
					v[i][j][k].isOn = false;
				}
			}
		}
	}
}
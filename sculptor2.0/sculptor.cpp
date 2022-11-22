#include "sculptor.h"

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
	
    for (i = 0; i < nx; i++) {
        for (j = 0; j < ny; j++) {
            delete[] v[i][j];
        }
        delete[] v[i];
    }
    delete[] v;
}

void Sculptor::setColor(float _r, float _g, float _b, float _a)
{
    r = _r;
    b = _b;
    g = _g;
    a = _a;
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

void Sculptor::writeOFF(const char* file)
{
	std::cout << "chamou writeoff" << std::endl;
    int i, j, k, cont=0, soma=0;
	std::ofstream fout;
	fout.open(file);
	if(!fout.is_open())
	{
		exit(1);
	}
	std::cout << "abriu arquivo" << std::endl;
	
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

void Sculptor::limpaVoxel()
{
    int i, j, k;
    for(i=1; i<nx-1; i++)
    {
        for(j=1; j<ny-1; j++)
        {
            for(k=1; k<nz-1; k++)
            {
                if(v[i-1][j][k].isOn==true&&
                   v[i][j-1][k].isOn==true&&
                   v[i][j][k-1].isOn==true&&
                   v[i+1][j][k].isOn==true&&
                   v[i][j+1][k].isOn==true&&
                   v[i][j][k+1].isOn==true)
                {
                    v[i][j][k].isOn=false;
                }
            }
        }
    }
}

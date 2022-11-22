#include "interpreter.h"

Interpreter::Interpreter(const char* fileEnter)
{
    infile.open(fileEnter);

    if(!infile.is_open())
    {
        exit(EXIT_FAILURE);
    }
}

void Interpreter::interpret(const char* fileExit)
{
    std::string sfile;
    //ler dimencoes do desenho
    infile >> sfile;
    infile >> l >> h >> d;
    Sculptor s(l, h, d);
    //ler figuras geometricas
    //std::vector<FiguraGeometrica*>::iterator itdraw;
    //itdraw=figs.begin();
    while(infile.good())
    {
        infile >> sfile;
        if(!infile.good())
        {
            break;
        }

        if(sfile.compare("putvoxel")==0)
        {
            infile >> ix0 >> iy0 >> iz0 >> ir >> ig >> ib >> ia;
            figs.push_back(new PutVoxel(ix0, iy0, iz0, ir, ig, ib, ia));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("cutvoxel")==0)
        {
            infile >> ix0 >> iy0 >> iz0;
            figs.push_back(new CutVoxel(ix0, iy0, iz0));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("putbox")==0)
        {
            infile >> ix0 >> ix1 >> iy0 >> iy1 >> iz0 >> iz1 >> ir >> ig >> ib >> ia;
            figs.push_back(new PutBox(ix0, ix1, iy0, iy1, iz0, iz1, ir, ig, ib, ia));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("cutbox")==0)
        {
            infile >> ix0 >> ix1 >> iy0 >> iy1 >> iz0 >> iz1;
            figs.push_back(new CutBox(ix0, ix1, iy0, iy1, iz0, iz1));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("putsphere")==0)
        {
            infile >> ix0 >> iy0 >> iz0 >> iraio >> ir >> ig >> ib >> ia;
            figs.push_back(new PutSphere(ix0, iy0, iz0, iraio, ir, ig, ib, ia));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("cutsphere")==0)
        {
            infile >> ix0 >> iy0 >> iz0 >> iraio;
            figs.push_back(new CutSphere(ix0, iy0, iz0, iraio));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("putellipsoid")==0)
        {
            infile >> ix0 >> iy0 >> iz0 >> iraiox >> iraioy >> iraioz >> ir >> ig >> ib >> ia;
            figs.push_back(new PutEllipsoid(ix0, iy0, iz0, iraiox, iraioy, iraioz, ir, ig, ib, ia));
            //(*itdraw)->draw(s);
            //itdraw++;
        }

        if(sfile.compare("cutellipsoid")==0)
        {
            infile >> ix0 >> iy0 >> iz0 >> iraiox >> iraioy >> iraioz;
            figs.push_back(new CutEllipsoid(ix0, iy0, iz0, iraiox, iraioy, iraioz));
            //(*itdraw)->draw(s);
            //itdraw++;
        }
    }
    //fechar arquivo
    infile.close();
    //desenhar figuras lidas
    
    std::vector<FiguraGeometrica*>::iterator itdraw;
    for(itdraw=figs.begin(); itdraw!=figs.end(); itdraw++)
    {
        (*itdraw)->draw(s);
    }
    
    //liberar memoria alocada
    for(itfig = figs.begin(); itfig!=figs.end(); itfig++)
    {
        delete *itfig;
    }
    //limpar arquivo
    s.limpaVoxel();
    //escrever arquivo off
    s.writeOFF(fileExit);
}
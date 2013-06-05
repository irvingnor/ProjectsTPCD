#include"encriptador.h"
int clave[3];
vector<Tercia> codigoEncriptado;
vector<Tercia> vTercia_tercias;

void generaClave()
{
	clave[0] = rand() % 10 + 1;
	clave[1] = rand() % 10 + 1;
	clave[2] = rand() % 10 + 1;
}

struct Average {
    void operator()( const blocked_range<int>& range ) const {
        for( int i=range.begin(); i!=range.end(); ++i )
        	vector<int> vI_tmp = vTercia_tercias[i].getTercia();
        	vector<int> xTmp;
		for(int j=0;j<3;j++)
		{
			xTmp.push_back(clave[j]);
		}
		Tercia t_tmp(xTmp);
		codigoEncriptado.push_back(t_tmp);
    }
};

int main()
{
	task_scheduler_init init;
	srand(time(NULL));
	generaClave();
	Encriptador encriptador("hola mundo");
	encriptador.separaCadena();
	encriptador.showTercias();
	vTercia_tercias = encriptador.getVTercia_tercias();
	Average avg;
	parallel_for( blocked_range<int>( 1, vTercia_tercias.size() ), avg );
	return 0;
}

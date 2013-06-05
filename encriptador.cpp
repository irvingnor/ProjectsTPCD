#include"encriptador.h"

Encriptador::Encriptador(string str_mensaje1)
{
	str_mensaje = str_mensaje1;
}

Encriptador::~Encriptador(){}

void Encriptador::separaCadena()
{
	int i_size = str_mensaje.size();
	vector<int> vI_elementos;
		
	for(int i = 0;i<i_size;i++)
	{
		int i_numeroTmp = 0;
		if(str_mensaje[i]!=' ')	
			i_numeroTmp = str_mensaje[i] - 'a' + 1;
		else
			i_numeroTmp = 0;
		
		if(vI_elementos.size() == 3)
		{
			Tercia tercia(vI_elementos);
			vTercia_tercias.push_back(tercia);
			vI_elementos.clear();
		}
		vI_elementos.push_back(i_numeroTmp);
	}
	
	
	if(i_size%3!=0)
	{
		for(int i=0;vI_elementos.size()<3;i++)
		{
			vI_elementos.push_back(0);
		}
		Tercia tercia(vI_elementos);
		vTercia_tercias.push_back(tercia);
	}
}

void Encriptador::showTercias()
{
	int i_size = vTercia_tercias.size();
	for(int i=0;i<i_size;i++)
	{
		vector<int> vI_terciaTmp = vTercia_tercias[i].getTercia();
		for(int j = 0; j < 3;j++)
		{
			cout<<vI_terciaTmp[j]<<"\t";
		}
		cout<<endl;
	}
}

vector<Tercia> Encriptador::getVTercia_tercias()
{
	return vTercia_tercias;
}

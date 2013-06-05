#include"tercia.h"

Tercia::Tercia(vector<int> vTercia)
{
	vI_elementos = vTercia;
}

Tercia::~Tercia(){}

vector<int> Tercia::getTercia()
{
	return vI_elementos;
}

void Tercia::setValues(int x0,int x1,int x2)
{
	vI_elementos[0] = x0;
	vI_elementos[1] = x1;
	vI_elementos[2] = x2;
}

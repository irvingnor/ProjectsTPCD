#ifndef ENCRIPTADOR_H_
#define ENCRIPTADOR_H_

#include<iostream>
#include<string>
#include <ctime>
#include <cstdlib>
#include"tercia.h"
#include"tbb/tbb.h"
#include"tbb/task_scheduler_init.h"
#include"tbb/parallel_for.h"
#include"tbb/blocked_range.h"

using namespace std;
using namespace tbb;

class Encriptador
{
	public:
		Encriptador(string);
		~Encriptador();
		void separaCadena();
		void encriptar();
		void desencriptar();
		void showTercias();
		vector<Tercia> getVTercia_tercias();
	private:
		string str_mensaje;
		vector<Tercia> vTercia_tercias;
};

#endif

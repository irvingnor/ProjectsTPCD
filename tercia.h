#ifndef TERCIA_H_
#define TERCIA_H_

#include<vector>

using namespace std;

class Tercia
{
	public:
		Tercia(vector<int>);
		~Tercia();
		vector<int> getTercia();
		void setValues(int,int,int);
	private:
		vector<int> vI_elementos;
};

#endif

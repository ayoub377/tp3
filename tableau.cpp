
#include "Header.h"
tableau::tableau(int n)
{
	tab= new float[n];
	taille = n;
	
	
}

tableau::~tableau()
{
	delete[]tab;
	
}

tableau::tableau(const tableau& tabl)
{
	this->tab = new float[tabl.taille];
	this->taille = tabl.taille;
	
	for (int i = 0;i < taille;i++)
	{
		this->tab[i] = tabl.tab[i];
	  }

}

tableau& tableau::operator=(const tableau& t)
{
	if (this->tab == t.tab)
		return *this;
	else
	{
		this->tab = new float[t.taille];
		this->taille = t.taille;
		
		for (int i = 0;i < taille;i++)
		{
			this->tab[i] = t.tab[i];
		}

		return *this;
	}




}

float& tableau::operator[](int i)
{
	if (i >= 0 && i <= taille)
	{
		return this->tab[i];
	}

	else
		cout << "indice non existant" << endl;

}










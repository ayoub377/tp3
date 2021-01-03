#include "Header.h"

tableauBorne::tableauBorne(int t, float b1, float b2):tableau(t),b1(b1),b2(b2)
{
}

void tableauBorne::operator()(int indice, float nombre)
{
	if (indice <= taille && indice >= 0)
	{
		if (nombre >= this->b1 && nombre <= this->b2)
		{
			this->tab[indice] = nombre;
			
		}
	}
	else if(indice>taille || indice<0)
	{
		cout << "la taille n'est pas correcte:" << endl;
	}
	else if(nombre<this->b1 || nombre > this->b2)
	{
		cout << "nombre pas entre les bornes du tableau:" << endl;
	}
}

void tableauBorne::initialize()
{
	int i = 0;
	while(i < taille)
	{
		cout << "enter a value:" << endl;
		cin >> tab[i];
		if ((tab[i] >= b1) && (tab[i] <= b2))
		{
			i++;

		}
		else
		{
			cout << "enter une autre valeur:";
			cin >> tab[i];
			i++;
		}
	}

}

void tableauBorne::print()
{
	for (int i = 0;i < taille;i++)
	{ 
		cout << "valeur :" << tab[i] << "\t";
	}
}



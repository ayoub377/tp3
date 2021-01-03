#include "date_h.h"
#include"includes.h"
date_h::date_h(int h,int min,int s, int j, int m, int a):heure(h,min,s),jour(j),mois(m),annee(a)
{ 
	if (jour < 0 || jour >31)
	{
		cout << "jour inexistant:entrez une date correcte:\n";
		this->jour = NULL;
	}
	 if (mois < 0 || mois>12)
	{
		cout << "mois inexistant:entrez une date valide!\n";
		this->mois = NULL;
	}
}
void date_h::afficher()
{
	 cout <<this->h<<":"<<this->m<<":"<<this->s<<":"<< this->jour << ":" << this->mois << ":" << this->annee<<endl;
}

bool date_h::operator>(const date_h& date) const
{
	return this->annee > date.annee;
}


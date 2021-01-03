#pragma once
#include "heure.h"
class date_h : public heure
{
private:
	int jour, mois, annee;
public:
	date_h(int,int,int, int, int, int);
	void afficher();
	bool operator> (const date_h&)const;

};


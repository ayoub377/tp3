#include "heure.h"
#include "includes.h"
heure::heure(int h,int m,int s)
{
	if (h <= 23 && h >= 0)
	{
		this->h = h;
	}



	else if (h > 23 || h < 0)
	{
		this->h = 0;
	}

	if (m <= 60 && m >= 0)
	{
		this->m = m;
	}
	else if (m > 60 || m < 0)
	{
		this->m = 0;
	}
	 if (s <= 60 && s >= 0)
	{
		this->s = s;
	}
	else if (s > 60 || s < 0)
	{
		this->s = 0;
	}

}

 bool  heure:: operator>(const heure& h)const
{
	
	 return this->h > h.h;
}

void heure::afficher()
{
	cout << this->h << ":" << this->m << ":" << this->s << endl;
}

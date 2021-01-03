#pragma once
class heure
{
public:
	heure(int  = 0, int = 0, int  = 0);
	bool operator> (const heure&)const;
	void afficher();
	

protected:
	int h, m, s;
};


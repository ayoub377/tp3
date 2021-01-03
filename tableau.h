#pragma once
class tableau
{
public:
	tableau(int);
	~tableau();
	tableau(const tableau&);
	tableau& operator=(const tableau&);
private:
	float& operator[](int);
	
protected:
	int taille;
	float* tab;
};


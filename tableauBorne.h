#pragma once
#include "tableau.h"
class tableauBorne :public tableau
{
	float b1, b2;
public:
	tableauBorne(int, float, float);
	tableau& operator[](const tableauBorne&);
	void operator()(int, float);
	void initialize();
	void print();
};


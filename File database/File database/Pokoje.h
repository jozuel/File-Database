#pragma once
#include <iostream>
class Pokoje
{
public:

	Pokoje();
	Pokoje(std::string * tab);
	~Pokoje();
private:
	int pokujID;
	int iloscMiejsc;
	int nrPokoju;
};


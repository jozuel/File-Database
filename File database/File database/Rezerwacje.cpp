#include "stdafx.h"
#include "Rezerwacje.h"
#include <string>

Rezerwacje::Rezerwacje()
{
}
Rezerwacje::Rezerwacje(std::string * tab)
{
	rezerwacjaID = stod(tab[0]);
	pokojID = stod(tab[1]);
	KlientID = stod(tab[2]);
	terminPoczatkowy = tab[3];
	terminKoncowy = tab[4];
	statusRezerwacji = tab[5];
}

Rezerwacje::~Rezerwacje()
{
}

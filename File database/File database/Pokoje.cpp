#include "stdafx.h"
#include "Pokoje.h"
#include <iostream>
#include <string>

Pokoje::Pokoje()
{
}
Pokoje::Pokoje(std::string* tab)
{
	pokujID = stod(tab[0]);
	iloscMiejsc = stod(tab[1]);
	nrPokoju = stod(tab[2]);
}

Pokoje::~Pokoje()
{
}

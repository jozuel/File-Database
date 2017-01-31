#include "stdafx.h"
#include "Uzytkownicy.h"
#include <string>

Uzytkownicy::Uzytkownicy()
{
}
Uzytkownicy::Uzytkownicy(std::string * tab)
{
	uzytkownikID = stod(tab[0]);
	imie = tab[1];
	nazwisko = tab[2];
	login = tab[3];
	haslo = tab[4];
	typ = tab[5];
}

Uzytkownicy::~Uzytkownicy()
{
}

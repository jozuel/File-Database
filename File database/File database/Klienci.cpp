#include "stdafx.h"
#include "Klienci.h"
#include <cstdlib>
#include <iostream>
#include <string>
//using namespace std;
Klienci::Klienci()
{
}
Klienci::Klienci(std::string *tab)
{
	klientID = std::stod(tab[0]);
	imie = tab[1];
	nazwisko = tab[2];
	adres = tab[3];
	telefon = tab[4];
	email = tab[5];
}

Klienci::~Klienci()
{
}

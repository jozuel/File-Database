#pragma once
#include <iostream>
#include "BazaLogow.h"
#include "Klienci.h"
#include "Pokoje.h"
#include "Rezerwacje.h"
#include "Uzytkownicy.h"
class BazaDanych
{
public:
	void otwarcieBazy();
	BazaDanych();
	~BazaDanych();

	std::string** select(std::string bazaDanych);
	void insert(std::string bazaDanych, std::string dane[]);
	void modyfy(std::string bazaDanych, int ID, std::string dane[]);
	int remove(std::string bazaDanych, int ID);
private:			//sciezka do po³¹czenia z plikami
	std::string nazwaTabeliLogow;
	std::string nazwaTabeliKlientow;
	std::string nazwaTabeliPokoi;
	std::string nazwaTabeliRezerwacji;
	std::string nazwaTabeliUzytkownikow;

	BazaLogow* tabelaLogow;
	Klienci* tabelaKlientow;
	Pokoje* tabelaPokojow;
	Rezerwacje* tabelaRezerwacji;
	Uzytkownicy* tabelaUzytkownikow;

};


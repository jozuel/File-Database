#pragma once
#include <iostream>
#include "BazaLogow.h"
#include "Klienci.h"
#include "Pokoje.h"
#include "Rezerwacje.h"
#include "Uzytkownicy.h"
#include <vector>
using namespace std;
class BazaDanych
{
public:
	void pobranieWartoscizTabel(fstream &klienci, fstream &pokoje, fstream &rezerwacje, fstream &uzytkownicy);
	void otwarcieBazy();
	void otwarcieConfig();
	BazaDanych();
	~BazaDanych();
	string** select(string bazaDanych);
	void insert(string bazaDanych, string dane[]);
	void modyfy(string bazaDanych, int ID, string dane[]);
	int remove(string bazaDanych, int ID);
private:			//sciezka do po³¹czenia z plikami
	string nazwaTabeliLogow;
	string nazwaTabeliKlientow;
	string nazwaTabeliPokoi;
	string nazwaTabeliRezerwacji;
	string nazwaTabeliUzytkownikow;

	vector <BazaLogow*> tabelaLogow;
	vector <Klienci*> tabelaKlientow;
	vector <Pokoje*> tabelaPokojow;
	vector <Rezerwacje*> tabelaRezerwacji;
	vector <Uzytkownicy*> tabelaUzytkownikow;
};


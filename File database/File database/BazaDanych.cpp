#include "stdafx.h"
#include "bazaDanych.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "BazaLogow.h"
#include "Klienci.h"
#include "Pokoje.h"
#include "Rezerwacje.h"
#include "Uzytkownicy.h"

using namespace std;
void BazaDanych::pobranieWartoscizTabel(fstream &klienci, fstream &pokoje, fstream &rezerwacje, fstream &uzytkownicy)
{
	Klienci *tmpKlienci;
	Pokoje *tmpPokoje;
	Rezerwacje *tmpRezerwacje;
	Uzytkownicy *tmpUzytkownicy;
	string* dane;
	int licznikDanych = 0;
	dane = new string[6];
	while (!klienci.eof())
	{
		if (licznikDanych < 6)		//pobieranie klientow
		{
			klienci >> dane[licznikDanych];
			licznikDanych++;
		}
		else
		{
			tmpKlienci = new Klienci(dane);
			tabelaKlientow.push_back(tmpKlienci);
			licznikDanych = 0;
		}
	}
	while (!pokoje.eof())		//pobieranie pokojow
	{
		if (licznikDanych < 3)
		{
			klienci >> dane[licznikDanych];
			licznikDanych++;
		}
		else
		{
			tmpPokoje = new Pokoje(dane);
			tabelaPokojow.push_back(tmpPokoje);
			licznikDanych = 0;
		}
	}
	while (!uzytkownicy.eof())
	{
		if (licznikDanych < 6)		//pobieranie uzytkownikow
		{
			klienci >> dane[licznikDanych];
			licznikDanych++;
		}
		else
		{
			tmpUzytkownicy = new Uzytkownicy(dane);
			tabelaUzytkownikow.push_back(tmpUzytkownicy);
			licznikDanych = 0;
		}
	}
	while (!rezerwacje.eof())
	{
		if (licznikDanych < 6)		//pobieranie rezerwacji
		{
			klienci >> dane[licznikDanych];
			licznikDanych++;
		}
		else
		{
			tmpRezerwacje = new Rezerwacje(dane);
			tabelaRezerwacji.push_back(tmpRezerwacje);
			licznikDanych = 0;
		}
	}		//nie wiem czy teraz zamknac plik i potem otwierac czy po prostu zapisywac jakos do pliku
}
void BazaDanych::otwarcieBazy()
{
	fstream klienci;
	fstream logi;
	fstream pokoje;
	fstream rezerwacje;
	fstream uzytkownicy;

	klienci.open(nazwaTabeliKlientow, ios::app);
	logi.open(nazwaTabeliLogow, ios::app);
	pokoje.open(nazwaTabeliPokoi, ios::app);
	rezerwacje.open(nazwaTabeliRezerwacji, ios::app);
	uzytkownicy.open(nazwaTabeliUzytkownikow, ios::app);
	pobranieWartoscizTabel(klienci, pokoje, rezerwacje, uzytkownicy);
	//jesli ktorys sie nie otworzy to mozna stworzyc baze danych
}
void BazaDanych::otwarcieConfig()
{
	ifstream plik;
	string nazwaTabeli;
	plik.open("config.txt", ios::app);	//jesli cos bedzie zapisywane to bedzie od konca (by nie nadpisywac)
	if (plik)
	{
		//gdy jest plik
		nazwaTabeliKlientow = "klienci.txt";		//dzieki temu jak cos bedzie brakowac to stworzy automatycznie tabele
		nazwaTabeliLogow = "logi.txt";
		nazwaTabeliPokoi = "pokoje.txt";
		nazwaTabeliRezerwacji = "rezerwacje.txt";
		nazwaTabeliUzytkownikow = "uzytkownicy.txt";
		while (!plik.eof())
		{
			getline(plik, nazwaTabeli);
			if (nazwaTabeli == "baza klientów")
			{
				getline(plik, nazwaTabeli);
				nazwaTabeliKlientow = nazwaTabeli;
			}
			else if (nazwaTabeli == "baza logów")
			{
				getline(plik, nazwaTabeli);
				nazwaTabeliLogow = nazwaTabeli;
			}
			else if (nazwaTabeli == "baza pokoi")
			{
				getline(plik, nazwaTabeli);
				nazwaTabeliPokoi = nazwaTabeli;
			}
			else if (nazwaTabeli == "baza rezerwacji")
			{
				getline(plik, nazwaTabeli);
				nazwaTabeliRezerwacji = nazwaTabeli;
			}
			else if (nazwaTabeli == "baza u¿ytkowników")
			{
				getline(plik, nazwaTabeli);
				nazwaTabeliUzytkownikow = nazwaTabeli;
			}
		}
		plik.close();
	}
	else
	{
		// "b³¹d otworzenia pliku"
		ofstream NowyPlik;
		NowyPlik.open("config.txt");		//twozy plik config
		NowyPlik << "baza klientów" << endl << "klienci.txt" << endl;
		NowyPlik << "baza logów" << endl << "logi.txt" << endl;
		NowyPlik << "baza pokoi" << endl << "pokoje.txt" << endl;
		NowyPlik << "baza rezerwacji" << endl << "rezerwacje.txt" << endl;
		NowyPlik << "baza u¿ytkowników" << endl << "uzytkownicy.txt" << endl;
		nazwaTabeliKlientow = "klienci.txt";	//ustawia startowe wartosci
		nazwaTabeliLogow = "logi.txt";
		nazwaTabeliPokoi = "pokoje.txt";
		nazwaTabeliRezerwacji = "rezerwacje.txt";
		nazwaTabeliUzytkownikow = "uzytkownicy.txt";

		NowyPlik.close();
	}
}
BazaDanych::BazaDanych()
{
	//otwarcie config.txt do sprawdzenia sciezek do bazy danych
	otwarcieConfig();
	otwarcieBazy();

}

BazaDanych::~BazaDanych()
{
	//zwolnienie pamieci z wektorow i zamkniecie plikow
}
void BazaDanych::insert(string bazaDanych, string dane[])
{

}
//bazaDanych::insert()
#include "stdafx.h"
#include "bazaDanych.h"
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "BazaLogow.h"
#include "Klienci.h"
#include "Pokoje.h"
#include "Rezerwacje.h"
#include "Uzytkownicy.h"

//using namespace std;
void BazaDanych::otwarcieBazy()
{
	std::fstream klienci;
	std::fstream logi;
	std::fstream pokoje;
	std::fstream rezerwacje;
	std::fstream uzytkownicy;

	klienci.open(nazwaTabeliKlientow);
	logi.open(nazwaTabeliLogow);
	pokoje.open(nazwaTabeliPokoi);
	rezerwacje.open(nazwaTabeliRezerwacji);
	uzytkownicy.open(nazwaTabeliUzytkownikow);

}
BazaDanych::BazaDanych()
{
	//otwarcie config.txt do sprawdzenia sciezek do bazy danych
	std::fstream plik;
	plik.open("config.txt");
	if (plik)
	{
		//wszystko ok

		plik.close();
	}
	else
	{
		// "b³¹d otworzenia pliku"
		std::ofstream plik;
		plik.open("config.txt");
		plik << "baza klientów" << std::endl << "klienci.txt" << std::endl;
		plik << "baza logów" << std::endl << "logi.txt" << std::endl;
		plik << "baza pokoi" << std::endl << "pokoje.txt" << std::endl;
		plik << "baza rezerwacji" << std::endl << "rezerwacje.txt" << std::endl;
		plik << "baza u¿ytkowników" << std::endl << "uzytkownicy.txt" << std::endl;
		nazwaTabeliKlientow = "klienci.txt";
		nazwaTabeliLogow = "logi.txt";
		nazwaTabeliPokoi = "pokoje.txt";
		nazwaTabeliRezerwacji = "rezerwacje.txt";
		nazwaTabeliUzytkownikow = "uzytkownicy.txt";

		plik.close();

	}


}

BazaDanych::~BazaDanych()
{
}
void BazaDanych::insert(std::string bazaDanych, std::string dane[])
{

}
//bazaDanych::insert()
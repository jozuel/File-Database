// File database.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BazaDanych.h"
#include <iostream>
#include <cstdio>
#include <string>
//nazwy tabel: klienci uzytkownicy logi pokoje rezerwacje
int main()
{
	BazaDanych baza;
	string* dane;
	int iloscDanych;
	string** caleDane=nullptr;
	dane = new string[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> dane[i];
	}
	baza.insert("logi",dane);
	baza.zapiszDane();
	iloscDanych = baza.select("logi", caleDane);
	for (int i = 0; i < iloscDanych; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout<<caleDane[i][j]<<" ";
		}
		cout << endl;
	}
	cin.ignore();
	getchar();
    return 0;
}


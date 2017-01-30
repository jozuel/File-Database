#pragma once
#include <iostream>
class Uzytkownicy
{
public:
	Uzytkownicy();
	~Uzytkownicy();
private:
	int uzytkownikID;
	std::string imie;
	std::string nazwisko;
	std::string login;
	std::string haslo;
	std::string typ;
};


#pragma once
#include <iostream>
class Klienci
{
public:
	Klienci();
	~Klienci();

private:
	int klientID;
	std::string imie;
	std::string nazwisko;
	std::string adres;
	std::string telefon;
	std::string email;
};


#pragma once
#include <iostream>
class BazaLogow
{
public:
	BazaLogow();
	~BazaLogow();
private:
	int logID;
	std::string Data;
	int godzina;
	std::string nazwaAkcji;
	std::string parametry;
	int uzytkownicyID;
};


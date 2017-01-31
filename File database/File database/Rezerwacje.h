#pragma once
#include <iostream>
class Rezerwacje
{
public:
	Rezerwacje();
	Rezerwacje(std::string * tab);
	~Rezerwacje();
private:
	int rezerwacjaID;
	int pokojID;
	int KlientID;
	std::string terminPoczatkowy;
	std::string terminKoncowy;
	std::string statusRezerwacji;
};


#pragma once
#include <iostream>
class Rezerwacje
{
public:
	Rezerwacje();
	~Rezerwacje();
private:
	int rezerwacjaID;
	int pokojID;
	int KlientID;
	std::string terminPoczatkowy;
	std::string terminKoncowy;
	std::string statusRezerwacji;
};


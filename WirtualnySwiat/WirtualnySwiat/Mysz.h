#pragma once
#include <iostream>
#include "Zwierze.h"

class Mysz:public Zwierze {
private:
	const int strength = 1;
	const int initiative = 6;
public:
	Mysz(int pos_X, int pos_Y);
	void kolizja(Swiat* swiat, Organizm& przeciwnik);
	void rysowanie() {
		std::cout << "M";
	}
	int get_Strength() {
		return strength;
	}
	int get_Initiative() {
		return initiative;
	}
};
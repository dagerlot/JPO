#pragma once
#include <iostream>
#include "Zwierze.h"

class Zmija:public Zwierze {
private:
	const int strength = 2;
	const int initiative = 3;
public:
	Zmija(int pos_X, int pos_Y);
	void akcja();
	void kolizja();
	void rysowanie() {
		std::cout << "Z";
	}
	int get_Strength() {
		return strength;
	}
	int get_Initiative() {
		return initiative;
	}
};

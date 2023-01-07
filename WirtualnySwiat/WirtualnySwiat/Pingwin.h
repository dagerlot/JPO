#pragma once
#include <iostream>
#include "Zwierze.h"

class Pingwin:public Zwierze {
private:
	const int strength = 5;
	const int initiative = 4;
public:
	Pingwin(int pos_X, int pos_Y);
	void rysowanie() {
		std::cout << "P";
	}
	int get_Strength() {
		return strength;
	}
	int get_Initiative() {
		return initiative;
	}
};

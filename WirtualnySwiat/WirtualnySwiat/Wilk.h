#pragma once
#include <iostream>
#include "Zwierze.h"

class Wilk:public Zwierze {
private:
	const int strength = 9;
	const int initiative = 5;
public:
	Wilk(int pos_X, int pos_Y);
	void kolizja();
	void rysowanie() {
		std::cout << "W";
	}
	int get_Strength() {
		return strength;
	}
	int get_Initiative() {
		return initiative;
	}
};
#pragma once
#include <iostream>
#include "Zwierze.h"

class Owca:public Zwierze {
private:
	const int strength = 4;
	const int initiative = 4;
public:
	Owca(int pos_X, int pos_Y);
	void akcja();
	void kolizja();
	void rysowanie() {
		std::cout << "O";
	}
	int get_Strength() {
		return strength;
	}
	int get_Initiative() {
		return initiative;
	}
};
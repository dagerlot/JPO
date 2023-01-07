#pragma once
#include <iostream>
#include "Roslina.h"

class Trawa : public Roslina {
public:
	Trawa(int pos_X, int pos_Y);
	void akcja(Swiat* swiat) {};
	void rysowanie() {
		std::cout << "T";
	}
};
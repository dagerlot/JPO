#pragma once
#include <iostream>
#include "Organizm.h"

class Zwierze :public Organizm {
public:
	void akcja() {
		int move1 = 0, move2=0;
		while (move1 == 0 && move2 == 0) {
			move1 = rand() % 3 - 1;
			move2 = rand() % 3 - 1;
		}
		this->pos_X = this->pos_X + move1;
		this->pos_Y = this->pos_Y + move2;
	}
};
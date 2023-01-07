#include <iostream>
#include "Mysz.h"

Mysz::Mysz(int pos_X, int pos_Y)
{
	this->pos_X = pos_X;
	this->pos_Y = pos_Y;
	this->live = 0;
}

void Mysz::kolizja(Swiat* swiat, Organizm& przeciwnik)
{
	int enemy_Strength, strength, x, y, enemy_initiative;
	strength = this->get_Strength();
	enemy_Strength = przeciwnik.get_Strength();
	x = przeciwnik.get_Pos_X();
	y = przeciwnik.get_Pos_Y();
	enemy_initiative = przeciwnik.get_Initiative();

	if (strength > enemy_Strength) {
		this->set_Pos_X(x);
		this->set_Pos_Y(y);
		przeciwnik.set_Pos_X(21);
		przeciwnik.set_Pos_Y(21);

		swiat->organizmy[x][y] = this;
	}
	else
	{
		int move1 = 0, move2 = 0, x, y;
		x = this->get_Pos_X();
		y = this->get_Pos_Y();
		while (move1 == 0 && move2 == 0) {
			move1 = rand() % 3 - 1;
			move2 = rand() % 3 - 1;
		}

		if (swiat->organizmy[x + move1][y + move1] == 0 && enemy_initiative != 4) {
			this->set_Pos_X(x + move1);
			this->set_Pos_Y(y + move2);
		}else
		{
			this->set_Pos_X(21);
			this->set_Pos_Y(21);
		}	
	}
}
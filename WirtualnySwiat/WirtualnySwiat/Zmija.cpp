#include <iostream>
#include "Zmija.h"

Zmija::Zmija(int pos_X, int pos_Y)
{
	this->pos_X = pos_X;
	this->pos_Y = pos_Y;
	this->live = 0;
}

void Zmija::kolizja(Swiat* swiat, Organizm& przeciwnik)
{
	int enemy_Strength, strength, x, y;
	strength = this->get_Strength();
	enemy_Strength = przeciwnik.get_Strength();
	x = przeciwnik.get_Pos_X();
	y = przeciwnik.get_Pos_Y();

	if (strength > enemy_Strength) {
		this->set_Pos_X(x);
		this->set_Pos_Y(y);
		przeciwnik.set_Pos_X(21);
		przeciwnik.set_Pos_Y(21);

		swiat->organizmy[x][y] = this;
	}
	else
	{
		this->set_Pos_X(21);
		this->set_Pos_Y(21);
		przeciwnik.set_Pos_X(21);
		przeciwnik.set_Pos_Y(21);

		swiat->organizmy[x][y] = 0;
	}
}

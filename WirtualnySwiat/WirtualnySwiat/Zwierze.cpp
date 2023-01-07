#include <iostream>
#include "Zwierze.h"
#include "Swiat.h"
#include "Organizm.h"
#include "Wilk.h"

void Zwierze::akcja(Swiat* swiat)
{
	int move1 = 0, move2 = 0, x, y;
	x = this->get_Pos_X();
	y = this->get_Pos_Y();
	while (move1 == 0 && move2 == 0) {
		move1 = rand() % 3 - 1;
		move2 = rand() % 3 - 1;
	}
	if (swiat->organizmy[x + move1][y + move2] == nullptr) {
		this->set_Pos_X(x + move1);
		this->set_Pos_Y(y + move2);
	}
	else
	{
		Organizm& organizm = *(swiat->organizmy[x + move1][y + move2]);
		kolizja(swiat, organizm);
	}
}

void Zwierze::kolizja(Swiat* swiat, Organizm& przeciwnik)
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
		this->set_Pos_X(21);
		this->set_Pos_Y(21);
	}

	if (enemy_initiative == 4) {
		this->set_Pos_X(21);
		this->set_Pos_Y(21);
	}
}

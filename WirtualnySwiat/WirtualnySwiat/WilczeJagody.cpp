#include <iostream>
#include "WilczeJagody.h"

WilczeJagody::WilczeJagody(int pos_X, int pos_Y)
{
	this->pos_X = pos_X;
	this->pos_Y = pos_Y;
	this->live = 0;
}

void WilczeJagody::kolizja(Swiat* swiat, Organizm* przeciwnik)
{
	int x, y;
	x = this->get_Pos_X();
	y = this->get_Pos_Y();
	this->set_Pos_X(21);
	this->set_Pos_Y(21);
	przeciwnik->set_Pos_X(21);
	przeciwnik->set_Pos_Y(21);

	swiat->organizmy[x][y] = 0;
}
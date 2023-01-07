#include "Guarana.h"

Guarana::Guarana(int pos_X, int pos_Y)
{
	this->pos_X = pos_X;
	this->pos_Y = pos_Y;
	this->live = 0;
}

void Guarana::kolizja(Swiat* swiat, Organizm* przeciwnik)
{
	int x, y, strength;
	x = this->get_Pos_X();
	y = this->get_Pos_Y();
	strength = przeciwnik->get_Strength();
	this->set_Pos_X(21);
	this->set_Pos_Y(21);
	przeciwnik->set_Strength(strength + 3);	

	swiat->organizmy[x][y] = przeciwnik;
}
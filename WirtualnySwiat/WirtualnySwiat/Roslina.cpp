#include <iostream>
#include "Roslina.h"
#include "Swiat.h"
#include "Organizm.h"
#include "Mysz.h"

Roslina::~Roslina(void)
{
}

void Roslina::kolizja(Swiat* swiat, Organizm& przeciwnik)
{
	int x, y;
	x = this->get_Pos_X();
	y = this->get_Pos_Y();
	this->set_Pos_X(21);
	this->set_Pos_Y(21);
	std::cout << &przeciwnik;
	swiat->organizmy[x][y] = &przeciwnik;
}
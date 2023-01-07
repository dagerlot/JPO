#include <iostream>
#include "Zwierze.h"
#include "Swiat.h"
#include "Organizm.h"
#include "Wilk.h"

void Zwierze::akcja()
{
	int move1 = 0, move2 = 0;
	while (move1 == 0 && move2 == 0) {
		move1 = rand() % 3 - 1;
		move2 = rand() % 3 - 1;
	}
	this->pos_X = this->pos_X + move1;
	this->pos_Y = this->pos_Y + move2;
}

void Zwierze::kolizja(Swiat* swiat, Organizm* przeciwnik)
{
	if (przeciwnik != 0) {
		std::cout << "jest przeciwnik";
	}
	else {
		std::cout << "nie ma przeciwnika";
	}
}

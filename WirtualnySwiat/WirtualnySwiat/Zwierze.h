#pragma once
#include <iostream>
#include "Organizm.h"
#include "Swiat.h"


class Zwierze :public Organizm {
public:
	void akcja(Swiat* swiat);
	void kolizja(Swiat* swiat, Organizm& przeciwnik);
};
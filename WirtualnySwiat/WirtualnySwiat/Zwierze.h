#pragma once
#include <iostream>
#include "Organizm.h"
#include "Swiat.h"


class Zwierze :public Organizm {
public:
	void akcja();
	void kolizja(Swiat* swiat, Organizm* przeciwnik);
};
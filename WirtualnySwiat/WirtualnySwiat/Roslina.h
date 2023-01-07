#pragma once
#include <iostream>
#include "Organizm.h"
#include "Swiat.h"
#include "Mysz.h"


class Roslina : public Organizm {
public:
	~Roslina(void);
	void kolizja(Swiat* swiat, Organizm& przeciwnik);
	int get_Strength() {
		return 0;
	};
};
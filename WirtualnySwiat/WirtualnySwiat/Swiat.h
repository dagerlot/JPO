#pragma once
#include "Organizm.h"


class Swiat {
public:
	class Organizm* organizmy[20][20] = {nullptr};
	Swiat swiat(Organizm* organizmy[20][20]);
	void wykonajTure(Swiat* swiat);
	void rysujSwiat();
	Swiat rysujMape();
};

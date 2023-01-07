#include <iostream>
#include "Organizm.h"
#include "Swiat.h"
#include "Wilk.h"

Swiat Swiat::swiat(Organizm* organizmy[20][20])
{
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			this->organizmy[i][j] = organizmy[i][j];
		}
	}
	return Swiat();
}

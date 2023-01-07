#include <iostream>
#include "Organizm.h"
#include "Swiat.h"
#include "Wilk.h"
#include <vector>

Swiat Swiat::swiat(Organizm* organizmy[20][20])
{
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			this->organizmy[i][j] = organizmy[i][j];
		}
	}
	return Swiat();
}

void Swiat::wykonajTure(Swiat* swiat)
{
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (this->organizmy[i][j] != nullptr) {
				this->organizmy[i][j]->akcja(swiat);
			}
		}
	}
}

void Swiat::rysujSwiat()
{
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (this->organizmy[i][j] != nullptr) {
				this->organizmy[i][j]->rysowanie();
			}else
			{
				std::cout << "x";
			}
		}
		std::cout << std::endl;
	}
}

Swiat Swiat::rysujMape()
{
	std::vector<Organizm*> lista;
	int x, y;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (this->organizmy[i][j] != nullptr) {
				Organizm* organizm = (this->organizmy[i][j]);
				lista.push_back(organizm);
			}
			organizmy[i][j] = nullptr;
		}
	}

	for (auto i = lista.begin(); i != lista.end(); ++i) {
		x = (*i)->get_Pos_X();
		y = (*i)->get_Pos_Y();
		this->organizmy[x][y] = (*i);
	}
	return *this;
}

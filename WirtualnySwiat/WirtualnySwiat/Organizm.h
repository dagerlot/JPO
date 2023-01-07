#pragma once
#include <iostream>
#include "Swiat.h"

class Organizm{
protected:
	int strength, initiative, pos_X, pos_Y, live;

public:
	bool operator > (Organizm& a);

	virtual int get_Strength() {
		return this->strength;
	};
	void set_Strength(int strength) {
		this->strength = strength;
	}
	
	virtual int get_Initiative() {
		return this->initiative;
	};

	int get_Pos_X() {
		return pos_X;
	};
	int get_Pos_Y() {
		return pos_Y;
	};

	int get_Live() {
		return live;
	}
	void set_Live(int live) {
		this->live = live;
	}

	void set_Pos_X(int pos_X) {
		this->pos_X = pos_X;
	};
	void set_Pos_Y(int pos_Y) {
		this->pos_Y = pos_Y;
	};
	virtual void akcja(Swiat* swiat) = 0;
	virtual void kolizja(Swiat* swiat, Organizm& przeciwnik) = 0;
	virtual void rysowanie() = 0;
};
#pragma once
#include <iostream>

class Organizm{
protected:
	int strength, initiative, pos_X, pos_Y;

public:
	int get_Strength() {
		return this->strength;
	};
	void set_Strength(int strength) {
		this->strength = strength;
	}
	
	int get_Initiative() {
		return this->initiative;
	};

	int get_Pos_X() {
		return pos_X;
	};
	int get_Pos_Y() {
		return pos_Y;
	};

	void set_Pos_X(int pos_X) {
		this->pos_X = pos_X;
	};
	void set_Pos_Y(int pos_Y) {
		this->pos_Y = pos_Y;
	};
	void akcja() {};
	void kolizja() {};
	void rysowanie() {};
};
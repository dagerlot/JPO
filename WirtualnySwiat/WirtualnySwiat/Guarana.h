#include <iostream>
#include "Roslina.h"

class Guarana : public Roslina {
public:
	Guarana(int pos_X, int pos_Y);
	void akcja() {};
	void kolizja() {};
	void rysowanie() {
		std::cout << "G";
	}
};
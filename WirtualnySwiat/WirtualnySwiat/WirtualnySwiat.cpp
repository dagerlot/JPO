#include <iostream>
#include "Trawa.h"
#include "WilczeJagody.h"
#include "Guarana.h"
#include "Mysz.h"
#include "Wilk.h"
#include "Pingwin.h"
#include "Zmija.h"
#include "Owca.h"
 
using namespace std;
int main()
{
    Trawa trawa(5, 4);
    WilczeJagody wilczeJagody(3, 2);
    Guarana guarana(2, 1);

    Mysz mysz(1, 1);
    Wilk wilk(5, 5);
    Pingwin pingwin(10, 10);
    Zmija zmija(18, 12);
    Owca owca(19, 0);

    cout <<"Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    /*cout << trawa.get_Pos_X() << "\t" << trawa.get_Pos_Y();
    cout << endl << trawa.get_Strength()<<endl;
    trawa.rysowanie();

    cout << endl << wilczeJagody.get_Pos_X() << "\t" << wilczeJagody.get_Pos_Y();
    cout << endl << wilczeJagody.get_Strength() << endl;
    wilczeJagody.rysowanie();

    cout << endl << guarana.get_Pos_X() << "\t" << guarana.get_Pos_Y();
    cout << endl << guarana.get_Strength() << endl;
    guarana.rysowanie();*/
}

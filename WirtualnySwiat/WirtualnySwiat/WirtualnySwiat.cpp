#include <iostream>
#include "Trawa.h"
#include "WilczeJagody.h"
#include "Guarana.h"
#include "Mysz.h"
#include "Wilk.h"
#include "Pingwin.h"
#include "Zmija.h"
#include "Owca.h"
#include "Swiat.h"
#include "Organizm.h"
 
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

    Mysz mysz_t(5, 4);
    Mysz mysz_j(3, 2);
    Mysz mysz_g(2, 1);

    Swiat swiat;
    
    swiat.organizmy[5][4] = &trawa;
    swiat.organizmy[3][2] = &wilczeJagody;
    swiat.organizmy[2][1] = &guarana;
    cout << &mysz_t;
    trawa.kolizja(&swiat, mysz_t);
    wilczeJagody.kolizja(&swiat, &mysz_j);
    guarana.kolizja(&swiat, &mysz_g);

    (*swiat.organizmy[5][4]).rysowanie();
    swiat.organizmy[5][4]->rysowanie();
    cout << &mysz_t;
    mysz_t.rysowanie();
    cout << endl;
    swiat.organizmy[3][2]->rysowanie();
    cout << endl;
    swiat.organizmy[2][1]->rysowanie();
    cout << endl;

    /*swiat.organizmy[5][4] = &trawa;

    trawa.kolizja(&swiat, 0);
    cout << trawa.get_Pos_X();
    cout << swiat.organizmy[5][4];*/
    // wilk.kolizja(&swiat, &mysz);

    /*cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;
    wilk.akcja();
    cout << "Pozycja: " << wilk.get_Pos_X() << "\t" << wilk.get_Pos_Y() << endl;*/
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

#include <iostream>
#include "Trawa.h"
#include "WilczeJagody.h"
#include "Guarana.h"

using namespace std;
int main()
{
    Trawa trawa(5, 4);
    WilczeJagody wilczeJagody(3, 2);
    Guarana guarana(2, 1);

    cout<<trawa.get_Pos_X()<<"\t"<<trawa.get_Pos_Y();
    cout << endl << trawa.get_Strength()<<endl;
    trawa.rysowanie();

    cout << endl << wilczeJagody.get_Pos_X() << "\t" << wilczeJagody.get_Pos_Y();
    cout << endl << wilczeJagody.get_Strength() << endl;
    wilczeJagody.rysowanie();

    cout << endl << guarana.get_Pos_X() << "\t" << guarana.get_Pos_Y();
    cout << endl << guarana.get_Strength() << endl;
    guarana.rysowanie();
}

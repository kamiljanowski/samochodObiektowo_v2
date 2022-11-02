#include <iostream>
#include "samochod.h"

using namespace std;

int main()
{

    Samochod s1;
    s1.wyswietl_samochod();

    Samochod s2;
    s2.dodaj_samochod();
    s2.wyswietl_samochod();

//    Samochod s[3];
//
//    for (int i=0; i<=2; i++){
//        s[i].dodaj_samochod();
//        s[i].wyswietl_samochod();
//    }
//
//    cout << "Koniec programu samochody. " << endl;

    return 0;
}

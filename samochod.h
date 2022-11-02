#include <iostream>

using namespace std;

class Samochod
{

    string marka;
    string model;
	int rocznik;
	int przebieg;


	public:

    Samochod(string="VW",string="Polo",int=2008,int=205000);
    ~Samochod();

    void dodaj_samochod();
    void wyswietl_samochod();

};

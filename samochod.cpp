#include <iostream>
#include "samochod.h"
#include <fstream>
#include <cstdlib>

using namespace std;

void Samochod::dodaj_samochod()
{
    cout<<endl<<"DODAWANIE NOWEGO SAMOCHODU DO BAZY: "<<endl;
    cout<<"Podaj marke: ";
    cin>>marka;
    cout<<"Podaj model: ";
    cin>>model;
    cout<<"Podaj rocznik: ";
    cin>>rocznik;
    cout<<"Podaj przebieg: ";
    cin>>przebieg;
}

void Samochod::wyswietl_samochod()
{
    if (marka=="BMW")   cout<<marka<<" jest the best :) . Twoj model to: "<<model<<". Rocznik: "<<rocznik<<". Przebieg: "<<przebieg<<"."<<endl ;
    else if (marka=="Audi")   cout<<marka<<" tez jest spoko . Twoj model to: "<<model<<". Rocznik: "<<rocznik<<". Przebieg: "<<przebieg<<"."<<endl ;
    else if (marka=="Porsche")   cout<<marka<<" is my dream! . Twoj model to: "<<model<<". Rocznik: "<<rocznik<<". Przebieg: "<<przebieg<<"."<<endl ;
    else cout<<marka<<" "<<model<<", rocznik: "<<rocznik<<", przebieg: "
        <<przebieg<<". Moj pierwszy samochodzik :)"<<endl;
}

Samochod::Samochod(string ma, string mo, int r, int p)
{
    marka = ma;
    model = mo;
    rocznik = r;
    przebieg = p;
}

Samochod::~Samochod()
{
    cout << endl << "Destruktor dla samochodu" << endl;
}

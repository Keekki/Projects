#include "Opiskelija.h"
#include<iostream>
#include<string>
#include<vector>

Opiskelija::Opiskelija(const string& aNimi, int aIka, const Osoite& aOsoite, const string& aOpNro, int aOpintopisteet)
	: Henkilo(aNimi, aIka, aOsoite), opintopisteet(aOpintopisteet), OpNro(aOpNro)
{
	cout << "Opiskelija -luokan rakentaja " << endl;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelija -luokan purkaja" << endl;
}

void Opiskelija::lisaaKurssi(const string& aKurssi)
{
	suoritetutKurssit.push_back(aKurssi);
}

void Opiskelija::setOpintopisteet(int aOpintopisteet)
{
	opintopisteet = aOpintopisteet;
}

void Opiskelija::setOpNro(const string& aOpNro)
{
	OpNro = aOpNro;
}

string Opiskelija::getOpNro() const
{
	return OpNro;
}

void Opiskelija::lisaaOpintopisteet(int aLisaaOP)
{
	lisapisteet = aLisaaOP;
}

void Opiskelija::tulostaTiedot() const
{
	cout << "Opiskelijan tiedot: " << endl;
	cout << getNimi() << endl;
	cout << "Ikä: " << getIka() << endl;
	cout << "Osoite: ";
	getOsoite().tulostaTiedot();
	cout << "Opiskelijanumero: " << getOpNro() << endl;
	cout << "Opintopisteet: " << opintopisteet << endl;
	int valinta, total, lisapisteet;
	cout << "Lisätäänkö opintopisteitä? (1. kyllä, 2. ei)" << endl;
	cin >> valinta;
	if (valinta == 1) {
		cout << "Montako pistettä lisätään?" << endl;
		cin >> lisapisteet;
		total = opintopisteet + lisapisteet;
		cout << "Opintopisteet: " << total << endl;
	}
	else if (valinta == 2) {
		cout << "Mitään ei lisätty." << endl;
	}
	cout << "Suoritetut kurssit: " << endl;
	for (string suoritetutKurssit : suoritetutKurssit) {
		cout << suoritetutKurssit << endl;
	}
}

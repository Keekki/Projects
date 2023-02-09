// Henkilo.cpp

#include "Henkilo.h"
#include <iostream>
#include <string>

using namespace std;

Henkilo::Henkilo() : nimi(""), ika(0) {
	cout << "Luodaan henkilo..." << endl;
}

Henkilo::Henkilo(string aNimi, int aIka) : nimi(aNimi), ika (aIka) {
	// Alustetaan nimi ja ikä luodessa olio
	cout << "Luodaan " << aNimi << "..." << endl;
}

Henkilo::Henkilo(string aNimi, int aIka, Osoite aOsoite) : nimi(aNimi), ika(aIka), osoite(aOsoite)
{
	cout << "Luodaan " << aNimi << ", jolla osoite alustettuna..." << endl;
}

// teht1
/*
Henkilo::Henkilo(const Henkilo& aHenkilo)
	: nimi(aHenkilo.nimi), ika(aHenkilo.ika) {
	cout << "Kopioidaan " << aHenkilo.nimi << aHenkilo.ika << endl;
	cin >> osoite.setKatu;
	cin >> osoite.setKunta;
	cin >> osoite.setPostinro;
}*/

//destructor
Henkilo::~Henkilo() {
	cout << nimi << " vapautettu muistista..." << endl;
}

void Henkilo::setIka(int aIka) {
	if (aIka >= 0) {
		ika = aIka;
	}
}

int Henkilo::getIka() const {
	return ika;
}

void Henkilo::setNimi(string aNimi) {
	nimi = aNimi;
}

string Henkilo::getNimi() const {
	return nimi;
}

void Henkilo::setOsoite(Osoite aOsoite)
{
	osoite = aOsoite;
}

Osoite Henkilo::getOsoite() const
{
	return osoite;
}



void Henkilo::tuloste() const {
	cout << "Nimi: " << nimi << endl;
	cout << "Ikä: " << ika << endl;

	//tulostetaan osoitetiedot
	osoite.tulostaTiedot();
}

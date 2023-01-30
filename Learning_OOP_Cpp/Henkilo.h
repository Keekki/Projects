//Henkilo.h

#pragma once
#include <string>
#include"Osoite.h"

using namespace std;

class Henkilo {
public:

	// constructor
	Henkilo();
	Henkilo(string aNimi, int aIka);
	Henkilo(string aNimi, int aIka, Osoite aOsoite);


	// destructor
	~Henkilo();


	void setIka(int aIka);
	int getIka() const;
	void setNimi(string aNimi);
	string getNimi() const;
	void setOsoite(Osoite aOsoite);
	Osoite getOsoite() const;
	void tuloste() const;

private:
	string nimi;
	int ika;
	Osoite osoite;
};
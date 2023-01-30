// main.cpp

#include<iostream> // aloita aina tällä c++
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <vector>
#include <fstream>
#include <cstring>
#include<stdio.h>
#include"Henkilo.h"
#include"Paivays.h"
#include"Noppa.h"
#include"Osoite.h"
#include"Opettaja.h"
#include "Opiskelija.h"


using namespace std; // otetaan käyttöön standard nimiavaruus, jossa mm cin, cout komennot

void teht2() {
	Henkilo ville("Ville", 22);
	ville.tuloste();
}// ville vapautettu muistista

// tehtävä 2 henkilön kanssa
void doSomethingArvoparametri(Henkilo aNimi) {
	Henkilo kalle;
	kalle.setNimi("Kalle");
	kalle.setIka(20);

	kalle.tuloste();
}

void doSomethingViittausparametri(const Henkilo& aNimi) {
	Henkilo kalle;
	kalle.setNimi("Kalle");
	kalle.setIka(20);

	kalle.tuloste();
}

int main() {
	setlocale(LC_ALL, "finnish");
/*
	// vk1

	cout << "Viikko 1" << endl;
	cout << endl;
	cout << endl;

	// tehtävä 1

	cout << "Tehtävä 1:" << endl;
	cout << endl;

	Henkilo kalle;
	kalle.setNimi("Kalle");
	kalle.setIka(20);

	kalle.tuloste();

	cout << endl;
	cout << endl;

	// tehtävä 2

	cout << "Tehtävä 2:" << endl;
	cout << endl;

	Paivays tanaan;
	tanaan.setPaiva(18);
	tanaan.setKuukausi(03);
	tanaan.setVuosi(2022);

	tanaan.tulostaPaivaysT();

	Paivays huomenna;
	huomenna.setPaiva(19);
	huomenna.setKuukausi(03);
	huomenna.setVuosi(2022);

	huomenna.tulostaPaivaysH();

	cout << endl;
	cout << endl;

	// tehtävä 3

	cout << "Tehtävä 3:" << endl;
	cout << endl;

	Paivays ask;
	ask.tulostaPaivaysAsk();

	cout << endl;

	// vk2

	cout << "Viikko 2" << endl;
	cout << endl;
	cout << endl;

	// tehtävä 1

	cout << "Tehtävä 1:" << endl;
	cout << endl;

	Henkilo pekka("Pekka", 20);
	pekka.tuloste();

	cout << endl;

	Henkilo maija;
	maija.tuloste();

	cout << endl;
	cout << endl;

	Paivays tanaan(25, 3, 2022);
	tanaan.tulostaPaivaysT();


	// tehtävä 2

	cout << "Tehtävä 2:" << endl;
	cout << endl;

	Henkilo pekka("Pekka", 20);
	pekka.tuloste();

	cout << "If-lohko alkaa..." << endl;

	if (true) {
		Henkilo sami("Sami", 25);
		sami.tuloste();
	}
	cout << "If-lohkosta poistuttu..." << endl;

	cout << endl;

	cout << "For-loop alkaa..." << endl;
	for (int i = 1; i <= 2; i++) { // tulostaa raimon 2 kertaa ja vapauttaa sen aina välissä
		Henkilo raimo("Raimo", 46);
		raimo.tuloste();
	}
	cout << "For-loop loppuu..." << endl;

	cout << endl;

	cout << "Aliohjelma alkaa..." << endl;

	teht2(); // kutsutaan aliohjelmaa villestä

	cout << "Aliohjelma loppuu..." << endl;

	cout << endl;

	if (true) {
		// luodaan henkilö pinoon
		Henkilo timo = Henkilo("Timo", 19);
		timo.tuloste();

		// luodaan henkilö kekoon
		Henkilo* esko = new Henkilo("Esko", 42);
		esko->tuloste();
		//delete esko; // kutsutaan destructoria
	}


	// tehtävä 3

	Noppa num;
	num.kerroViimeisenHeitonLukema();



	// viikko 3
	// tehtävä 2

	Henkilo matias("Matias", 21);
	matias.setOsoite(Osoite("Perkkoonkatu 1", "33850", "Tampere"));
	matias.tuloste();

	Henkilo lola("Lola", 2, Osoite("Kallantie 11", "45130", "Kouvola"));
	lola.tuloste();



	// viikko 4
	// tehtävä 3

	const int n = 10;
	int luvut[n];

	vector<Henkilo> henkilot;

	henkilot.push_back(Henkilo("Timppa", 51));
	henkilot.push_back(Henkilo("Samppa", 31));

	// iteration
	for (Henkilo h : henkilot) {
		h.tuloste();
	}

	// tehtävä 4

	const int n = 10;
	int luvut[n];

	//dynamic
	vector<Henkilo*> henkilot;

	//push_back
	Henkilo* ville = new Henkilo("Ville", 20);
	henkilot.push_back(ville);

	henkilot.push_back(new Henkilo("Kalle", 24));
	henkilot.push_back(new Henkilo("Maija", 36));
	henkilot.push_back(new Henkilo("Sami", 42));
	henkilot.push_back(new Henkilo("Raimo", 65));
	henkilot.push_back(new Henkilo("Timo", 23));

	// iteration
	for (Henkilo* h : henkilot) {
		h->tuloste();
	}
	*/
	 // Viikko 5
	// Tehtävät 1-3

	Opettaja raimo("Raimo Vormisto", 53, Osoite("Teiskontie 1", "33540", "Tampere"), "Tietotekniikka");
	raimo.lisaaKurssi("Luistelu");
	raimo.lisaaKurssi("Telinevoimistelu");
	raimo.lisaaKurssi("Keilaus");
	raimo.lisaaKurssi("Laskettelu");

	raimo.tulostaTiedot();

	Opiskelija timo("Timo Silakka", 24, Osoite("Sporttikatu 3", "45100", "Kouvola"), "585019520", 32);
	timo.lisaaKurssi("Luistelu");
	timo.lisaaKurssi("Telinevoimistelu");
	timo.lisaaKurssi("Keilaus");
	timo.lisaaKurssi("Laskettelu");

	timo.tulostaTiedot();

	return 0;
} // Pekka vapautetaan
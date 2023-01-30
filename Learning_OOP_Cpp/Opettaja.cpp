#include<iostream>
#include "Opettaja.h"
#include<string>
#include<vector>


Opettaja::Opettaja(const string& aNimi, int aIka, const Osoite& aOsoite, const string& aKoulutusala)
	: Henkilo(aNimi, aIka, aOsoite), koulutusala(aKoulutusala)
{
	cout << "Opettaja -luokan rakentaja " << endl;
}

Opettaja::~Opettaja()
{
	cout << "Opettaja -luokan purkaja" << endl;
}

void Opettaja::setKoulutusala(const string& aKoulutusala)
{
	koulutusala = aKoulutusala;
}

string Opettaja::getKoulutusala() const
{
	return koulutusala;
}

void Opettaja::lisaaKurssi(const string& aKurssi)
{
	kurssit.push_back(aKurssi);
}

void Opettaja::poistaKurssi(const string& aKurssi)
{
	//cout << "Minkä kurssin haluat poistaa?" << endl;

	if (find(kurssit.begin(), kurssit.end(), aKurssi) != kurssit.end()) {
		kurssit.erase(kurssit.begin());

		cout << "Kurssi poistettu" << endl;
	}
	else {
		cout << "Kurssia ei ole olemassa" << endl;
	}

}

void Opettaja::tulostaTiedot() const
{
	cout << "Opettajan tiedot: " << endl;
	cout << getNimi() << endl;
	cout << "Ikä: " << getIka() << endl;
	cout << "Osoite: ";
	getOsoite().tulostaTiedot();
	cout << "Koulutusala: " << koulutusala << endl;
	cout << "Vastuukurssit: " << endl;
	for (string s : kurssit) {
		cout << s << endl;
	}
}

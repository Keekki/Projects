//Paivays.cpp

#include "Paivays.h"
#include <iostream>
#include <string>

using namespace std;

void Paivays::setPaiva(int aPaiva) {
	if (aPaiva >= 0) {
		paiva = aPaiva;
	}
}

int Paivays::getPaiva() const {
	return paiva;
}

void Paivays::setKuukausi(int aKuukausi) {
	if (aKuukausi >= 0) {
		kuukausi = aKuukausi;
	}
}

void Paivays::setVuosi(int aVuosi) {
	if (aVuosi >= 0) {
		vuosi = aVuosi;
	}
}

void Paivays::tulostaPaivaysT() const {

	//cout << "Tänään on: " << paiva << "." << kuukausi << "." << vuosi << endl;

}

void Paivays::tulostaPaivaysH() const {

	cout << "Huomenna on: " << paiva << "." << kuukausi << "." << vuosi << endl;

}

void Paivays::tulostaPaivaysAsk() const {

	int askPaiva, askKK, askVuosi;

	cout << "Anna päivä: ";
	cin >> askPaiva;
	cout << endl;

	cout << "Anna kuukausi: ";
	cin >> askKK;
	cout << endl;

	cout << "Anna vuosi: ";
	cin >> askVuosi;
	cout << endl;

	cout << "Syötetty päiväys on: " << askPaiva << "." << askKK << "." << askVuosi << endl;

	if (askPaiva == 31 && askKK == 12) {
		cout << "Seuraava päivä on: " << 1 << "." << 1 << "." << askVuosi + 1 << endl;

	}

	else if (askPaiva == 31 && askKK == 1 || 3 || 5 || 7 || 8 || 10) {
		cout << "Seuraava päivä on: " << 1 << "." << askKK + 1 << "." << askVuosi << endl;
	}

	else if (askPaiva == 28 && askKK == 2) {
		cout << "Seuraava päivä on: " << 1 << "." << askKK + 1 << "." << askVuosi << endl;
	}

	else if (askPaiva == 30 && askKK == 4 || 6 || 9 || 11) {
		cout << "Seuraava päivä on: " << 1 << "." << askKK + 1 << "." << askVuosi << endl;
	}

	else {
		cout << "Seuraava päivä on: " << askPaiva + 1 << "." << askKK << "." << askVuosi << endl;
	}


}

Paivays::Paivays(int aPaiva, int aKuukausi, int aVuosi) : paiva(aPaiva), kuukausi(aKuukausi), vuosi(aVuosi)  {
	//Alustetaan päiväys luodessa olio
	cout << "Luodaan päiväys..." << endl;
	cout << "Tänään on: " << aPaiva << "." << aKuukausi << "." << aVuosi << endl;
}

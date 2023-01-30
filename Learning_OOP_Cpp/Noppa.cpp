// Noppa.cpp

#include "Noppa.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Noppa::Noppa() : luku(luku1) {
	cout << "Pyöräytetään noppaa..." << endl;
}


void Noppa::heitäNoppaa() {
	srand(time(0));
	luku1 = rand() % 6 + 1;
}


int Noppa::getViimeisinLukema() {

	return luku;
}


void Noppa::kerroViimeisenHeitonLukema() {
	cout << "Viimeisin heitto on " << luku1 << "!" << endl;
}

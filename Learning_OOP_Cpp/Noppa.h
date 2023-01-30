// Noppa.h

#pragma once
#include <string>
#include <cstdlib>

using namespace std;

class Noppa {

public:

	// const
	Noppa();
	//Noppa(int aLuku);


	//void setViimeisinLukema(int aLuku);;
	int getViimeisinLukema();
	void heitäNoppaa();
	void kerroViimeisenHeitonLukema();

private:
	int luku = 0;
	int luku1;

};

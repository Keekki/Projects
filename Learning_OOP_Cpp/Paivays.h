#pragma once
#include <string>

//Paivays.h

using namespace std;

class Paivays {
public:

	//constructor
	Paivays();
	Paivays(int aPaiva, int aKuukausi, int aVuosi);


	void setPaiva(int aPaiva);
	int getPaiva() const;
	void setKuukausi(int aKuukausi);
	int getKuukausi() const;
	void setVuosi(int aVuosi);
	int getVuosi() const;
	void tulostaPaivaysT() const;
	void tulostaPaivaysH() const;
	void tulostaPaivaysAsk() const;

private:
	int paiva;
	int kuukausi;
	int vuosi;
};

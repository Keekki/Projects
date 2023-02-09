#pragma once
#include <iostream>
#include "Henkilo.h"
#include<string>
#include<vector>

using namespace std;

class Opettaja :
    public Henkilo
{
public:
    Opettaja(const string& aNimi, int aIka, const Osoite& aOsoite, const string& aKoulutusala);
    ~Opettaja();
    void setKoulutusala(const string& aKoulutusala);
    string getKoulutusala() const;
    void lisaaKurssi(const string& aKurssi);
    void poistaKurssi(const string& aKurssi);
    void tulostaTiedot() const;

private:
    string koulutusala;
    vector<string> kurssit;
};


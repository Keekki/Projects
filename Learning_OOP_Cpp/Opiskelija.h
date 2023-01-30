#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Henkilo.h"
class Opiskelija :
    public Henkilo
{
public:
    Opiskelija(const string& aNimi, int aIka, const Osoite& aOsoite, const string& aOpNro, int aOpintopisteet);
    ~Opiskelija();
    void lisaaKurssi(const string& aKurssi);
    void lisaaOpintopisteet(int aLisaaOP);
    void setOpintopisteet(int aOpintopisteet);
    string getOpintopisteet();
    void setOpNro(const string& aOpNro);
    string getOpNro() const;
    void tulostaTiedot() const;

private:
    string OpNro;
    vector<string> suoritetutKurssit;
    int opintopisteet;
    int lisapisteet;
};


#include "Osoite.h"
#include<iostream>
using std::cout;
using std::endl;

Osoite::Osoite() {
	cout << "Osoite -luokan oletusrakentaja" << endl;
}

Osoite::Osoite(string aKatu, string aPostinro, string aKunta)
	: mKatu(aKatu), mPostinro(aPostinro), mKunta(aKunta)
{
	cout << "Osoite -luokan parametrillinen rakentaja" << endl;
}

void Osoite::setKatu(string aKatu)
{
	mKatu = aKatu;
}

string Osoite::getKatu() const
{
	return mKatu;
}

void Osoite::setPostinro(string aPostinro)
{
	mPostinro = aPostinro;
}

string Osoite::getPostinro() const
{
	return mPostinro;
}

void Osoite::setKunta(string aKunta)
{
	aKunta = mKunta;
}

string Osoite::getKunta() const
{
	return mKunta;
}

void Osoite::tulostaTiedot() const
{
	cout << "Osoitetiedot: " << "\n";
	cout << mKatu << "\n" << mPostinro << " " << mKunta << endl;
}









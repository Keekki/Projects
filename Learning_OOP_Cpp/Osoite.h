#pragma once
#include<string>
using std::string;

class Osoite
{
public:
	//constructors
	Osoite();
	Osoite(string aKatu, string aPostinro, string aKunta);

	//set ja get
	void setKatu(string aKatu);
	string getKatu() const;
	void setPostinro(string aPostinro);
	string getPostinro() const;
	void setKunta(string aKunta);
	string getKunta() const;

	// tulostus
	void tulostaTiedot() const;

private:
	string mKatu;
	string mPostinro;
	string mKunta;

};


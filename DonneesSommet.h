#pragma once
#include <string>
#include <iostream>
#include "Sommet.h"

using namespace std;

class DonneesSommet{
public:
	string nom = "";
	int x;
	int y;
	unsigned int numerotationPrefixe = 0;
	unsigned int numerotationSuffixe = 0;

	//Dijkstra
	static const unsigned LIBRE;
	static const unsigned OUVERT;
	static const unsigned FERME;


	Sommet<DonneesSommet> * pere;
	unsigned cout;
	unsigned etat;

	unsigned etiquette[2];
	
	//Circuits
	unsigned degreEntrant = 0;

	bool source = false;
	bool puit = false;

	DonneesSommet() { }
	DonneesSommet(const string& _nom, int _x = 0, int _y = 0) :nom(_nom), x(_x), y(_y) {}
	~DonneesSommet() { };
	friend ostream& operator <<(ostream & os, const DonneesSommet & s);
	
};


#pragma once
#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;

class Wektor
{
private:
	vector <double> v;
	unsigned int wymiar;

public:
	Wektor();
	Wektor(int);
	Wektor(char* nr);

	void wyswietl();
	unsigned int wymiar_v();

	void dodaj(Wektor &, Wektor &, Wektor &);
	void odejmij(Wektor &, Wektor &, Wektor &);
	void pomnoz(Wektor &, Wektor &, Wektor &);
	double dlugosc();
	double dlugosc(Wektor &);
	double skalarny(Wektor & w1, Wektor & w2);
	double kat_pomiedzy_wektorami(Wektor &, Wektor &);

	~Wektor();
};
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <cstdarg>
#include "Wektor.h"

using namespace std;


Wektor::Wektor(char* nr)
{
	cout << "TWORZENIE "<< nr << " WEKTORA " << "\nPodaj wymiar:\n";
	cin >> wymiar;
	
	double wsp;
	for (int i = 0; i < wymiar; i++)
	{
		cout << "Podaj " << i+1 << " wspolrzedna:\n";
		cin >> wsp;
		v.push_back(wsp);
	}
}

Wektor::Wektor(int wymiar)
{
	this->wymiar = wymiar;
	for (int i = 0; i < wymiar; i++) v.push_back(0.0);

}

void Wektor::wyswietl()
{
	cout << "[ ";
	for (int i = 0; i < (this->v).size(); i++)
	{
		if (i == this->v.size() - 1)	cout << v[i] << " ]";
		else							cout << v[i] << "; ";
	}
}

unsigned int Wektor::wymiar_v()
{
	return this->v.size();

}



void Wektor::dodaj(Wektor & v1, Wektor & v2, Wektor & v3)
{
	v3.wymiar = v1.wymiar_v();
	for (int i = 0; i < v3.wymiar; i++)
	{
		v3.v[i] = v1.v[i] + v2.v[i];
	}
};

void Wektor::odejmij(Wektor & v1, Wektor & v2, Wektor & v3)
{
	v3.wymiar = v1.wymiar_v();
	for (int i = 0; i < v3.wymiar; i++)
	{
		v3.v[i] = v1.v[i] - v2.v[i];
	}
};





double Wektor::dlugosc()
{
	double dlugosc = 0;
	for (int i = 0; i < this->wymiar; i++)
	{
		dlugosc += this->v[i] * this->v[i];
	}
	return sqrt(dlugosc);
};

double Wektor::dlugosc(Wektor & v1)
{
	double dlugosc = 0;
	for (int i = 0; i < this->wymiar; i++)
	{
		dlugosc += v1.v[i] * v1.v[i];
	}
	return sqrt(dlugosc);


};

void Wektor::pomnoz(Wektor & v1, Wektor & v2, Wektor & v3)
{
	v3.wymiar = v1.wymiar_v();
	for (int i = 0; i < v3.wymiar; i++)
	{
		v3.v[i] = v1.v[i] * v2.v[i];
	}
};

double Wektor::skalarny(Wektor & v1, Wektor & v2)
{
	double skalarny = 0;
	for (int i = 0; i < v1.wymiar; i++)
	{
		skalarny += v1.v[i] * v2.v[i];
	}
	return skalarny;
};

double Wektor::kat_pomiedzy_wektorami(Wektor & w1, Wektor & w2)
{
	if (w1.wymiar != w2.wymiar || w1.wymiar != 2) {
		cout << "wektory maja wiecej niz 2 wymiary!\n"; return -1;
		}
	double lenght1 = dlugosc(w1);
	double lenght2 = dlugosc(w2);
	double angle = skalarny(w1, w2);
	angle /= (lenght1*lenght2);
	double wynik= acos(angle) * 180 / 3.1415;
	return wynik;
}

Wektor::~Wektor()
{
}
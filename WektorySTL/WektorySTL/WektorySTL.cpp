#include "stdafx.h"
#include <vector>
#include<iostream>
#include "Wektor.h"
using namespace std;

int main()
{

	Wektor vector1("1"), vector2("2");

	if (vector1.wymiar_v() != vector2.wymiar_v()) cout << "Wktory maja rózne wymiary, nie mozna wykonac na nich operacji!\n";
	else
	{
		Wektor vector3(vector1.wymiar_v());

		

		
		vector3.dodaj(vector1, vector2, vector3);
		cout << "\nWYNIK DODANIA WEKTOROW:\n";
		vector3.wyswietl();

		vector3.odejmij(vector1, vector2, vector3);
		cout << "\nWYNIK ODEJMOWANIA WEKTOROW:\n";
		vector3.wyswietl();

		vector3.pomnoz(vector1, vector2, vector3);
		cout << "\nWYNIK MNOZENIA WEKTOROW:\n";
		vector3.wyswietl();

		
		cout << "\nKAT POMIEDZY WEKTORAMI:\n";
		cout <<(int) vector3.kat_pomiedzy_wektorami(vector1, vector2) << endl;
		
	}

	system("pause");
	return 0;
}
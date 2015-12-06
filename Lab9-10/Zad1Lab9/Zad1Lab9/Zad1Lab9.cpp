// Zad1Lab9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<stdlib.h>
#include"Bazowa.h"
#include"Pochodna.h"

int main()
{
	Bazowa b;
	Pochodna p;

	b.metoda();
	p.metoda();

	Bazowa *bptr= &p;
	bptr->metoda();

	system("pause");
    return 0;
}


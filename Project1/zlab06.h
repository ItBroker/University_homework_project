#pragma once
#include "zlab03.h"
#include <iostream>

class Obliczenia {
protected:
	const double pi = 3.14;

public:
	virtual double promienKolaWgPola() = 0;
	virtual double promienOkreguWgObwodu() = 0;
	virtual ~Obliczenia();
};

class Kwadrat : public Prostokat, public Obliczenia {
public:
	Kwadrat(string nazwa = "?", double bok = 0) : Prostokat(nazwa, bok, bok) {}
	~Kwadrat() { cout << "Kwadrat: " << nazwa << " koñczy dzia³anie" << endl; }
	string doTekstu();
	double promienKolaWgPola();
	double promienOkreguWgObwodu();
};


#include "zlab06.h"
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "pl_PL");
	Kwadrat kwadrat1("Kwadrek", 4);
	Kwadrat& refDoKwadrat = kwadrat1;
	double r0 = refDoKwadrat.promienKolaWgPola();
	double r1 = refDoKwadrat.promienOkreguWgObwodu();
	cout << "ro=" << r0 << endl << "r1=" << r1 << endl;

	return 0;
}

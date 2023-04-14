#pragma once
#include <random>
using namespace std;
class GeneratorLosowy {
private:
	static random_device device;
	GeneratorLosowy() {}

public:
	static unsigned short losujPomiedzy(unsigned short min, unsigned short max);
	static long losujPomiedzy(long min, long max);
	static int losujOdZeraDo(int max);
};

typedef GeneratorLosowy GEN;


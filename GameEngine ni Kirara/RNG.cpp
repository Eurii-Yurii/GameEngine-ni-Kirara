#include <iostream>

#include "RNG.h"

using namespace std;

int randomNumGen::randomNumberGenerator(int rngMax) {
	int RNG = 0;

	RNG = rand() % (rngMax - 1);

	return RNG;
}

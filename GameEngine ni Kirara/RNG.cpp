#include <iostream>
#include <glut.h>
#include "RNG.h"

using namespace std;

int RNG = 0;

int randomNumGen::randomNumberGenerator(int rngMax) {

	RNG = rand() % (rngMax - 1);

	return RNG;
}

void randomNumGen::getDih(int num)
{
	cout << RNG;
	randomNumberGenerator(6);
}

#include <iostream>
using namespace std;

int randomNumberGenerator(int rngMax) {
	int RNG = 0;

	RNG = rand() % (rngMax - 1);

	return RNG;
}
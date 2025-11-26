#include <iostream>
#include <glut.h>
#include "RNG.h"

using namespace std;

int RNG = 0;

int randomNumGen::randomNumberGenerator(int rngMax)
{
    int lastNumber = -1;

    int RNG = rand() % rngMax;

    if (RNG == lastNumber) {
        RNG = (RNG + 1) % rngMax;
    }

    lastNumber = RNG;
    return RNG;
}

void randomNumGen::getDih(int num) {
    //cout << RNG;
    randomNumberGenerator(6);
}
void randomNumGen::timerer(int time)
{
	randomNumGen::getDih(1);
	glutTimerFunc(2000, timerer, 0);
}

int randomNumGen::getRNG()
{
	return RNG;
}
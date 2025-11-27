#include <iostream>
#include <glut.h>

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "score.h"

using namespace std;

int scoreMultipleir = 0;
int actualMisses = 0;

void Score::scoreAdd(){
	score += 100;
	cout << "Score: " << score << endl;
}

void Score::missPenalty(){
	misses += 1;

	if (misses == 62) {
		misses = 0;
		actualMisses += 1;
		cout << "Misses: " << actualMisses << endl;
	}
}

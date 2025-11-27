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
int actualMisses = 1;
int streakNeeded = 5;

void Score::hitCounter(){
	hits += 1;
	streak += 1;
	cout << "Streak: " << streak << endl;
}

void Score::streakCounter(){
	if (streak > streakNeeded) {
		scoreMultipleir += 1;
		streakNeeded += 5;
		cout << "StreakNeeded: " << streakNeeded << endl;
	}
}

void Score::scoreAdd(){
	streakCounter();

	score += 100 * scoreMultipleir;

	cout << "Score: " << score << endl;
}

void Score::missPenalty(){
	misses += 1;

	if (misses == 62) {
		misses = 0;
		actualMisses += 1;
		streak = 1;
		cout << "Misses: " << actualMisses << endl;
	}
}

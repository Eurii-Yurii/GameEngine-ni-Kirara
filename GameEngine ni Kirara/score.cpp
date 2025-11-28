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
}

void Score::streakCounter(){
	if (streak > streakNeeded) {
		scoreMultipleir += 1;
		streakNeeded += 5;
	}
}

void Score::scoreAdd(){
	streakCounter();

	score += 100 * scoreMultipleir;

	cout << "Score: " << score << endl;
}

void Score::missPenalty(){

	misses++;
    streak = 0;

	if (misses >= 5) {
		cout << "Game Over!" << endl;
		glutLeaveGameMode;
		exit(0);
	}
}

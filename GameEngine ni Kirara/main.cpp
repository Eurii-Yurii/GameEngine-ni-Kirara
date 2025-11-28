#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "gravity.h"
#include "mButton.h"

using namespace std;

Gravity gravi;

Camera mCamera;
thisBox box, player;
float grav;

extern int currentTimer;
extern void resetButtonTimer();

void Initialize() {

}

void start() {
	inputs::control();
	mCamera.cameraControl(
		0, 0. - 20, 15,
		0, 0, 0,
		0, 10, 0
	);

	glutTimerFunc(0, randomNumGen::timerer, 0);

	extern int millisec;
	extern void buttonTimer(int value);

	glutTimerFunc(millisec, buttonTimer, currentTimer);
	resetButtonTimer();
}

void Update() 
{
	grav = Gravity::applyGrav();
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	player.Box(-15, grav, 2, 20, 30, -20, 20, 40, 60);
	thisBox::collide(player, box);
	mButton();
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}


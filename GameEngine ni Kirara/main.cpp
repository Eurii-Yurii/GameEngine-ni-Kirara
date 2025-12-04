#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "draw.h"
#include "lighting.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "gravity.h"
#include "mButton.h"
#include "firstPersonMovement.h"
#include "sound.h"


using namespace std;

Camera mCamera;
shapes box, player, sphere, pyramid, cylinder, disk, capsule;

float grav;

extern fpsMovement fpsMove;
extern int currentTimer;
extern void resetButtonTimer();

void Initialize() {

}

void start() {
	mCamera.cameraControl(
		0, 0. - 20, 15,
		0, 0, 0,
		0, 10, 0
	);
	
	playSound("Cats Cosy Course.wav");

	extern void buttonTimer(int value);

	resetButtonTimer();
	
	mCamera.cameraControl(
		0, 0. -20, 15,
		0, 0, 0,
		0, 1, 0
	);
}

void Update() 
{
	cout << "Kirara so cool ";
	inputs::control();
	fpsMove.firstPersonControl(1);
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	mButton();

}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
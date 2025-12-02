#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "drawSphere.h"
#include "drawPyramid.h"
#include "drawCylinder.h"
#include "drawCapsule.h"
#include "drawDisk.h"
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
thisBox box, player, sphere, pyramid, cylinder, disk, capsule;

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
	playSound("licht.wav");

	extern int millisec;
	extern void buttonTimer(int value);

	resetButtonTimer();
	
	/*mCamera.cameraControl(
		0, 0. -20, 15,
		0, 0, 0,
		0, 1, 0
	);*/
}

void Update() 
{
	
	grav = Gravity::applyGrav();
	inputs::control();
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	player.Box(-15, grav, 2, 20, 30, -20, 20, 40, 60);
	player.collide(box);
	mButton();

	/*fpsMove.firstPersonControl(0.1f);*/

}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "drawSphere.h"
#include "drawPyramid.h"
#include "lighting.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "gravity.h"
#include "mButton.h"
#include "firstPersonMovement.h"

using namespace std;

Camera mCamera;
thisBox box;
thisSphere sphere;
thisPyramid pyramid;

extern fpsMovement fpsMove;
extern int currentTimer;
extern void resetButtonTimer();

void Initialize() {

}

void start() {
	/*mCamera.cameraControl(
		0, 0. - 20, 15,
		0, 0, 0,
		0, 10, 0
	);*/
	/*glutTimerFunc(0, randomNumGen::timerer, 0);

	extern int millisec;
	extern void buttonTimer(int value);

	glutTimerFunc(millisec, buttonTimer, currentTimer);

	resetButtonTimer();*/
	mCamera.cameraControl(
		0, 0, 15,
		0, 0, 0,
		0, 1, 0
	);
}

void Update() 
{
	/*inputs::control();
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	mButton();*/

	/*sphere.Sphere(20, 20, 5);

	fpsMove.firstPersonControl(0.1f);*/
	pyramid.Pyramid(2, 2, 0, 2, 0, 102, 204);
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
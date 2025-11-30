#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "drawSphere.h"
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

extern fpsMovement fpsMove;
extern int currentTimer;
extern void resetButtonTimer();

float Xmove = 0.0f;
float Ymove = 0.0f;
float Zmove = 15.0f;

void Initialize() {

}

void start() {
	/*glutTimerFunc(0, randomNumGen::timerer, 0);

	extern int millisec;
	extern void buttonTimer(int value);

	glutTimerFunc(millisec, buttonTimer, currentTimer);

	resetButtonTimer();*/
	
}

void Update() 
{
	inputs::control();
	/*box.box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	mbutton();*/

	sphere.Sphere(20, 20, 5);

	fpsMove.firstPersonControl(0.1f);
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
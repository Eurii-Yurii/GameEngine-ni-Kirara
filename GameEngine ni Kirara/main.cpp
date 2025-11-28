#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "drawSphere.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "gravity.h"
#include "mButton.h"

using namespace std;

Camera mCamera;
thisBox box;
thisSphere sphere;
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
	/*box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
	mButton();*/

	sphere.Sphere(20, 20, 5);
}

void fixedUpdate() 
{
	int a = 0;

	cout << a << endl;
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
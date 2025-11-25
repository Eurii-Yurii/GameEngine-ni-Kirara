#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

Camera mCamera;

using namespace std;

draw box;

int dih;

void Initialize() {

}

void timerer(int time)
{
	randomNumGen::getDih(1);
	glutTimerFunc(2000, timerer, 0);
}

void Update() 
{
	box.Box(0, 0, 0, 5, 5, 5);
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	inputs::control();
	mCamera.cameraControl(
		0,0,20,
		0,0,0,
		0,1,0
	);

	glutTimerFunc(0, timerer, 0);
	glutMainLoop();
	return 0;
}
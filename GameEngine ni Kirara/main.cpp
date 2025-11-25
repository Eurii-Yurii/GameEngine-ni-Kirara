#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

Camera mCamera;

using namespace std;

thisBox box;

void Initialize() {

}

void Update() 
{
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	inputs::control();
	mCamera.cameraControl(
		0,0.-20,15,
		0,0,0,
		0,10,0
	);
	glutMainLoop();
	return 0;
}
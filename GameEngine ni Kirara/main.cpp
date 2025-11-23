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

void Update() 
{
	box.Box(0,0,0, 5,5,5);
	dih = randomNumGen::randomNumberGenerator(100);

	cout << dih;
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
	glutMainLoop();
	return 0;
}
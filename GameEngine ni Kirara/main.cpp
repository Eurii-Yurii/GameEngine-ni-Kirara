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

void Initialize() {

}

thisBox box;

void Update() 
{
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);	

	button button1, button2, button3, button4, button5;

	button1.drawButton(-13, 2, -1, 5, 5, 1);

	if(inputs::isKeyDown('a')) {
		button1.buttonPressed();
	}

	button2.drawButton(-2, 2, -1, 5, 5, 1);
	button3.drawButton(8, 2, -1, 5, 5, 1);
	button4.drawButton(-8, -5, -1, 5, 5, 1);
	button5.drawButton(3.5, -5, -1, 5, 5, 1);
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

	glutTimerFunc(0, randomNumGen::timerer, 0);
	glutMainLoop();
	return 0;
}
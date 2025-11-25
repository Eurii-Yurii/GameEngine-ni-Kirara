#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

using namespace std;

Camera mCamera;
thisBox box;

button button1, button2, button3, button4, button5;
int rando = 0;

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
	
}

void Update() 
{
	box.Box(-15, -10, -1, 20, 30, -20, 102, 0, 0);	
	rando = randomNumGen::getRNG();

	button1.drawButton(-13, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown(32)) 
	{
		button1.buttonPressed(true);
		button1.buttonLightUp(true);
		
	}
	else if (inputs::isKeyUp(32)) 
	{
		button1.buttonLightUp(false);
		button1.buttonPressed(false);
		
	}
	
	

	button2.drawButton(-2, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown('p')) {
		button2.buttonPressed(true);
	}
	else if (inputs::isKeyUp('p')) {
		button2.buttonPressed(false);
	}
	

	button3.drawButton(8, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown('w')) {
		button3.buttonPressed(true);
	}
	else if (inputs::isKeyUp('w')) {
		button3.buttonPressed(false);
	}
	
	

	button4.drawButton(-8, -5, -1, 5, 5, 1);
	if (inputs::isKeyDown('o')) {
		button::buttonPressed(true);
	}
	else if (inputs::isKeyUp('o')) {
		button::buttonPressed(false);
	}
	
	

	button5.drawButton(3.5, -5, -1, 5, 5, 1);
	if (inputs::isKeyDown('q')) {
		button5.buttonPressed(true);
	}
	else if (inputs::isKeyUp('q')) {
		button5.buttonPressed(false);
	}
	
	
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	start();
	glutMainLoop();
	return 0;
}
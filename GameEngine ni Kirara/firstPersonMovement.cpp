#include <iostream>
#include <glut.h>

using namespace std;

#include "firstPersonMovement.h"
#include "inputs.h"

fpsMovement fpsMove;

float
eyeX = 0.0f,
eyeY = -20.0f,
eyeZ = 15.0f,
centerX = 0.0f,
centerY = 0.0f,
centerZ = 0.0f,
upX = 0.0f,
upY = 1.0f,
upZ = 0.0f;


void fpsMovement::firstPersonControl(){
	if (inputs::isKeyDown('w')) {
		cout << "W key is being pressed." << endl;
		eyeY += moveSpeed;
		centerY += moveSpeed;
		fpsMovement::fpsCamera();
	}
	if (inputs::isKeyDown('s')) {
		cout << "S key is being pressed." << endl;
		eyeY -= moveSpeed;
		centerY -= moveSpeed;
		fpsMovement::fpsCamera();
	}
	if (inputs::isKeyDown('a')) {
		cout << "A key is being pressed." << endl;
		eyeX -= moveSpeed;
		centerX -= moveSpeed;
		fpsMovement::fpsCamera();
	}
	if (inputs::isKeyDown('d')) {
		cout << "D key is being pressed." << endl;
		eyeX += moveSpeed;
		centerX += moveSpeed;
		fpsMovement::fpsCamera();
	}
}

void fpsMovement::fpsCamera(){
	gluLookAt(eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		upX, upY, upZ);
}

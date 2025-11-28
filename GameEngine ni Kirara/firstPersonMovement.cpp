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
		eyeY += moveSpeed;
		centerY += moveSpeed;
	}
	if (inputs::isKeyDown('s')) {
		eyeY -= moveSpeed;
		centerY -= moveSpeed;
	}
	if (inputs::isKeyDown('a')) {
		eyeX -= moveSpeed;
		centerX -= moveSpeed;
	}
	if (inputs::isKeyDown('d')) {
		eyeX += moveSpeed;
		centerX += moveSpeed;
	}
}

void fpsMovement::fpsCamera(){
	gluLookAt(eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		upX, upY, upZ);
}

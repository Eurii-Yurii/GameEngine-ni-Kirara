#include <iostream>
#include <glut.h>

using namespace std;

#include "firstPersonMovement.h"
#include "inputs.h"
#include "Camera.h"

fpsMovement fpsMove;

float
eyeX = 0.0f,
eyeY = 0.0f,
eyeZ = 15.0f,
centerX = 0.0f,
centerY = 0.0f,
centerZ = 0.0f,
upX = 0.0f,
upY = 1.0f,
upZ = 0.0f;

extern Camera mCamera;

void fpsMovement::fpsCamera()
{
	mCamera.cameraControl(
		eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		upX, upY, upZ
	);
}

void fpsMovement::firstPersonControl(float moveSpeed)
{
	float speed = moveSpeed;
	float dirX = centerX - eyeX;
	float dirY = centerY - eyeY;
	float dirZ = centerZ - eyeZ;
	float rightX = -dirZ;
	float rightZ = dirX;



	fpsMovement::fpsCamera();

	mCamera.cameraControl(
		eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		upX, upY, upZ
	);

	if (inputs::isKeyDown('w')) {
		eyeX += dirX * speed;
		eyeY += dirY * speed;
		eyeZ += dirZ * speed;

		centerX += dirX * speed;
		centerY += dirY * speed;
		centerZ += dirZ * speed;
	}
	if (inputs::isKeyDown('s')) {
		eyeX -= dirX * speed;
		eyeY -= dirY * speed;
		eyeZ -= dirZ * speed;

		centerX -= dirX * speed;
		centerY -= dirY * speed;
		centerZ -= dirZ * speed;
	}
	if (inputs::isKeyDown('a')) {
		eyeX -= rightX * speed;
		eyeZ -= rightZ * speed;

		centerX -= rightX * speed;
		centerZ -= rightZ * speed;
	}
	if (inputs::isKeyDown('d')) {
		eyeX += rightX * speed;
		eyeZ += rightZ * speed;

		centerX += rightX * speed;
		centerZ += rightZ * speed;
	}
}
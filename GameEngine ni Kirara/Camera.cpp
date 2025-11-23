#include <glut.h>
#include <cmath>
#include <iostream>

#include "Camera.h"

Camera::Camera() {
	eyeX = 0.0f;
	eyeY = 0.0f;
	eyeZ = 20.0f;

	centerX = 0.0f;
	centerY = 0.0f;
	centerZ = 0.0f;

	upX = 0.0f;
	upY = 1.0f;
	upZ = 0.0f;
}

void Camera::cameraControl(float eyeX, float eyeY, float eyeZ,
	float centerX, float centerY, float centerZ,
	float upX, float upY, float upZ) {
	gluLookAt(eyeX, eyeY, eyeZ,
		centerX, centerY, centerZ,
		upX, upY, upZ);
}
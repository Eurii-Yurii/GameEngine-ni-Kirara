#include <iostream>
#include <glut.h>
#include "gravity.h"

int currenttime;
float deltaTime = 0;
int previousTime = 0;

float posX = 0.0f, posY = 0.0f, posZ = 0.0f;
float velX = 0.0f, velY = 0.0f, velZ = 0.0f;
float accX = 0.0f, accY = -2.0f, accZ = 0.0f;

float Gravity::applyGravity(float deltatime)
{
	currenttime = glutGet(GLUT_ELAPSED_TIME);
	deltaTime = (currenttime - previousTime) / 1000.0f;
	previousTime = currenttime;

	velY += accY * (deltaTime * 4);

	posY += velY * deltaTime;

	return posY;
}

int Gravity::GetGravity()
{
	return GRAVITY;
}
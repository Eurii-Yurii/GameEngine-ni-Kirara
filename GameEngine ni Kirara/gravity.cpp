#include <iostream>
#include <glut.h>
#include "gravity.h"

int frames = 0;
int currenttime;
int timebase = 0;
int previousTime = 0;//to know how many frames we rendered before the currentATime

static float posX = 0.0f, posY = 0.0f, posZ = 0.0f;
static float velX = 0.0f, velY = 0.0f, velZ = 0.0f;
static float accX = 0.0f, accY = -2.0f, accZ = 0.0f;

float Gravity::applyGrav()
{
    currenttime = glutGet(GLUT_ELAPSED_TIME);
    float deltaTime = (currenttime - previousTime) / 1000.0f;
    previousTime = currenttime;

    //ACCELERATION
    velY += accY * (deltaTime * 4);

    posY += velY * (deltaTime * 2);
    return posY;
}

float Gravity::getGrav()
{
    return GRAVITY;
}
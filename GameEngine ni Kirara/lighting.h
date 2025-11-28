#ifndef LIGHTING
#define LIGHTING
#include <glut.h>
#include <cmath>
#include <iostream>

class thisLight {
private:
	float
		lightPosX,
		lightPosY,
		lightPosZ,
		lightColR,
		lightColG,
		lightColB,
		lightColA;

public:
	thisLight();
	void lightSet();
	void lightColor(float lightColR, float lightColG, float lightColB, float lightColA);
	void lightPosition(float lightPosX, float lightPosY, float lightPosZ);
};

#endif
#include <glut.h>

using namespace std;

#include "lighting.h"

thisLight::thisLight() {
	lightPosX = 0.0f;
	lightPosY = 0.0f;
	lightPosZ = 0.0f;
	lightColR = 1.0f;
	lightColG = 1.0f;
	lightColB = 1.0f;
	lightColA = 1.0f;
}
void thisLight::lightSet(){
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_COLOR_MATERIAL);
}

void thisLight::lightColor(float lightColR, float lightColG, float lightColB, float lightColA){
	GLfloat light_color[] = { lightColR, lightColG, lightColB, lightColA };
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_color);
}

void thisLight::lightPosition(float lightPosX, float lightPosY, float lightPosZ){
	GLfloat light_pos[] = { lightPosX, lightPosY, lightPosZ };
	glLightfv(GL_LIGHT0, GL_POSITION, light_pos);
}

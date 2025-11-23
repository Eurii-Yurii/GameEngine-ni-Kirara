#include <glut.h>
#include <cmath>
#include <iostream>

#include "drawBox.h"

void Box(float posX, float posY, float posZ, float length, float width, float height) {

    glBegin(GL_QUADS);

    glVertex3f(posX, posY, posZ);
    glVertex3f(posX + width, posY, posZ);
    glVertex3f(posX + width, posY + length, posZ);
    glVertex3f(posX, posY + length, posZ);

    glVertex3f(posX, posY, posZ + height);
    glVertex3f(posX + width, posY, posZ + height);
    glVertex3f(posX + width, posY + length, posZ + height);
    glVertex3f(posX, posY + length, posZ + height);

    glVertex3f(posX, posY, posZ);
    glVertex3f(posX, posY, posZ + height);
    glVertex3f(posX, posY + length, posZ + height);
    glVertex3f(posX, posY + length, posZ);

    glVertex3f(posX + width, posY, posZ);
    glVertex3f(posX + width, posY, posZ + height);
    glVertex3f(posX + width, posY + length, posZ + height);
    glVertex3f(posX + width, posY + length, posZ);

    glVertex3f(posX, posY + length, posZ);
    glVertex3f(posX + width, posY + length, posZ);
    glVertex3f(posX + width, posY + length, posZ + height);
    glVertex3f(posX, posY + length, posZ + height);

    glVertex3f(posX, posY, posZ);
    glVertex3f(posX + width, posY, posZ);
    glVertex3f(posX + width, posY, posZ + height);
    glVertex3f(posX, posY, posZ + height);
    glEnd();
}
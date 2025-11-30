#include <glut.h>
#include <cmath>
#include <iostream>

#include "drawBox.h"
#include "drawSphere.h"
#include "drawPyramid.h"

thisBox::thisBox() {
	posX = 0;
	posY = 0;
	posZ = 0;
	length = 5;
	width = 5;
	height = 5;
}

void thisBox::Box(float posX, float posY, float posZ, float length, float width, float height, int R, int G, int B)
{
    glPushMatrix();
    glColor3ub(R, G, B);
    glBegin(GL_QUADS);
    glPushMatrix();
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
    glPopMatrix();
}

thisSphere::thisSphere() {
    slices = 0;
    stacks = 0;
    radius = 0;
}

void thisSphere::Sphere(float slices, float stacks, float radius) {
    glPushMatrix();
    GLUquadric* quad;
    quad = gluNewQuadric();
    gluQuadricDrawStyle(quad, GLU_FILL);
    gluQuadricNormals(quad, GLU_SMOOTH);
    gluSphere(quad, radius, slices, stacks);
    gluDeleteQuadric(quad);
    glPopMatrix();
}

thisPyramid::thisPyramid() {
    posX = 0;
    posY = 0;
    posZ = 0;
    height = 5;
}

void thisPyramid::Pyramid(float posX, float posY, float posZ, float height, int R, int G, int B) {
    glPushMatrix();
    glColor3ub(R, G, B);
    glBegin(GL_TRIANGLES);
    // Front
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    // Right
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    // Back
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    // Left
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glEnd();
    // Base
    glBegin(GL_QUADS);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    glEnd();
    glPopMatrix();
}
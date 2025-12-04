#include <glut.h>
#include <cmath>
#include <iostream>

#include "drawShapes.h"


using namespace std;

renderShape::renderShape() {

        //drawBox
        posX = 0;
        posY = 0;
        posZ = 0;
        length = 0;
        width = 0;
        //Capsule
        height = 0;
        radius = 0;
        height = 0;
        //Capsule/Cylinder
        slices = 0;
        stacks = 0;
        //Cylinder
        baseRadius = 0;
        topRadius = 0;
        height = 0;
        //Disk
        innerRadius = 0;
        outerRadius = 0;
        //Pyramid
        PyramidPosX = 0;
        PyramidPosY = 0;
        PyramidPosZ = 0;
        PyramidHeight = 0;
        //Sphere
        SphereSlices = 0;
        SphereStacks = 0;
        SphereRadius = 0;
}

void renderShape::Box(float posX, float posY, float posZ, float length, float width, float height, int R, int G, int B)
{
    this->posX = posX;
    this->posY = posY;
    this->posZ = posZ;
    this->length = length;
    this->width = width;
    this->height = height;

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



void renderShape::Sphere(float slices, float stacks, float radius) {
    glPushMatrix();
    GLUquadric* quad;
    quad = gluNewQuadric();
    gluQuadricDrawStyle(quad, GLU_FILL);
    gluQuadricNormals(quad, GLU_SMOOTH);
    gluSphere(quad, radius, slices, stacks);
    gluDeleteQuadric(quad);
    glPopMatrix();
}



void renderShape::Pyramid(float posX, float posY, float posZ, float height, int R, int G, int B) {


    glPushMatrix();
    glColor3ub(R, G, B);
    glBegin(GL_TRIANGLES);

    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    
    glVertex3f(posX, posY + height, posZ);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glEnd();
    
    glBegin(GL_QUADS);
    glVertex3f(posX - height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ + height / 2);
    glVertex3f(posX + height / 2, posY, posZ - height / 2);
    glVertex3f(posX - height / 2, posY, posZ - height / 2);
    glEnd();
    glPopMatrix();                                                                                                                                    
}



void renderShape::Cylinder(float baseRadius, float topRadius, float height, float slices, float stacks) {
    glPushMatrix();
    GLUquadric* quad;
    quad = gluNewQuadric();
    gluQuadricDrawStyle(quad, GLU_FILL);
    gluQuadricNormals(quad, GLU_SMOOTH);
    gluCylinder(quad, baseRadius, topRadius, height, slices, stacks);
    gluDeleteQuadric(quad);
    glPopMatrix();
}



void renderShape::Disk(float innerRadius, float outerRadius, float slices, float stacks) {
    glPushMatrix();
    GLUquadric* quad;
    quad = gluNewQuadric();
    gluQuadricDrawStyle(quad, GLU_FILL);
    gluQuadricNormals(quad, GLU_SMOOTH);
    gluDisk(quad, innerRadius, outerRadius, slices, stacks);
    gluDeleteQuadric(quad);
    glPopMatrix();
}



void renderShape::Capsule(float radius, float height, float slices, float stacks) 
{
    glPushMatrix();
    GLUquadric* quad;
    quad = gluNewQuadric();
    gluQuadricDrawStyle(quad, GLU_FILL);
    gluQuadricNormals(quad, GLU_SMOOTH);
    // Draw cylinder body
    gluCylinder(quad, radius, radius, height, slices, stacks);
    // Draw top hemisphere
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, height);
    gluSphere(quad, radius, slices, stacks);
    glPopMatrix();
    // Draw bottom hemisphere
    glPushMatrix();
    glTranslatef(0.0f, 0.0f, 0.0f);
    glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
    gluSphere(quad, radius, slices, stacks);
    glPopMatrix();
    gluDeleteQuadric(quad);
    glPopMatrix();
}

bool renderShape::collide(renderShape& other)
{
    float xSize = this->length / 2;
    float ySize = this->height / 2;
    float zSize = this->width / 2;

    // Size of the other collider
    float xSizeOther = other.length / 2;
    float ySizeOther = other.height / 2;
    float zSizeOther = other.width / 2;


 

    bool xCollision = this->posX - xSize >= other.posX + xSizeOther &&
        this->posX + xSize <= other.posX - xSizeOther;
 
    bool yCollision = this->posY - ySize >= other.posY + ySizeOther &&
        this->posY + ySize <= other.posY - ySizeOther;

    bool zCollision = this->posZ - zSize >= other.posZ + zSizeOther &&
        this->posZ + zSize <= other.posZ - zSizeOther;

    


    if (zCollision || yCollision || xCollision)
    {
        cout << "COLLIDING!" << endl;
        cout << this->posX << this->posY << this->posZ << endl;
        cout << other.posX << other.posY << other.posZ << endl;
        return false;
    }

    else
    {
        cout << "NOT colliding!!" << endl;
        cout << this->posX << this->posY << this->posZ << endl;
        cout << other.posX << other.posY << other.posZ << endl;
        return true;
    }
}


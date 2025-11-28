#include <glut.h>
#include <cmath>
#include <iostream>

#include "drawBox.h"

using namespace std;

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

float thisBox::GetPosX()
{
    return posX;
}
float thisBox::GetPosY()
{
    return posY;
}
float thisBox::GetPosZ()
{
    return posZ;
}


bool thisBox::collide(thisBox &player,thisBox &other)
{
    float xSize = player.length / 2;
    float ySize = player.height / 2;
    float zSize = player.width / 2;

    // Size of the other collider
    float xSizeOther = other.length / 2;
    float ySizeOther = other.height / 2;
    float zSizeOther = other.width / 2;

    
    // If there is an overlap, the objects collide
    // Check whether the x axis of the collider is completely left/right of the other collider

    bool xCollision = player.posX - xSize >= other.posX + xSizeOther &&
                      player.posX + xSize <= other.posX - xSizeOther;

    // Check whether the y axis of the collider is completely above/below of the other collider
    bool yCollision = player.posY - ySize >= other.posY + ySizeOther &&
                      player.posY + ySize <= other.posY - ySizeOther;

    // Check whether the z axis of the collider is completely front/behind of the other collider
    bool zCollision = player.posZ - zSize >= other.posZ + zSizeOther &&
                      player.posZ + zSize <= other.posZ - zSizeOther;

    // If the collider is somewhere completely left/right/up/below/in front/behind of the collider,
    // then we assume no collision is happening


    if (zCollision || yCollision || xCollision)
    {
        cout << "NOT COLLIDING" << endl;
        cout << player.posX << player.posY << player.posZ << endl;
        cout << other.posX << other.posY << other.posZ << endl;
        return false;
    }
    // Otherwise there is an overlap/intersection happening
    else
    {
        cout << "colliding!!" << endl;
        return true;
    }
}



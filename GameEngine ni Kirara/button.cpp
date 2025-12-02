#include <iostream>
#include <glut.h>

#include "draw.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

using namespace std;

int lightButt = 0;
bool button::isPressed = false;
bool button::isLightUp = false;

float button::pressedHeight = 1.5;

int R2 = 255;
int G2 = 0;
int B2 = 0;

bool button::isButtonPressed() {
    if (isPressed == true) {
        return true;
    }
    else {
        return false;
	}
}

void button::buttonLightUp(bool isLightUp)
{
    if (isLightUp == true)
    {
        button::isLightUp = true;
        R2 = 0;
        G2 = 255;
        B2 = 0;
    }
    else
    {
        button::isLightUp = false;
        R2 = 255;
        G2 = 0;
        B2 = 0;
    }
}

void button::buttonPressed(bool isPressed) {

	button::isPressed = isPressed;
    if (isPressed == false)
    {
        pressedHeight = 1.5;
    }
    else {
        pressedHeight = 0.5;
        if (isLightUp == true) {
            isLightUp = false;
        }
    }
}


void button::drawButton(float posX, float posY, float posZ, float length, float width, float height) {

	button::buttonPressed(isPressed);

    int R = 1, G = 1, B = 1;

    glColor3ub(32, 32, 32);
    box.Box(posX, posY, posZ, length, width, height, R, G, B);

    box.Box((posX + 0.5), (posY + 0.5), (posZ + 0.5), (length - 1), (width - 1), (height + pressedHeight), R2, G2, B2);
}



#include <iostream>
#include <glut.h>

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

using namespace std;

bool button::isPressed = false;

void button::buttonPressed() {
    cout << "Button Pressed!" << endl;
    isPressed = true;
}

void button::drawButton (float posX, float posY, float posZ, float length, float width, float height) {

    float pressedHeight = 1.5;

    if(isPressed == true) {
        pressedHeight = -0.1;
    }

    glColor3ub(32, 32, 32);
	box.Box(posX, posY, posZ, length, width, height, R, G, B);

    int R, G, B;
    R = 255;
    G = 0;
    B = 0;

    glColor3ub(R, G, B);
    box.Box((posX + 0.5), (posY + 0.5), (posZ + 0.5), (length - 1), (width - 1), (height + pressedHeight), R, G, B);
}

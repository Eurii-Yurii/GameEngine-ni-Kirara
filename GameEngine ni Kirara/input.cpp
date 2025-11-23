#include <iostream>
#include <glut.h>
#include "input.h"
using namespace std;



void Input::keyDown(unsigned char key, int x, int y) {
    cout << "Key down: " << key << endl;
}

void Input::keyUp(unsigned char key, int x, int y) {
    cout << "Key up: " << key << endl;
}

void Input::control()
{
	glutKeyboardFunc(Input::keyDown);
	glutKeyboardUpFunc(Input::keyUp);
}
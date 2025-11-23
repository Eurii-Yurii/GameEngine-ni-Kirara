#include "Inputs.h"
#include <glut.h>
#include <iostream>

using namespace std;

void inputs::keyDown(unsigned char key, int x, int y)
{
	cout << "Key Down: " << key << endl;
}

void inputs::keyUp(unsigned char key, int x, int y)
{
	cout << "Key Up: " << key << endl;
}

void inputs::control()
{
	glutKeyboardFunc(keyDown);
	glutKeyboardUpFunc(keyUp);
}
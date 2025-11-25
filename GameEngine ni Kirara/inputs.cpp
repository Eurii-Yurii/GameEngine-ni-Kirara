#include "Inputs.h"
#include <glut.h>
#include <iostream>

using namespace std;

bool inputs::keys[256] = { false };

void inputs::keyDown(unsigned char key, int x, int y)
{
	keys[key] = true;
	cout << "Key Down: " << key << endl;
}

void inputs::keyUp(unsigned char key, int x, int y)
{
	keys[key] = false;
	cout << "Key Up: " << key << endl;
}

void inputs::control()
{
	glutKeyboardFunc(keyDown);
	glutKeyboardUpFunc(keyUp);
}

bool inputs::isKeyDown(unsigned char key)
{
	return keys[key];
}

bool inputs::isKeyUp(unsigned char key)
{
	return !keys[key];
}
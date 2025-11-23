#include "Inputs.h"
#include "RNG.h"
#include "score.h"
#include <glut.h>
#include <iostream>

using namespace std;

void inputs::keyDown(unsigned char key, int x, int y)
{
	cout << "Key Down: " << key << endl;
	switch (key)
	{
	case 'w':
		int temp_score = 0;
		temp_score += 1;
		Score::ScoreCalc(temp_score);
		cout << "W is presset " << Score::getscore() << endl;
		break;
	}
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
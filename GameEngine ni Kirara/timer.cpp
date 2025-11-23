#include <iostream>
#include <glut.h>
#include "timer.h"
#include "engine.h"

using namespace std;

float targettime = 5.0f;


void timer::Timer()
{
	int dihtime = glutGet(GLUT_ELAPSED_TIME);
	float seconds = dihtime / 1000.0f;

	if (seconds >= targettime)
	{
		cout << "Times up!" << endl;
	}
	cout << "Timer ticked." << endl;
}
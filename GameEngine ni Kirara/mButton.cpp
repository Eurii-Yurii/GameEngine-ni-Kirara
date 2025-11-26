#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

using namespace std;

#include "drawBox.h"
#include "button.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"

#include "mButton.h"

extern thisBox box;

extern button button1, button2, button3, button4, button5;

randomNumGen rngGen;
int rando = rngGen.randomNumberGenerator(6);
int millisec = 1000;

void buttonTimer(int value) {
	rando = rngGen.randomNumberGenerator(6);
	glutTimerFunc(millisec, buttonTimer, 0);
}

void hitDetection() {
	switch (rando){
	case 0:
		if(inputs::isKeyDown(32)) {
			//cout << "Hit!" << endl;
			cout << rando << endl;
			rando = rngGen.randomNumberGenerator(6);
			millisec = 1000;
			button1.buttonLightUp(false);
		}
		break;
	case 1:
		if (inputs::isKeyDown('p')) {
			//cout << "Hit!" << endl;
			cout << rando << endl;
			rando = rngGen.randomNumberGenerator(6);
			millisec = 1000;
			button2.buttonLightUp(false);
		}
		break;
	case 2:
		if (inputs::isKeyDown('w')) {
			//cout << "Hit!" << endl;
			cout << rando << endl;
			rando = rngGen.randomNumberGenerator(6);
			millisec = 1000;
			button3.buttonLightUp(false);
		}
		break;
	case 3:
		if (inputs::isKeyDown('o')) {
			//cout << "Hit!" << endl;
			cout << rando << endl;
			rando = rngGen.randomNumberGenerator(6);
			millisec = 1000;
			button4.buttonLightUp(false);
		}
		break;
	case 4:
		if (inputs::isKeyDown('q')) {
			//cout << "Hit!" << endl;
			cout << rando << endl;
			rando = rngGen.randomNumberGenerator(6);
			millisec = 1000;
			button5.buttonLightUp(false);
		}
		break;
	}
}	

void mButton() {
	//cout << rando << endl;

	button1.drawButton(-13, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown(32))
	{
		button1.buttonPressed(true);
	}
	else if (inputs::isKeyUp(32))
	{
		button1.buttonPressed(false);
	}

	if (rando == 0)
	{
		button1.buttonLightUp(true);
		
	}
	else
	{
		button1.buttonLightUp(false);
		
	}

	button2.drawButton(-2, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown('p')) {
		button2.buttonPressed(true);
	}
	else if (inputs::isKeyUp('p')) {
		button2.buttonPressed(false);
	}
	if (rando == 1)
	{
		button2.buttonLightUp(true);
	}
	else
	{
		button2.buttonLightUp(false);
	}

	button3.drawButton(8, 2, -1, 5, 5, 1);
	if (inputs::isKeyDown('w')) {
		button3.buttonPressed(true);
	}
	else if (inputs::isKeyUp('w')) {
		button3.buttonPressed(false);
	}
	if (rando == 2)
	{
		button3.buttonLightUp(true);
	}
	else
	{
		button3.buttonLightUp(false);
	}

	button4.drawButton(-8, -5, -1, 5, 5, 1);
	if (inputs::isKeyDown('o')) {
		button::buttonPressed(true);
	}
	else if (inputs::isKeyUp('o')) {
		button::buttonPressed(false);
	}
	if (rando == 3)
	{
		button4.buttonLightUp(true);
	}
	else
	{
		button4.buttonLightUp(false);
	}

	button5.drawButton(3.5, -5, -1, 5, 5, 1);
	if (inputs::isKeyDown('q')) {
		button5.buttonPressed(true);
	}
	else if (inputs::isKeyUp('q')) {
		button5.buttonPressed(false);
	}
	if (rando == 4)
	{
		button5.buttonLightUp(true);
	}
	else
	{
		button5.buttonLightUp(false);
	}

	if (rando > 4 || rando < 0) {
		rando = rngGen.randomNumberGenerator(6);
	}

	hitDetection();	
}
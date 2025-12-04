#include <iostream>
#include <glut.h>

#include "drawShapes.h"

class button {
private:
	static int
		R,
		G,
		B;

	static float pressedHeight;
	static bool isPressed;
	static bool isLightUp;

public:
	static void drawButton(float posX, float posY, float posZ, float length, float width, float height);
	static void buttonPressed(bool isPressed);
	static void buttonLightUp(bool isLightUp);
	static bool isButtonPressed();
};

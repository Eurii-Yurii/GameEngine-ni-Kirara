#include <iostream>
#include <glut.h>

#include "drawBox.h"

class button {
private:
	int
		R,
		G,
		B;

	float pressedHeight;
	static bool isPressed;

public:
	void drawButton(float posX, float posY, float posZ, float length, float width, float height);
	void buttonPressed(bool isPressed);
};

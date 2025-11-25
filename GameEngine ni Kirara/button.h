#include <iostream>
#include <glut.h>

class drawbutton {
private:
	int
		R,
		G,
		B;

	float pressedHeight;

public:
	void drawButton(float posX, float posY, float posZ, float length, float width, float height);
};

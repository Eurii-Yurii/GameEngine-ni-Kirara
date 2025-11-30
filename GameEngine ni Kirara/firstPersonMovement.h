#ifndef FIRSTPERSONMOVE
#define FIRSTPERSONMOVE

#include "inputs.h"

class fpsMovement {
public:
	//float moveSpeed = 0.0f;

	void firstPersonControl(float moveSpeed);
	void fpsCamera();
};

extern fpsMovement fpsMove;

#endif // !FIRSTPERSONMOVE


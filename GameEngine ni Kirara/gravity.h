#ifndef GRAVITY_H
#define GRAVITY_H

class Gravity
{
private:
	const float GRAVITY = 9.8f;

public:
	float applyGravity(float deltatime);
	int GetGravity();
};


#endif // !GRAVITY_H


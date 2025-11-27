#ifndef GRAVITY_H
#define GRAVITY_H

class Gravity
{
private:
	const float GRAVITY = 9.8;
public:
	static float applyGrav();
	float getGrav();
};

#endif // !GRAVITY_H


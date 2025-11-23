#ifndef DRAWBOX_H
#define DRAWBOX_H


class draw {
private:
	float
		posX,
		posY,
		posZ,
		length,
		width,
		height;
public:

	draw();

	void Box(float posX, float posY, float posZ, float length, float width, float height);

};

#endif
#ifndef DRAWBOW_H
#define DRAWBOX_H


class drawBox {
private:
	float
		posX,
		posY,
		posZ,
		length,
		width,
		height;
public:

	drawBox();

	void Box(float posX, float posY, float posZ, float length, float width, float height);
};

#endif
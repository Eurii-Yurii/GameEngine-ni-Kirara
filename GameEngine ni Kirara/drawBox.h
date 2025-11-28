#ifndef DRAWBOX_H
#define DRAWBOX_H


class thisBox {
private:
	float
		posX,
		posY,
		posZ,
		length,
		width,
		height;
	public:

		thisBox();

		void Box(float posX, float posY, float posZ, float length, float width, float height, int R, int G, int B);

};

extern thisBox box;

#endif
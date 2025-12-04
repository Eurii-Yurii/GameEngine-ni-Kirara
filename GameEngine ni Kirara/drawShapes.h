#ifndef DRAWBOX_H
#define DRAWBOX_H


class renderShape {
private:
	float
		//drawBox
		posX,
		posY,
		posZ,
		length,
		width,
		//Capsule,
		radius,
		height,
		//Capsule/Cylinder
		slices,
		stacks,
		//Cylinder
		baseRadius,
		topRadius,
		CylinderHeight,
		//Disk
		innerRadius,
		outerRadius,
		//Pyramid
		PyramidPosX,
		PyramidPosY,
		PyramidPosZ,
		PyramidHeight,
		//Sphere
		SphereSlices,
		SphereStacks,
		SphereRadius;


	public:

		renderShape();

		void Box(float posX, float posY, float posZ, float length, float width, float height, int R, int G, int B);
		void Capsule(float radius, float height, float slices, float stacks);
		void Cylinder(float baseRadius, float topRadius, float height, float slices, float stacks);
		void Disk(float innerRadius, float outerRadius, float slices, float stacks);
		void Pyramid(float posX, float posY, float posZ, float height, int R, int G, int B);
		void Sphere(float slices, float stacks, float radius);
		bool collide(renderShape& other);

};

extern renderShape box;

#endif
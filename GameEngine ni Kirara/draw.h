#ifndef DRAW
#define DRAW


class shapes {
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

		shapes();

		void Box(float posX, float posY, float posZ, float length, float width, float height, int R, int G, int B);
		void Capsule(float radius, float height, float slices, float stacks, float posX, float posY, float posZ);
		void Cylinder(float baseRadius, float topRadius, float height, float slices, float stacks);
		void Disk(float innerRadius, float outerRadius, float slices, float stacks, float posX, float posY, float posZ);
		void Pyramid(float posX, float posY, float posZ, float height, int R, int G, int B);
		void Sphere(float slices, float stacks, float radius, float posX, float posY, float posZ);
		bool collide(shapes& other);

};

extern shapes box;

#endif
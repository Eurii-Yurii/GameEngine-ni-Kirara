#ifndef DRAWCYLINDER
#define DRAWCYLINDER

class thisCylinder {
	private:
	float
		baseRadius,
		topRadius,
		height,
		slices,
		stacks;
	public:
		thisCylinder();
		void Cylinder(float baseRadius, float topRadius, float height, float slices, float stacks);
};
extern thisCylinder cylinder;

#endif // !DRAWCYLINDER


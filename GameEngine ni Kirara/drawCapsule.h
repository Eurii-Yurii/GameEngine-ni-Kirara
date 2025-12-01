#ifndef DRAWCAPSULE
#define DRAWCAPSULE

class thisCapsule {
	private:
	float
		radius,
		height,
		slices,
		stacks;
	public:
		thisCapsule();
		void Capsule(float radius, float height, float slices, float stacks);
};
extern thisCapsule capsule;

#endif // !DRAWCAPSULE

#ifndef DRAWSPHERE
#define DRAWSPHERE

class thisSphere {
private:
	float
		slices,
		stacks,
		radius;

public:
	thisSphere();
	void Sphere(float slices, float stacks, float radius);
};

extern thisSphere sphere;

#endif // !DRAWSPHERE


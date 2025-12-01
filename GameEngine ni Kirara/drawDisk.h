#ifndef DRAWDISK
#define DRAWDISK

class thisDisk {
	private:
	float
		innerRadius,
		outerRadius,
		slices,
		stacks;
	public:
		thisDisk();
		void Disk(float innerRadius, float outerRadius, float slices, float stacks);
};
extern thisDisk disk;

#endif // !DRAWDISK


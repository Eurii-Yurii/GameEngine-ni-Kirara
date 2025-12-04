#ifndef RNG_H
#define RNG_H

class randomNumGen {
private:
	static int rngMax;

public:
	static int randomNumberGenerator(int rngMax);
	static void getRng(int num);
	static void timerer(int num);
	static int getRNG();
};

#endif


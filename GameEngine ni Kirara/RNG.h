#ifndef RNG_H
#define RNG_H

class randomNumGen {
private:
	static int rngMax;

public:
	static int randomNumberGenerator(int rngMax);
	static void getDih(int num);
	static void times(int num);
	static void timerer(int num);
};

#endif // !


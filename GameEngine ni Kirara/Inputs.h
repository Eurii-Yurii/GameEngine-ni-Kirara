#ifndef INPUT_H
#define INPUT_H


class inputs
{
public:
	static void keyDown(unsigned char key, int x, int y);
	static void keyUp(unsigned char key, int x, int y);
	static void control();
	static bool isKeyDown(unsigned char key);

private:
	static bool keys[256];
	static unsigned char lastKey;
};

#endif // !1

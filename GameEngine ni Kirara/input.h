#ifndef INPUT_H
#define INPUT_H

class Input {
public:
    static void keyDown(unsigned char key, int x, int y);
    static void keyUp(unsigned char key, int x, int y);
	static void control();
};




#endif // !INPUT_H


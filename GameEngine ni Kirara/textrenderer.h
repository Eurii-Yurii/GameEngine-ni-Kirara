
#ifndef TEXTRENDER_H
#define TEXTRENDER_H

#include <string>
using namespace std;

class TextRend
{
private:
	
public:
	static void drawString(void* font, float x, float y, string s);
	static void draw();
	static void output(int x, int y, void* font, string string);
};

#endif // !1


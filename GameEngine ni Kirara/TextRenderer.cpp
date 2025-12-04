#include <iostream>
#include <glut.h>
#include "textrenderer.h"




//The text I am trying to write to screen (global for testing)
string message = "hello world";

char space = ' ';


//The function for drawing text
void TextRend::drawString(void* font, float x, float y, string s)
{
    glRasterPos3f(x, y, 0.0);
    for (char i = 0; i < s.length(); ++i)
    {
        if (i == space)
            glutBitmapCharacter(font, space);
        else
            glutBitmapCharacter(font, s[i]);
    }
}


//the draw function
void TextRend::draw()
{
    if (message.length() > 0)
    {
        output(1, 0, GLUT_BITMAP_TIMES_ROMAN_24, message);
    }
}

void TextRend::output(int x, int y, void* font, string string)
{
    glColor3f(255, 0, 0);
    glRasterPos2f(x, y);
    int len, i;
    len = string.length();
    for (i = 0; i < len; i++) 
    {
        glutBitmapCharacter(font, string[i]);
    }
}
#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"
#include "inputs.h"


using namespace std;

draw box;

void Initialize() {

}

void Update() 
{
	box.Box(0,0,0, 5,5,5);
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	inputs::control();
	glutMainLoop();
	return 0;
}
#include <glut.h>
#include <cmath>
#include <iostream>
#include "engine.h"

#include "drawBox.h"


using namespace std;

void Initialize() {

}

void Update() {
	drawBox();
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
}
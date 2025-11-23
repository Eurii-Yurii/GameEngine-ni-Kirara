#include <glut.h>
#include <cmath>
#include <iostream>
#include <chrono>
#include "engine.h"
#include "score.h"
#include "drawBox.h"
#include "inputs.h"
#include "Camera.h"
#include "RNG.h"
#include "timer.h"
#include <thread>



using namespace std;

Camera mCamera;

draw box;

void Initialize() {

}

void Update()
{
	box.Box(0,0,0, 5,5,5);
	int DIH = randomNumGen::randomNumberGenerator(6);
	cout << DIH << endl;
	this_thread::sleep_for(chrono::milliseconds(5000));
}

int main(int argc, char** argv)
{
	PrepareEngine(argc, argv);
	int Thescore = Score::getscore();
	inputs::control();
	mCamera.cameraControl(
		0,0,20,
		0,0,0,
		0,1,0
	);
	glutMainLoop();
	return 0;
}
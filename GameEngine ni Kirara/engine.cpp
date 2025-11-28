#include "engine.h"
#include "graphics.h"
#include "Camera.h"
#include "lighting.h"

extern Camera mCamera;

thisLight light;

void PrepareEngine(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(200, 100);
	glutInitWindowSize(1080, 720);
	glutCreateWindow("Kirara Engine");

	//register callbacks
	glutDisplayFunc(RenderScene);
	glutReshapeFunc(ChangeWindowSize);
	//glutIdleFunc(renderScene); //Renders program at uncapped FPS
	glutTimerFunc(16, Timer, 0); //Renders program at ~60fps :]

	// Setup Camera
	/*gluLookAt(0.0f, 0.0f, 20.0f,
		0.0f, 0.0f, 0.0f,
		0.0f, 1.0f, 0.0f);*/
	glutIgnoreKeyRepeat(1);

	light.lightSet();
	light.lightColor(1.0f, 1.0f, 1.0f, 1.0f);
	light.lightPosition(0.0f, 0.0f, 20.0f);

	glEnable(GL_DEPTH_TEST);

	// Call initialize here 
	Initialize();

	//enter GLUT event processing cycle
	
}\
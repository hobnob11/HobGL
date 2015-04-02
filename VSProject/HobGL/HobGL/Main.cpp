#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"
#include <iostream>

void renderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 0.0, 0.0, 1.0); // clear red

	glutSwapBuffers();
}


int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(500, 300);
	glutInitWindowSize(800, 600);
	glutCreateWindow("OpenGL First Window :D");
	
	//gotta get that glew
	glewInit();
	if (glewIsSupported("GL_VERSION_4_5"))
	{
		std::cout << "GLEW Version is 4.5\n";
	}
	else
	{
	std::cout << "GLEW 4.5 not supported\n";
	}

	glEnable(GL_DEPTH_TEST);
	//Register Callbacks
	glutDisplayFunc(renderScene);

	glutMainLoop();

	return 0;
}
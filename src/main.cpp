#include <GLFW\glfw3.h>
#include "draw.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

static void error_callback(int error, const char* description)
{
	fputs(description, stderr);
}

int main(int argc, char** argv)
{
	//initialize
	glfwSetErrorCallback(error_callback);
	if(!glfwInit())
		exit(GL_FALSE);

	//create window
	int frameWidth = 800;int frameHeight = 600;
	GLFWwindow* window = glfwCreateWindow(frameWidth, frameHeight, "Window", NULL, NULL);
	if(!window)
	{
		glfwTerminate();
		exit(GL_FALSE);
	}

	glfwMakeContextCurrent(window); //make opengl context current
	glfwSwapInterval(1);

	while(!glfwWindowShouldClose(window))
	{

		glClearColor(0.0, 0.0, 0.0, 0.0);
		//glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		glOrtho(0.0, 10.0, 0.0, 10.0, -1.0, 1.0);

		Quad();
		
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	glfwDestroyWindow(window);
	glfwTerminate();
	exit(GL_TRUE);
	return 0;
}

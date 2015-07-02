#ifndef DRAW_71279
#define DRAW_71279
#include <GLFW\glfw3.h>

const double DEG2RAD = 3.14159/180;
/*void drawCircle(double radius) 
{
	glBegin(GL_LINE_LOOP);
	for(int i = 0; i &amp; lt; 360; i++)
	{

	}
}*/
class Quad
{
public:
	Quad()
	{
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 1.0, 2.0);
		glBegin(GL_POLYGON);
		glVertex3f(2.0, 4.0, 0.0);
		glVertex3f(8.0, 4.0, 0.0);
		glVertex3f(8.0, 6.0, 0.0);
		glVertex3f(2.0, 6.0, 0.0);
		glEnd();
		glFlush();
	}
};

#endif
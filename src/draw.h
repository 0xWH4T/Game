#ifndef DRAW_71279
#define DRAW_71279
#include <GLFW\glfw3.h>

namespace Draw
{
	const double DEG2RAD = 3.14159/180;
	/*void drawCircle(double radius) 
	{
		glBegin(GL_LINE_LOOP);
		for(int i = 0; i &amp; lt; 360; i++)
		{

		}
	}*/
	class Cube
	{

	};

	class Quad
	{
	public:
		Quad(GLfloat p1x, GLfloat p1y, GLfloat p2x, GLfloat p2y, GLfloat p3x, GLfloat p3y, GLfloat p4x, GLfloat p4y, GLclampf R, GLclampf G, GLclampf B)
		{
			glClear(GL_COLOR_BUFFER_BIT);
			glColor3f(R, G, B);
			glBegin(GL_POLYGON);
			glVertex3f(p1x, p1y, 0.0);
			glVertex3f(p2x, p2y, 0.0);
			glVertex3f(p3x, p3y, 0.0);
			glVertex3f(p4x, p4y, 0.0);
			glEnd();
			glFlush();
		}
	};
}

#endif
#include <gl/glut.h>
#include <iostream>

void DibujarTriangulo() {	
	glTranslatef(100.0f, 100.0f, 0.0f);
	glRotatef(15.f, 0.0f, 0.0f, 1.0f);
	glScalef(2.0f, 2.0f, 0.0f);
	glBegin(GL_QUADS);
	glVertex2f(100, 100);
	glVertex2i(100, 200);
	glVertex2i(200, 200);
	glVertex2i(200, 100);
	glEnd();

}
void dibujarLineas() {
	for (int y = 100; y < 600; y=y+100)
	{
		for (int x = 0; x < 800; x++)
		{
			glBegin(GL_POINTS);
			glVertex2d(x, y);
			glEnd();
		}
	}	
	for (int x = 100; x < 800; x = x + 100)
	{
		for (int y = 0; y < 600; y++)
		{
			glBegin(GL_POINTS);
			glVertex2d(x, y);
			glEnd();
		}
	}
}
void myInit() {
	glClearColor(0.44, 0.7, 0.4, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, 800.0, 0.0, 600.0);
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 0.7);
	dibujarLineas();
	glColor3f(1.0, 0.0, 0.7);
	DibujarTriangulo();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Demo circulos");
	myInit();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
 

// ====================================================================

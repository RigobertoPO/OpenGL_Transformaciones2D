//#include <stdlib.h>
//#include <windows.h>
//#include <GL/glut.h>
//#include <iostream>
//float angulo = 0;
//float traslado, escala = 0.5, mi = 0;
//void IniciarConfiguracion(void) {
//
//    glClearColor(1, 0, 1, 1);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    glOrtho(0, 800, 0, 600, 1, -1);
//
//}
//void Obtenerkeyboard(unsigned char key, int x, int y) {
//    if (key == 27)
//    {
//        exit(0);
//    }
//    else if (key == 81 || key == 113) { //Q Y q   rotar positivo
//        angulo += 1;
//        glRotatef(angulo, 0, 0, 1);
//        glutPostRedisplay();
//    }
//    else if (key == 69 || key == 101) { //E Y e   rotar negativo
//        angulo -= 1;
//        glRotatef(angulo, 0, 0, 1);
//        glutPostRedisplay();
//    }
//    else if (key == 68 || key == 100)  //D y d    Trasladar
//    {
//        traslado += 1;
//        glTranslatef(traslado, 0, 0);
//        glutPostRedisplay();
//    }
//    else if (key == 65 || key == 97)  //A y a    Trasladar
//    {
//        traslado -= 1;
//        glTranslatef(traslado, 0, 0);
//        glutPostRedisplay();
//    }
//    else if (key == 87 || key == 119) {  //W y w   Escalar
//        escala += 1;
//        glScalef(escala, escala, 0);
//        glutPostRedisplay();
//    }
//    else if (key == 83 || key == 115) {  //S y s   Escalar
//        escala -= 1;
//        glScalef(escala, escala, 0);
//        glutPostRedisplay();
//    }
//    (void)(x);
//    (void)(y);
//}
//void DibujarPoligonos() {
//    glBegin(GL_POLYGON);
//    glVertex2i(200, 200);
//    glVertex2i(200, 300);
//    glVertex2i(300, 300);
//    glVertex2i(300, 200);
//    glEnd();
//    glFlush();
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowPosition(50, 50);
//    glutInitWindowSize(800, 600);
//    glutCreateWindow("Poligono con transformaciones");
//    IniciarConfiguracion();
//    glutDisplayFunc(DibujarPoligonos);
//    glutKeyboardFunc(Obtenerkeyboard);
//    glutMainLoop();
//    return 0;
//}
#include <GL/glut.h>
float angle = 0; ///step01-1
void timer(int t) ///step01-1
{
    glutTimerFunc(500, timer, t+1); ///step01-1
    angle += 90; ///����+90��
    glutPostRedisplay(); ///step01-1 ���e�e��
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix(); ///step01-1
        glRotatef(angle, 0, 0, 1); ///step01-1
        glutSolidTeapot( 0.3 );
    glPopMatrix(); ///step01-1
    glutSwapBuffers();
}
int main(int argc, char**argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");

    glutTimerFunc(300, timer, 0);
    glutDisplayFunc(display);

    glutMainLoop();
}

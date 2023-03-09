#include <GL/glut.h>
float angle =0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glTranslatef(0.5,0,0);
        glRotatef(angle,0,1,0);
        glColor3f(0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glPushMatrix();
        glRotatef(angle,0,1,0);
        glTranslatef(0.5,0,0);
        glColor3f(1,1,0);
        glTranslatef(0,0.5,0);
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}

int main(int argc,char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}

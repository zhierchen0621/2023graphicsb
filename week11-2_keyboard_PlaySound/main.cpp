#include<windows.h>
#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)
{///step01-1 ///step01-2
    if(key=='1') PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\do.wav",NULL,SND_ASYNC);
    if(key=='2') PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\re.wav",NULL,SND_ASYNC);
    if(key=='3') PlaySound("C:\\Users\\Administrator\\Desktop\\do-re-mi\\mi.wav",NULL,SND_ASYNC);
}///step01-2
int main(int argc,char ** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week11");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);///step01-1

    glutMainLoop();
}

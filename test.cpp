
//////////////////////////////////////////////////////// 
// 
// This should be your first OpenGL/Glut program 
// do nothing but draw a yellow rectangular polygon at the 
// center of the window 
// 
//////////////////////////////////////////////////////// 

#include <GLUT/glut.h> 
#include <OpenGL/gl.h> 

void display() 
{ 

  glClear(GL_COLOR_BUFFER_BIT); 
  glColor4f(1,1,0,1); 

  glBegin(GL_POLYGON); 
    glVertex2f(-0.5, -0.5); 
    glVertex2f(-0.5,  0.5); 
    glVertex2f(0.5, 0.5); 
    glVertex2f(0.5, -0.5); 
  glEnd(); 
  glFlush(); 

} 

int main(int argc, char** argv) 
{ 
  glutInit(&argc, argv); 
  glutCreateWindow("simple"); 
  glutDisplayFunc(display); 
  glutMainLoop(); 
} 

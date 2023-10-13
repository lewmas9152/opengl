#include <GL/gl.h>
#include <GL/glut.h>

// Define the size of the window
#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 500

void display() {
  // Clear the window
  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  // Draw a red triangle
  glColor3f(1.0f, 0.0f, 0.0f);
  glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
  glEnd();

  // Flush the drawing commands
  glFlush();
}

int main(int argc, char** argv) {
  // Initialize GLUT
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  // Create a window
  glutCreateWindow("OpenGL Example");
  glutDisplayFunc(display);

  // Enter the main loop
  glutMainLoop();

  return 0;
}
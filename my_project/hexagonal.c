#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

// Define the vertex coordinates of a hexagon
GLfloat hexagonVertices[] = {
  -0.5f, -0.5f, // 0
  0.5f, -0.5f, // 1
  0.5f, 0.5f, // 2
  -0.5f, 0.5f, // 3
  -0.75f, 0.0f, // 4
  0.75f, 0.0f // 5
};

// Define the indices of the vertex coordinates to draw the hexagon
GLuint hexagonIndices[] = {
  0, 1, 2, 3, 4, 5, 0
};

// Draw a hexagon
void drawHexagon() {
  // Enable vertex arrays
  glEnableClientState(GL_VERTEX_ARRAY);

  // Set the vertex array pointer to the hexagon vertex coordinates
  glVertexPointer(2, GL_FLOAT, 0, hexagonVertices);

  // Draw the hexagon using the vertex array pointer
  glDrawElements(GL_LINE_LOOP, 7, GL_UNSIGNED_INT, hexagonIndices);

  // Disable vertex arrays
  glDisableClientState(GL_VERTEX_ARRAY);
}

// Display function
void display() {
  // Clear the color buffer
  glClear(GL_COLOR_BUFFER_BIT);

  // Set the drawing color to black
  glColor3f(0.5f, 0.5f, 0.5f);

  // Draw the hexagon
  drawHexagon();

  // Swap the buffers
  glutSwapBuffers();
}

int main(int argc, char** argv) {
  // Initialize GLUT
  glutInit(&argc, argv);

  // Create a window
  glutCreateWindow("Hexagon");

  // Set the display function
  glutDisplayFunc(display);

  // Enter the GLUT main loop
  glutMainLoop();

  return 0;
}

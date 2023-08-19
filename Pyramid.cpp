#include "Pyramid.h"

void Pyramid::drawPyramid(float x, float y, float z, float size) {
	glPushMatrix();
	glTranslatef(x, y, z);
    glBegin(GL_TRIANGLES);

    // Base de la pirámide (triángulos)
    glVertex3f(-size, -size, -size);  // V0
    glVertex3f(size, -size, -size);   // V1
    glVertex3f(0.0, -size, size);    // V2

    glVertex3f(-size, -size, -size);  // V0
    glVertex3f(0.0, -size, size);    // V2
    glVertex3f(0.0, size, 0.0);     // V3

    glVertex3f(0.0, -size, size);    // V2
    glVertex3f(size, -size, -size);   // V1
    glVertex3f(0.0, size, 0.0);     // V3

    glVertex3f(size, -size, -size);   // V1
    glVertex3f(-size, -size, -size);  // V0
    glVertex3f(0.0, size, 0.0);     // V3

    glEnd();

    glBegin(GL_QUADS);
    // Caras laterales (cuadrado)
    glVertex3f(-size, -size, -size);  // V0
    glVertex3f(size, -size, -size);   // V1
    glVertex3f(0.0, size, 0.0);     // V3
    glVertex3f(0.0, -size, size);    // V2

    glEnd();
	glPopMatrix();
}

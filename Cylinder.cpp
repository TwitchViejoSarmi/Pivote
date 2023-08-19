#include "Cylinder.h"

void Cylinder::drawCylinder(float x, float y, float z, float size) {
    glPushMatrix();
    glTranslatef(x, y, z);
    glRotatef(90, 0, 1, 0);

    // Base superior.
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0, 0.0, size * 0.5);
    for (int i = 0; i <= 360; i += 10) {
        float angle = static_cast<float>(i) * 3.14159 / 180.0;
        glVertex3f(size * 0.5 * cos(angle), size * 0.5 * sin(angle), size * 0.5);
    }
    glEnd();

    // Base inferior.
    glBegin(GL_TRIANGLE_FAN);
    glVertex3f(0.0, 0.0, -size * 0.5);
    for (int i = 0; i <= 360; i += 10) {
        float angle = static_cast<float>(i) * 3.14159 / 180.0;
        glVertex3f(size * 0.5 * cos(angle), size * 0.5 * sin(angle), -size * 0.5);
    }
    glEnd();

    // Superficie lateral.
    glBegin(GL_QUAD_STRIP);
    for (int i = 0; i <= 360; i += 10) {
        float angle = static_cast<float>(i) * 3.14159 / 180.0;
        float x = size * 0.5 * cos(angle);
        float y = size * 0.5 * sin(angle);
        glVertex3f(x, y, size * 0.5);
        glVertex3f(x, y, -size * 0.5);
    }
    glEnd();

    glPopMatrix();
}

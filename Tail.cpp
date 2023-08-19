#include "Tail.h"

void Tail::drawTail(float x, float y, float z, float angle) {
    // Tomado y adaptado de http://www.glprogramming.com/red/chapter03.html
    glPushMatrix();

    glTranslatef(-0.25, 0.0, 0.0);
    glRotatef((GLfloat)(0), 0.0, 0.0, 1.0);
    glTranslatef(0.25, 0.0, 0.0);
    glPushMatrix();
    glScalef(0.5, 0.4, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    //Curvatura hacia dentro.
    for (int i = 0; i < 60; i++) {
        glTranslatef(0.0625, 0.0, 0.0);
        glRotatef((GLfloat)angle, 0.0, 0.0, 1.0);
        glTranslatef(0.0625, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.125, 0.4, 1.0);
        glutSolidCube(1.0);
        glPopMatrix();
    }

    //Curvatura hacia afuera.
    for (int i = 0; i < 60; i++) {
        glTranslatef(0.0625, 0.0, 0.0);
        glRotatef((GLfloat)(-angle), 0.0, 0.0, 1.0);
        glTranslatef(0.0625, 0.0, 0.0);
        glPushMatrix();
        glScalef(0.125, 0.4, 1.0);
        glutSolidCube(1.0);
        glPopMatrix();
    }

    //Punta de la cola.
    glTranslatef(0.0625, 0.0, 0.0);
    glRotatef((GLfloat)(0), 0.0, 0.0, 1.0);
    glTranslatef(0.0625, 0.0, 0.0);
    glPushMatrix();
    glutSolidSphere(0.6, 100.0, 100.0);
    glPopMatrix();

    glPopMatrix();
}

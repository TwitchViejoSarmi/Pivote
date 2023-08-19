#include "CatM.h"

void CatM::drawCatM(float x, float y, float z, float size) {
    glPushMatrix();
    glTranslatef(x, y, z);
    catTail->drawTail(0, 0, 0, 2);
    catBody->drawCylinder(-5, -4.5, 0, 10);
    catHead->drawHeadM(0, 7, 0, 1.0);

    // Pata delantera izquierda.
    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    catFoot->drawCylinder(-9.5, 8.5, 2.0, 3);
    glPopMatrix();

    // Pata delantera derecha.
    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    catFoot->drawCylinder(-9.5, 8.5, -2.0, 3);
    glPopMatrix();

    // Pata trasera derecha.
    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    catFoot->drawCylinder(-9.5, 1.7, 2.0, 3);
    glPopMatrix();

    // Pata trasera izquierda.
    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    catFoot->drawCylinder(-9.5, 1.5, -2.0, 3);
    glPopMatrix();

    glPopMatrix();
}

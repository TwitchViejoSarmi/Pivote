#include "CatM.h"

void CatM::drawCatM(float x, float y, float z, float size) {
	glPushMatrix();
	glTranslatef(x, y, z);
	catTail->drawTail(0, 0, 0, 2);
	catBody->drawCylinder(-5, -4.5, 0, 10);
	glPopMatrix();
}

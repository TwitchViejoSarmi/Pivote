#include "HeadM.h"

void HeadM::drawHeadM(float x, float y, float z, float size) {
	glPushMatrix();
	glTranslatef(x, y, z);
	myEarR->drawPyramid(0.0, 2.0, 0.0, 1.0);
	glPopMatrix();
}

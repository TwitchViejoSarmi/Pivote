#include "HeadM.h"

void HeadM::drawHeadM(float x, float y, float z, float size) {
	glPushMatrix();
	glTranslatef(x, y, z);
	glTranslatef(-15, -7, 0);
	glutSolidSphere(5, 100.0, 100.0);
	myEarR->drawPyramid(0.0, 4.5, -4.5, 2.0, -45, 1, 0 ,0);
	myEarL->drawPyramid(0.0, 4.5, 4.5, 2.0, 45, 1, 0, 0);
	glPopMatrix();
}

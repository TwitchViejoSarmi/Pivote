#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

#include "Pyramid.h"

class HeadM
{
protected:
	Pyramid* myEarR;
	Pyramid* myEarL;
public:
	HeadM() {
		myEarR = new Pyramid();
		myEarL = new Pyramid();
	}
	void drawHeadM(float x, float y, float z, float size);
	~HeadM() {
		delete myEarR;
		delete myEarL;
	}
};


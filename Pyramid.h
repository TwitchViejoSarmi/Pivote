#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Pyramid
{
public:
	
	Pyramid(){}
	void drawPyramid(float x, float y, float z, float size, float angle, float xa, float xb, float xc);
	~Pyramid(){}
};


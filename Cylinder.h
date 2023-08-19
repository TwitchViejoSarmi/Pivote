#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Cylinder
{
public:
	Cylinder(){}
	void drawCylinder(float x, float y, float z, float size = 1.0);
	~Cylinder(){}
};


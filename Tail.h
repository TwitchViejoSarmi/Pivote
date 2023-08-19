#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

class Tail
{
public:
	Tail() {}
	GLfloat angulo;
	void drawTail(float x, float y, float z, float angle);
	~Tail() {}
};


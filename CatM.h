#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

#include "Tail.h"
#include "Cylinder.h"

class CatM
{
protected:
	Tail* catTail;
	Cylinder* catBody;
public:
	CatM(){
		catTail = new Tail();
		catBody = new Cylinder();
	}
	void drawCatM(float x, float y, float z, float size);
	~CatM(){}
};


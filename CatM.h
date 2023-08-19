#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"

#include "Tail.h"
#include "Cylinder.h"
#include "HeadM.h"

class CatM
{
protected:
	Tail* catTail;
	Cylinder* catBody;
	HeadM* catHead;
	Cylinder* catFoot;
public:
	CatM(){
		catTail = new Tail();
		catBody = new Cylinder();
		catHead = new HeadM();
		catFoot = new Cylinder();
	}
	void drawCatM(float x, float y, float z, float size);
	~CatM(){
		delete catTail;
		delete catBody;
		delete catHead;
		delete catFoot;
	}
};


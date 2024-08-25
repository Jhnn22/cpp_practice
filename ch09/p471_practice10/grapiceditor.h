#ifndef _GRAPICEDITOR_H
#define _GRAPICEDITOR_H

#include "Shape.h"

class GrapicEditor {
	Shape* pstart;
	Shape* plast;
	int count;
public:
	GrapicEditor();
	void add(Shape* diagram);
	void remove(int index);
	void show();
};

#endif
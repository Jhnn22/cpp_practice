#ifndef _SHAPE_H
#define _SHAPE_H

class Shape {
public:
	virtual void diagram(int index) = 0;
	virtual ~Shape(){}
	Shape* next;
};

#endif

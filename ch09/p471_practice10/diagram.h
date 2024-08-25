#ifndef _DIAGRAM_H
#define _DIAGRAM_H

#include <iostream>
#include "Shape.h"
using namespace std;

class Line : public Shape {
public:
	void diagram(int index) {
		cout << index << ": " << "Line\n";
	}
};

class Circle : public Shape {
public:
	void diagram(int index) {
		cout << index << ": " << "Circle\n";
	}
};

class Rect : public Shape {
public:
	void diagram(int index) {
		cout << index << ": " << "Rectangle\n";
	}
};

#endif

#ifndef _EDITOR_H
#define _EDITOR_H

#include <vector>
#include "circle.h"

class Editor {
	vector<Circle*> v;
public:
	Editor();
	~Editor();
	void add(int radius, string name);
	void remove(string name);
	void showAll();
};

#endif

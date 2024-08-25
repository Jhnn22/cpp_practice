#include <iostream>
#include "editor.h"

Editor::Editor(): v(){}
Editor::~Editor() {
	for (const auto& circle : v) delete circle;
}

void Editor::add(int radius, string name) {
	Circle* circle = new Circle(radius, name);
	v.push_back(circle);
}

void Editor::remove(string name) {
	for (auto it = v.begin(); it != v.end();) {
		if ((*it)->getName() == name) {
			delete (*it);
			it = v.erase(it);
		}
		else it++;
	}
}

void Editor::showAll() {
	for (const auto& circle : v) {
		cout << "면적 : " << circle->getArea() << " 이름 : " << circle->getName() << endl;
	}
}
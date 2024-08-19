#include "myintstack.h"

MyIntStack::MyIntStack() :p(nullptr), size(0), top(-1) {}
MyIntStack::MyIntStack(int size) :p(new int[size]), size(size), top(-1) {}
MyIntStack::MyIntStack(const MyIntStack& s) :p(new int[s.size]), size(s.size), top(s.top) {
	if (!(top < 0)) {
		for (int i = 0; i < size; i++) {
			p[i] = s.p[i];
		}
	}
}
MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {
	if (top < size-1) {
		p[++top] = n;
		return true;
	}
	else {
		return false;
	}
}

bool MyIntStack::pop(int& n) {
	if (top < 0) {
		return false;
	}
	else {
		n = p[top];
		p[top--] = 0;
		return true;
	}
}
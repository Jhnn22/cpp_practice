#include "myintstack.h"

MyIntStack::MyIntStack() :p{ 0 }, top(-1) {}

bool MyIntStack::push(int n) {
	if (top < 9) {
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
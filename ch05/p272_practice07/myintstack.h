#ifndef _MYINTSTACK_H
#define _MYINTSTACK_H

class MyIntStack {
	int p[10];
	int top;
public:
	MyIntStack();

	bool push(int n);
	bool pop(int& n);
};

#endif

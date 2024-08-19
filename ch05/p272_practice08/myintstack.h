#ifndef _MYINTSTACK_H
#define _MYINTSTACK_H

class MyIntStack {
	int* p;
	int size;
	int top;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

#endif

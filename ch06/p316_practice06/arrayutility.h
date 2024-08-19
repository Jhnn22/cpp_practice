#ifndef _ARRAYUTILITY_H
#define _ARRAYUTILITY_H

#include <iostream>
using namespace std;

class ArrayUtility {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};


#endif

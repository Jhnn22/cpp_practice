#include "arrayutility.h"

int* ArrayUtility::concat(int s1[], int s2[], int size) {	// 배열 매개변수는 포인터 매개변수와 동일 취급
	int* array1 = new int[size*2];
	for (int i = 0; i < size; i++) {
		*(array1 + i) = *(s1 + i);
		
	}
	for (int i = 0; i < size ; i++) {
		*(array1 + size + i) = *(s2 + i);
	}
	return array1;
}

int* ArrayUtility::remove(int s1[], int s2[], int size, int& retSize) {
	int* tmp = new int[size];
	int index = 0;
	for (int i = 0; i < size; i++) {
		bool isDuplicated = false;
		for (int j = 0; j < size; j++) {
			if (*(s1 + i) == *(s2 + j)) {
				isDuplicated = true;
				break;
			}	
		}
		if (!isDuplicated) {
			*(tmp + index++) = *(s1 + i);
		}
	}
	
	int* array2 = new int[index];
	for (int i = 0; i < index; i++) {
		*(array2 + i) = *(tmp + i);
	}
	retSize = index;
	delete[] tmp;

	return array2;
}
#include <iostream>
#include "statistics.h"

Statistics::Statistics(): index(-1), size(5), nums(new int[size]()) {}
Statistics::~Statistics() { delete[] nums; }

bool Statistics::operator!() {
	if (index < 0) return true;
	else return false;
}

Statistics& Statistics::operator<<(const int& num) {	
	nums[++index] = num;
	if (index == size - 1) {
		size *= 2;
		int* newNums = new int[size]();
		for (int i = 0; i <= index; i++) newNums[i] = nums[i];
		delete[] nums;
		nums = newNums;
	}
	return *this;
}

void Statistics::operator>>(int& avg) {
	int sum = 0;
	for (int i = 0; i <= index; i++) sum += nums[i];
	avg = sum / (index + 1);
}

void Statistics::operator~() {
	for (int i = 0; i <= index; i++) cout << nums[i] << ' ';
	cout << endl;
}
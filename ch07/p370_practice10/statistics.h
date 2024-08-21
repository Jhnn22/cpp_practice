#ifndef _STATISTICS_H
#define _STATISTICS_H

#include <vector>
using namespace std;

class Statistics {
	int index;
	int size;
	int* nums;
public:
	Statistics();
	~Statistics();

	bool operator!();
	Statistics& operator<<(const int& num);
	void operator>>(int& avg);
	void operator~();
};

#endif

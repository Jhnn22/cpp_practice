#include <iostream>
#include "statistics.h"

int main() {
	Statistics stat;
	if (!stat) cout << "현재 통계 데이터가 없습니다.\n";

	int x[5];
	cout << "5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;

	return 0;
}
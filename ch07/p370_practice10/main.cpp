#include <iostream>
#include "statistics.h"

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�.\n";

	int x[5];
	cout << "5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) cin >> x[i];

	for (int i = 0; i < 5; i++) stat << x[i];
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;

	return 0;
}
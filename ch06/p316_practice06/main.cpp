#include "arrayutility2.h"

int main() {
	int x[5] = { 0 };
	int y[5] = { 0 };
	cout << "������ 5 �� �Է��϶�. �迭 x�� �����Ѵ�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "������ 5 �� �Է��϶�. �迭 y�� �����Ѵ�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	
	ArrayUtility2 arrayUtility2;
	int* result1 = arrayUtility2.concat(x, y, 5);
	cout << "��ģ ���� �迭�� ����Ѵ�\n";
	for (int i = 0; i < 10; i++) {
		cout << *(result1 + i) << ' ';
	}
	cout << endl;
	
	int retSize = 0;
	int* result2 = arrayUtility2.remove(x, y, 5, retSize);
	cout << "�迭 x[]���� y[]�� �� ����� ����Ѵ�. ������ " << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << *(result2 + i) << ' ';
	}
	cout << endl;
	
	

	return 0;
}
#include "arrayutility2.h"

int main() {
	int x[5] = { 0 };
	int y[5] = { 0 };
	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>> ";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>> ";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	
	ArrayUtility2 arrayUtility2;
	int* result1 = arrayUtility2.concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다\n";
	for (int i = 0; i < 10; i++) {
		cout << *(result1 + i) << ' ';
	}
	cout << endl;
	
	int retSize = 0;
	int* result2 = arrayUtility2.remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << *(result2 + i) << ' ';
	}
	cout << endl;
	
	

	return 0;
}
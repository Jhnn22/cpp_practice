#include <iostream>
#include "editor.h"

int main() {
	Editor editor;
	cout << "원을 삽입하고 삭제하는 프로그램입니다.\n";
	while (true) {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
		int n1 = 0;
		cin >> n1;

		switch (n1) {
		case 1: {
			cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
			int n2;
			string str1;
			cin >> n2; cin.ignore(); cin >> str1; cin.ignore();
			editor.add(n2, str1);
			break;
		}
		case 2: {
			cout << "삭제하고자 하는 원의 이름은 >> ";
			string str2;
			cin >> str2; cin.ignore();
			editor.remove(str2);
			break;
		}
		case 3: {
			editor.showAll();
			break;
		}
		case 4:
			return 0;
		default:
			break;
		}
	}


	return 0;
}
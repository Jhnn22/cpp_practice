#ifndef _UI_H
#define _UI_H

#include <iostream>
using namespace std;

class UI {
public:
	static void display() {
		cout << "그래픽 에디터입니다.\n";
	}
	static void menu1() {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
	}
	static void menu2() {
		cout << "선:1, 원:2, 사각형:3 >> ";
	}
	static void menu3() {
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
	}
	static int select() {
		int num = 0;
		cin >> num;
		return num;
	}
};

#endif

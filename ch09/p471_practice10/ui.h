#ifndef _UI_H
#define _UI_H

#include <iostream>
using namespace std;

class UI {
public:
	static void display() {
		cout << "�׷��� �������Դϴ�.\n";
	}
	static void menu1() {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
	}
	static void menu2() {
		cout << "��:1, ��:2, �簢��:3 >> ";
	}
	static void menu3() {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
	}
	static int select() {
		int num = 0;
		cin >> num;
		return num;
	}
};

#endif

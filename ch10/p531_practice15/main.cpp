#include <iostream>
#include "editor.h"

int main() {
	Editor editor;
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�.\n";
	while (true) {
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		int n1 = 0;
		cin >> n1;

		switch (n1) {
		case 1: {
			cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
			int n2;
			string str1;
			cin >> n2; cin.ignore(); cin >> str1; cin.ignore();
			editor.add(n2, str1);
			break;
		}
		case 2: {
			cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
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
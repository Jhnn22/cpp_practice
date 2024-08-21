#include <iostream>
#include "inkjet.h"
#include "laser.h"

int main() {
	InkJet* inkJet = new InkJet(10);
	Laser* laser = new Laser(20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다\n";
	cout << "잉크젯 : "; inkJet->showInkJet();
	cout << "레이저 : "; laser->showLaser();

	int num = 0;
	int pages = 0;
	char ch = ' ';
	bool retry = true;
	while (retry) {
		cout << endl << "프린터(1. 잉크젯, 2. 레이저)와 매수 입력>> ";
		cin >> num >> pages;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (num) {
		case 1: {
			if (inkJet->getAvailableCount() < pages) {
				cout << "용지가 부족하여 프린트할 수 없습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else if (inkJet->getAvailableInk() < pages) {
				cout << "잉크가 부족하여 프린트할 수 없습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else {
				inkJet->print(pages);
				inkJet->printInkJet(pages);

				cout << "프린트 하였습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();

				cout << "계속 프린트 하시겠습니까?[y/n]>> ";
				cin >> ch;
				cin.ignore();
				if (ch == 'n') retry = false;
			}
			break;
		}
		case 2: {
			if (laser->getAvailableCount() < pages) {
				cout << "용지가 부족하여 프린트할 수 없습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else if (laser->getAvailableToner() < 0) {
				cout << "토너가 부족하여 프린트할 수 없습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else {
				laser->print(pages);
				laser->printLaser();

				cout << "프린트 하였습니다.\n";
				inkJet->showInkJet();
				laser->showLaser();

				cout << "계속 프린트 하시겠습니까?[y/n]>> ";
				cin >> ch; cin.ignore();
				if (ch == 'n') retry = false;
			}
			break;
		}
		default: {
			cout << "해당되는 프린터가 없습니다.\n";
			break;
		}
		}

	}
	
	return 0;
}
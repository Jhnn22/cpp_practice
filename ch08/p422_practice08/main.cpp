#include <iostream>
#include "inkjet.h"
#include "laser.h"

int main() {
	InkJet* inkJet = new InkJet(10);
	Laser* laser = new Laser(20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����\n";
	cout << "��ũ�� : "; inkJet->showInkJet();
	cout << "������ : "; laser->showLaser();

	int num = 0;
	int pages = 0;
	char ch = ' ';
	bool retry = true;
	while (retry) {
		cout << endl << "������(1. ��ũ��, 2. ������)�� �ż� �Է�>> ";
		cin >> num >> pages;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		switch (num) {
		case 1: {
			if (inkJet->getAvailableCount() < pages) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else if (inkJet->getAvailableInk() < pages) {
				cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else {
				inkJet->print(pages);
				inkJet->printInkJet(pages);

				cout << "����Ʈ �Ͽ����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();

				cout << "��� ����Ʈ �Ͻðڽ��ϱ�?[y/n]>> ";
				cin >> ch;
				cin.ignore();
				if (ch == 'n') retry = false;
			}
			break;
		}
		case 2: {
			if (laser->getAvailableCount() < pages) {
				cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else if (laser->getAvailableToner() < 0) {
				cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();
			}
			else {
				laser->print(pages);
				laser->printLaser();

				cout << "����Ʈ �Ͽ����ϴ�.\n";
				inkJet->showInkJet();
				laser->showLaser();

				cout << "��� ����Ʈ �Ͻðڽ��ϱ�?[y/n]>> ";
				cin >> ch; cin.ignore();
				if (ch == 'n') retry = false;
			}
			break;
		}
		default: {
			cout << "�ش�Ǵ� �����Ͱ� �����ϴ�.\n";
			break;
		}
		}

	}
	
	return 0;
}
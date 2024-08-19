#include <iostream>
using namespace std;
#include "player.h"
#include "wordgame.h"

WordGame::WordGame() :prevString(""), nextString(""), player(new Player()), isCorrect(true) {}
WordGame::WordGame(string& prevString, string& nextString)
	:prevString(prevString), nextString(nextString), player(new Player()), isCorrect(true) {}
WordGame::~WordGame() {
	delete player;
}

bool WordGame::compareOneWord(string& prevString, string& nextString) {
	string back = prevString.substr(prevString.size() - 2, 2);	// ���� ���ڿ� �ڿ� �� �ܾ� ���� 
	string front = nextString.substr(0, 2);						// ���� ���ڿ� �տ� �� �ܾ� ����
	if (back == front) {
		return true;
	}
	else return false;
}

void WordGame::run() {
	int num;
	prevString = "�ƹ���";

	cout << "���� �ձ� ������ �����մϴ�\n";
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? ";
	cin >> num;
	cin.ignore();
	player->setPlayer(num);
	cout << "�����ϴ� �ܾ�� " << prevString << "�Դϴ�\n";

	while (isCorrect) {
		for (const auto& name : player->getPlayer()) {
			cout << name << ">> ";
			cin >> nextString;
			if (!compareOneWord(prevString, nextString)) {
				isCorrect = false;
				break;
			}
			prevString = nextString;
		}
	}
}

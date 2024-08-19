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
	string back = prevString.substr(prevString.size() - 2, 2);	// 이전 문자열 뒤에 한 단어 추출 
	string front = nextString.substr(0, 2);						// 다음 문자열 앞에 한 단어 추출
	if (back == front) {
		return true;
	}
	else return false;
}

void WordGame::run() {
	int num;
	prevString = "아버지";

	cout << "끝말 잇기 게임을 시작합니다\n";
	cout << "게임에 참가하는 인원은 몇명입니까? ";
	cin >> num;
	cin.ignore();
	player->setPlayer(num);
	cout << "시작하는 단어는 " << prevString << "입니다\n";

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

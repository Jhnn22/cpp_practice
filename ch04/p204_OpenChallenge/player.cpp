#include <iostream>
using namespace std;
#include "player.h"

Player::Player() :gamePlayer() {}
Player::Player(vector<string> gamePlayer) :gamePlayer(gamePlayer) {}
Player::~Player() {}

void Player::setPlayer(int num) {
	while (gamePlayer.size() < num) {
		string name;
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>> ";
		cin >> name;
		gamePlayer.push_back(name);
	}
}

vector<string> Player::getPlayer() {
	return gamePlayer;
}
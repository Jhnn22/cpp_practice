#ifndef _PLAYER_H
#define _PLAYER_H

#include <vector>
#include <string>
using namespace std;

class Player {
	vector<string> gamePlayer;
public:
	Player();
	Player(vector<string> gamePlayer);
	~Player();

	void setPlayer(int num);
	vector<string> getPlayer();
};

#endif 

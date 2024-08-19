#ifndef _WORDGAME_H
#define _WORDGAME_H

#include <string>
using namespace std;
class Player;

class  WordGame {
	string prevString;
	string nextString;
	Player* player;
	bool isCorrect;
public:
	WordGame();
	WordGame(string& prevString, string& nextString);
	~WordGame();

	bool compareOneWord(string& prevString, string& nextString);
	void run();
};

#endif

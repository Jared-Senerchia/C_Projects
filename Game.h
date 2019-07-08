#pragma once
#ifndef GAME_H_
#define GAME_H_

class Game {

public:
	Game();
	int Bankroll;	//Bankroll to be inherited by all classes
	int getBankroll();
	void setBankroll(int);
};


#endif //GAME_H_
#pragma once
#ifndef CAN_H_
#define CAN_H_
#include"Game.h"

class CAN :public Game {

public:
	CAN();
	int selcettherange();
	int playgame(int);


private:
	int selcetrange;



};




#endif //CAN_H_

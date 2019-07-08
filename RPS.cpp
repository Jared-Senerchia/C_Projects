#include<iostream>
#include"RPS.h"

using namespace std;

RPS::RPS() {
	cout << "Welcome to Rock, Paper, Scissor, Shot" << endl;
	cout << "Ready to play!!" << endl;
	//Bankroll = 100;


}
int RPS::playRPS(int Bank) {
	int playerschoice = 0;
	int randchoice = 0;
	randchoice = rand() % 3 + 1;
	cout << "To play this game you will be selecting a number from 1-3" << endl;
	cout << "1 corresponds to Rock" <<  endl;
	cout << "2 corresponds to Paper" << endl;
	cout << "3 corresponds to Scissors" << endl;
	cout << "This means that 1 beats 3, 2 beats 1, and 3 beats 2" << endl;
	cout << "If you win the round you will be awarded $10" << endl;
	cout << "If you lose $10 will be taken from you" << endl;
	cout << "At this time please enter your selection to be played." << endl;
	cout << "1 ----> Rock" << endl;
	cout << "2 ----> Paper" << endl;
	cout << "3 ----> Scissors" << endl;
	cin >> playerschoice;

	switch (playerschoice) {
	case 1: {
		if (randchoice == 3) {
			cout << "Congrats you have won!" << endl;
			Bank = Bank + 10;
			cout << "Your bankroll is now $" << Bank<< endl;
		}
		else if (randchoice == 2) {
			cout << "Sorry you have lost" << endl;
			Bank = Bank - 10;
			cout << "Your bankroll is now $" << Bank << endl;
		}
		else {
			cout << "You tied. Please play again!" << endl;
			

		}

	}
			break;
	case 2: {
		if (randchoice == 1) {
			cout << "Congrats you have won!" << endl;
			Bank = Bank + 10;
			cout << "Your bankroll is now $" << Bank << endl;
		}
		else if (randchoice == 3) {
			cout << "Sorry you have lost" << endl;
			Bank = Bank - 10;
			cout << "Your bankroll is now $" << Bank << endl;
		}
		else {
			cout << "You tied. Please play again!" << endl;

		}

	}
			break;
	case 3: {
		if (randchoice == 2) {
			cout << "Congrats you have won!" << endl;
			Bank = Bank + 10;
			cout << "Your bankroll is now $" << Bank << endl;
		}
		else if (randchoice == 1) {
			cout << "Sorry you have lost" << endl;
			Bank = Bank - 10;
			cout << "Your bankroll is now $" << Bank << endl;
		}
		else {
			cout << "You tied. Please play again!" << endl;

		}

	}
			break;
	}
	system("pause");
	system("ClS");
	return Bank;
}
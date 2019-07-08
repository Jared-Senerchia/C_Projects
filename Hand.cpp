#include<iostream>
#include"Hand.h"

using namespace std;

Hand::Hand() {
	cout << "***********************Welcome to guess the correct hand.************************" << endl;
	Bankroll = 100;
}
int Hand::playHand(int Bankroll) {
	char userguess;
	userguess = 'r';
	
	cout << "The rules of this game a straight forward you will pick either right of left hand" << endl;
	cout << "If you guess correctly you will win 10$ if you guess incorrectly you will lose 10$" << endl;
	cout << "Now enter your guess either R or L" << endl;
	cin >> userguess;
	int randhand;
	randhand = rand() % 2 + 1;
	if ((userguess == 'R') || (userguess == 'r')) {
		if (randhand == 1) {
			cout << "Congrats you have guessed correctly!"<< endl;
			Bankroll = Bankroll + 10;
			cout << "You Bankroll is now $" << Bankroll << endl;
		}
		else if (randhand == 2) {
			cout << "Sorry you have guessed incorrectly you lose" << endl;
			Bankroll = Bankroll - 10;
			cout << "You Bankroll is now $" << Bankroll << endl;
		}
	}
	else if ((userguess == 'L') || (userguess == 'l')) {
		if (randhand == 2) {
			cout << "Congrats you have guessed correctly!" << endl;
			Bankroll = Bankroll + 10;
			cout << "You Bankroll is now $" << Bankroll << endl;
		}
		else if (randhand == 1) {
			cout << "Sorry you have guessed incorrectly you lose" << endl;
			Bankroll = Bankroll - 10;
			cout << "You Bankroll is now $" << Bankroll << endl;
		}
	}
	system("pause");
	system("CLS");
	return Bankroll;
}
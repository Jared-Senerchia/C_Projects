#include<iostream>
#include<stdlib.h>
#include"CAN.h"

using namespace std;


CAN::CAN() {
	//Bankroll = 100;
	cout << "Welcome to Chose a Number the game" << endl;

}
int CAN::selcettherange() {
	
	cout << "There are three ranges you can select in this game:" << endl;
	cout << "1.) 1-10 ---- this pays out $1 if number guessed correctly" << endl;
	cout << "2.) 1-50 ---- this pays out $10 if number guessed correctly" << endl; 
	cout << "3.) 1-100 ---- this pays out $50 if number guessed correctly" << endl;
	cout << " Please eneter the the number corresponding to the range you would like to play" << endl;
	cin >> selcetrange;
	if (selcetrange < 1 || selcetrange > 3 )
	{
		cout << "Not a valid range selection please enter 1, 2, or 3" << endl;
		cin >> selcetrange;
	} 
	
	system("CLS");

	return selcetrange;
}

int CAN::playgame(int Bank) {
	int iGuess = 0;
	int Randnum = 0;

	if (selcetrange == 1) {
		Randnum = rand() % 10 + 1;
		cout << "You have selected to choose a random number between 1-10 please enter that number now." << endl;
		cin >> iGuess;
		
		if (Randnum == iGuess) {
			int Payout = 1;
			Bank = Bank + Payout;//add money to bank and print the bankroll
			cout << "Congratulation you guessed correctly!" << endl;
			//cout << "Your Bankroll is now $" << Bankroll << endl;
			system("pause");

		}
		else {
			cout << "Sorry your guess was not correct" << endl;
			Bank = Bank - 1;
			cout << "Your Bankroll is now $" << Bank << endl;
			system("pause");
		}

	}
	else if (selcetrange == 2) {
		cout << "You have selected to choose a random number between 1-50 please enter that number now." << endl;
		cin >> iGuess;
		Randnum = rand() % 50 + 1;
		if (Randnum == iGuess) {
			int Payout = 10;
			Bank = Bank + Payout;//add money to bank and print the bankroll
			cout << "Congratulation you guessed correctly!" << endl;
			cout << "Your Bankroll is now $" << Bank << endl;
			system("pause");
		}
		else {
			cout << "Sorry your guess was not correct" << endl;
			Bank = Bank - 1;
			cout << "Your Bankroll is now $" << Bank << endl;
			system("pause");
		}
	}
	else if (selcetrange == 3) {
		cout << "You have selected to choose a random number between 1-100 please enter that number now." << endl;
		cin >> iGuess;
		Randnum = rand() % 100 + 1;
		if (Randnum == iGuess) {
			int Payout = 50;
			Bank = Bank + Payout;//add money to bank and print the bankroll
			cout << "Congratulation you guessed correctly!" << endl;
			cout << "Your Bankroll is now $" << Bank << endl;
			system("pause");
		}
		else {
			cout << "Sorry your guess was not correct" << endl;
			Bank = Bank - 1;
			cout << "Your Bankroll is now $" << Bank << endl;
			system("pause");
		}
	}
	return Bank;
}
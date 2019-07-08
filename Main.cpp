#include<iostream>
#include"Game.h"
#include"CAN.h"
#include"Hand.h"
#include"RPS.h"
#include"War.h"

using namespace std;

int main() {
	int Gameselect = 0;
	int Bankroll = 100;
	//Title screen
	cout << "*****************Welcome to Whacky Casino Games***************" << endl;
	cout << "The Casino games offered are as follows:" << endl;
	cout << "1.) Chose a Numebr" << endl;
	cout << "2.) Rock - Paper - Scissors" << endl;
	cout << "3.) War" << endl;
	cout << "4.) Pick a hand" << endl;
	cout << "When beginning each game you will start with a total bankroll of $100," << endl;
	cout << "unless you have already played a game then the bankroll will be the total" << endl;
	cout << "after the completion of that game." << endl;
	cout << "**************************************************************" << endl;
	system("pause");
	system("CLS");			//Clearing the opening screen 

	//Game Selection Screen
	cout << "*****************Selecting a Whacky Casino Game***************" << endl;
	cout << "To select the game you wish to play please enter the number correspodning with that game." << endl;
	cout << "1 to play Chose a Number" << endl;
	cout << "2 to play Rock - Paper - Scissors" << endl;
	cout << "3 to play War" << endl;
	cout << "4 to play Pick a hand" << endl;
	cin >> Gameselect;
	system("CLS");		// Clearing the selection screen
	

	while (Gameselect != 0) {
		switch (Gameselect)
		{
		case 1: {			// Chose a number
			int num = 0;
			CAN GameofCan;
			GameofCan.selcettherange();
			Bankroll = GameofCan.playgame(Bankroll);
			

		}
				break;
		case 2: {			// Rock-paper- Scissors
			RPS GameofRPS;
			Bankroll=GameofRPS.playRPS(Bankroll);

			

		}
				break;
		case 3: {			//War
			War GameofWar;
			Bankroll = GameofWar.playwar(Bankroll);

		}
				break;
		case 4: {			// Pick a hand
			Hand GameofHand;
			Bankroll=GameofHand.playHand(Bankroll);

		}
				break;

		default: {			// Code if Gameselect doesnt match any of the 4 cases 
			cout << "Incorrect game selection!" << endl;
			
		}
		}
		system("CLS");
		cout << "To select the game you wish to play please enter the number correspodning with that game." << endl;
		cout << "1 to play Chose a Number" << endl;
		cout << "2 to play Rock - Paper - Scissors" << endl;
		cout << "3 to play War" << endl;
		cout << "4 to play Pick a hand" << endl;
		cout << "To exit the Game please enter 0 now" << endl;
		cin >> Gameselect;

		system("CLS");
	}
	return 0;
}

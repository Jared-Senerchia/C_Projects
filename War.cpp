#include<iostream>
#include<vector>
#include <algorithm>
#include"War.h"

using namespace std;

War::War() {
	cout << "Welcome to the game of War!" << endl;

}
int War::playwar(int Bank) {
	int wins = 0;
	int losses = 0;
	int wager = 0;

	cout << "This is the card game War. Here are the rules" << endl;
	cout << "1.) A deck of cards will be split in half and each half will be donated user and computer" << endl;
	cout << "2.) You can win a card by having the higher card of the two compared" << endl;
	cout << "3.) If the same number card is played then the decks will flip another card and compare" << endl;
	cout << "3.a) This will happen until one card is greater and the winner will get all the cards on the table" << endl;
	cout << "4.) The winner of the game is which ever team obtains the whole deck of cards first" << endl;
	cout << "5.) If you win the game you will be awarded the wager you have placed." << endl;
	cout << "Please enter the wager you wish to place now" << endl;
	cin >> wager;

	int avector[52] = { 1, 2,3,4,5,6,7,8,9,10,11,12,13,
					    1,2,3,4,5,6,7,8,9,10,11,12,13,
					    1,2,3,4,5,6,7,8,9,10,11,12,13,
					    1,2,3,4,5,6,7,8,9,10,11,12,13 };
	vector<int> vect(avector, avector +52);
	random_shuffle (vect.begin(), vect.end());

	vector<int> userhand(vect.begin(), (vect.begin() + vect.size() / 2));
	vector<int> dealerhand((vect.begin() + vect.size() / 2), vect.end());
	
	for (int i = 0; i < userhand.size(); i++) {
		if ((userhand[i]) > (dealerhand[i])) {
			wins = wins + 1;
			
			
		}
		else if ((userhand[i] ) < (dealerhand[i])) {
			losses = losses + 1;
			
			
		}
		else if ((userhand[i] ) == (dealerhand[i])) {
		
		}
	}
	if (wins > losses) {
		cout << "Congrats you have won this game of War" << endl;
		cout << "You won " << wins << " hands out of 26" << endl;
		Bank = Bank + wager;
		cout << "Your Bankroll is now $" << Bank << endl;
	}
	else if (wins < losses){
		cout << "You have lost. Please play again!" << endl;
		cout << "You lost " << losses << " hands out of 26" << endl;
	}
	else if (wins == losses) {
		cout << "You hav tied please play again" << endl;

	}
	
	system("pause");
	return Bank;
}
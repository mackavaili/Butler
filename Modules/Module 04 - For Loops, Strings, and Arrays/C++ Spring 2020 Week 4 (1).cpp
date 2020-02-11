#include <iostream>
#include <cstdlib> 	//for rand()
#include <ctime>	// for seeding rand() with time()
#include <string>	// for string
using namespace std;

int main() {
	srand(time(0));

	cout << "Hello player! Welcome to chapter 3!\n";
	cout << "Which simulation would you like to run?\n";
	int numInput = 0;
	cin >> numInput;

	switch(numInput) {
			case 0: {
				// create a while loop that makes 10 random numbers
				int counter = 0;	// iterator
				while (counter++ < 10) {
					cout << counter << ". " << rand() << " .\n";
				}

				// and send them to the console (with cout)

				// create a random number between 1 and 10 and
				int randNum = rand() % 10 + 1;
				// ask the player to guess it.
				cout << "I BET YOU CAN'T GUESS THIS NUMBER!\n";
				int playerGuess = 0;
				cin >> playerGuess;
				// use an if statement to check if its right
				if (playerGuess == randNum) {
					cout << "HOLY CRAP YOU GUESSED IT!\n";
				} else {
					cout << "HAHA, STUPID HUMAN. IT WAS " << randNum << " .\n";
				}
				break;
			}
			case 1:	{
				cout << "All about for loops.\n";
				//	for (initialization or setup; test; action) {code}
				cout << "We are using a for loop to make 10 random numbers.\n";
				for(int i = 0; i < 100; i += 5) {

					cout << i << ". random number = " << rand() % 10 << "\n";
				}
				cout << "Counting with nested for loops.\n";
				for (int i = 0; i < 3; i++) {
					for(int j = 0; j < 3; j++) {
						cout << i << "." << j << " ";
					}
					cout << "\n";
				}
				break;
			}
			case 2: {
				// don't forget to include statement
				cout << "All about strings!\n";
				break;
			}	
			default: {
				cout << "That is not one of the options! Please try again!\n";
				break;
		}
	}
}
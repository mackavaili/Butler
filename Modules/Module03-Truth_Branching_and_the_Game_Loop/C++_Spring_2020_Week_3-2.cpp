#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
 cout << "Welcome to hell.\n";
 cout << "No, that's not right...\n";
 cout << "Welcome to Chapter 2!\n";
 cout << "We're covering Truth, Branching, and the Game Loop!\n\n";

 int choice = 0;
 cout << "What program would you like to run?\n";
 cin >> choice;

	if (choice == 1) {
		cout << "Warm up work...\n";
		// ask the player for there names 
		cout << "Whats your name?\n>>";
		string playerName;
		cin >> playerName;
		//ask the player for two numbers
		cout << "Hi " << playerName << ", would you please give me two numbers.\n>>";
		int firstNum;
		cin >> firstNum;
		cout << firstNum << " is a good number. Please give me just one more.\n>>";
		int secondNum;
		cin >> secondNum;
		//give the remainder of the first number divided by the second number 
		cout << playerName << ", the remainder of " << firstNum << " and " << secondNum << " is: " << firstNum % secondNum << "!!.\n";
	}

	if (choice == 2) {
			cout << "An if statement, if the test is true, it runs, otherwise it doesn't run.\n";
			cout << "If(test) { code to run here }\n";

			// bool is true or false only (false=0 or true=1)
			bool playerIsAlive = true;

			if (playerIsAlive) {
				cout << "Keep fighting!\n";
			}
			string playerFightMoreAnswer;
			cout << "Or, if not, you could quit? Type 'quit' to quit.\n>>";
			cin >> playerFightMoreAnswer;
			if (playerFightMoreAnswer == "quit") {
				cout << "Have a nice life!\n";
			} else {
				cout << "Good! Let's get on with it.\n";
			} 
			}
			
	}
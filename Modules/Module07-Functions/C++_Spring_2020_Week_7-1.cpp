#include <iostream>		// for cout and cin
#include <string>		// for strings
#include <vector>		// for vectors
#include <ctime>		// for srand()
#include <cstdlib>		// for srand()
using namespace std;

// Global variables
vector<string> inv;

void DisplayVec() {
	cout << "Your items: \n";
	for(int i = 0; i < inv.size(); i++) {
		cout << inv[i] << endl;
	}
}

// AddItem(inv, "Axe of Axening")
void AddItem(string item) {
	inv.push_back(item);
}

// return type, funtion name, (parameters/arguments) { code block }
void Startup() {
	cout << "This is Chapter 5\n";
	cout << "This code runs inside the code block.\n";
}

int Double(int givenNumber) {
	return givenNumber * 2;
}

// return a whole number, it will be named "AddTwoNumbers" and it will have 2 parameters
int AddTwoNumbers(int firstNum, int secondNum) {
	return firstNum + secondNum;
}

char askYesNo(string givenQuestion) {	// Do you want to talk to the shopkeeper?
	char input;
	// while the user doesn't say 'y' or 'n', keep looping
	do {
		cout << givenQuestion << endl;
		cin >> input;
	} while(input != 'y' && input != 'n');
	return input;
}

//	6 is to make sure a number is added if number no added from player
int RollDie(int sides = 6, int min = 1) {
	return rand() % sides + min;
}

int Triple(int givenNumber = 3) {
	return givenNumber * 3;
}

string Triple(string givenString) {
	return givenString + givenString + givenString;
}

float Triple(float givenFloat) {
	return givenFloat * 3;
}

// int main is a fuction
// return type is int, function name is "main", and it has no parameters.
int main () {
	srand(time(0));
	Startup();

	int worms = 2;

	cout << "I have " << worms << " worms. After I cut them in half I will have ";
	cout << Double(worms);
	cout << " worms.\n";

	cout << "2 + 2 = ";
	cout << AddTwoNumbers(2,2) << endl;

	cout << "You approach a store.\n";

	if(askYesNo("Do you want to talk to the shopkeeper?") == 'y') {
		cout << "The shopkeeper says thanks.\n";
	} else {
		cout << "You punch the shopkeeper in the face.\n";
	}

	// new question
	cout << "You approach a police officer.\n";

	if(askYesNo("Do you want to talk to the police office?") == 'y') {
		cout << "The police office ask how he can help.\n";
	} else {
		cout << "The cop puts you under arrest!.\n";
	}

	// showing where a code block ends
	if(true) {
		string myName = "Mike";
		cout << "name = " << myName << endl;	// name = Mike

			if(true) {
				cout << "name = " << myName << endl;	// name = Mike
				string myName = "Booker";
				cout << "name = " << myName << endl;	// name = Booker
			}
		cout << "name = " << myName << endl;	 // name = Mike
	}

	// making an inventory
	// vector<string> inv;		// make this global

	inv.push_back("Sword");
	inv.push_back("Shield of Smashing");
	inv.push_back("Armor of Armoring");

	DisplayVec();
	AddItem("Axe of Axening");
	DisplayVec();

	cout << "Your roll is ";
	cout << RollDie(20) << ".\n";

	cout << "We are going back to the year ";
	cout << RollDie(100,1900) << endl;

	cout << "Tripling 67: " << Triple(67) << endl;
	cout << "Tripling 'banana' " << Triple("banana") << endl;
	cout << "Tripling 3.1415f " << Triple(3.1415f) << endl;


	return 0;
	}

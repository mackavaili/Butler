#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

//  build a vector of strings with a elemental damage types
//  ask the player which damage type they would like to use by choosing a number
    //  corresponding to the index of the vector
    //  create a function named attack that accepts a constant reference
        //  to a vector of strings and an index
    //  have the function send an attack with the chosen damage type to the console
        //  example: "The player attacks with Fire damage!"

void attack(const vector<string>& givenVec, int index) {
    cout << "The player attacks with " << givenVec[index] << " damage!\n";
}

void breakIDNumbers(int* const givenArray, int totalIDs) {
	for (int i = 0; i < totalIDs; i++) {
		*(givenArray + i) += rand() % 1000;
	}
}

void display(const int* const givenArray, int size) {
	for (int i = 0; i < size; i++) {
		cout << *(givenArray + i) << endl;
	}
}

int main () {
	srand(time(0));

	if(false) {

	    cout << "Hello World!\n";

	    vector<string> dmgTypes;
	    int damageType = 0;

	    dmgTypes.push_back("Ice");
	    dmgTypes.push_back("Lava");
	    dmgTypes.push_back("Meanness");
	    dmgTypes.push_back("Book");

	    cout << "Damage types: \n";
	    for(int i = 0; i < dmgTypes.size(); i++) {
	        cout << i + 1 << dmgTypes[i] << endl;
	    }

	    cout << "What damage type would you like to use?\n";
	    cin >> damageType;
		damageType--;

	    attack(dmgTypes, damageType);
	}

	if(false) {
		cout << "Welcome to pointers!\n";

		//	create a string
		string welcomeMessage = "Hello There!";
		cout << "Here is the memory address of welcomeMessage: \n";
		cout << &welcomeMessage << endl;

		//	creating a pointer to a string
		string* pMessage;
		pMessage = &welcomeMessage;

		cout << "Sending pMassage to cout: \n";
		cout << pMessage << endl;

		cout << "Here is what *pMassage is pointing to: \n";
		cout << *pMessage << endl;

		cout << "Assing two strings togather.\n";
		string firstMessage = "Hello World";
		string SecondMessage = "!!!";
		string totalMessage = firstMessage + SecondMessage + " ahahahahah";

		cout << totalMessage << endl;

		*pMessage += " Bananas!";
		cout << *pMessage << endl;

		cout << "Can we create a pointer to a vector of booleans?\n";
		vector<bool> switches;
		switches.push_back("true"); 	//	0 = front door is locked
		switches.push_back("false");	//	1: true if back door is locked
		switches.push_back("true");		//	2: true if porch light is on
		switches.push_back("false");	//	3: true if garage exists

		cout << switches[0] << endl;

		//	pointer to a vactor of booleans...
		vector<bool>* pVector = &switches;
		cout << "Value of pVector: " << pVector << endl;

		cout << "player flips the switch on the porch light.\n";
		bool testBool = true;
		testBool  = !testBool;	//	if turn, now false, if false now true
		(*pVector)[2] = !(*pVector)[2];

		if((*pVector)[2]) {
			cout << "The light is now on.\n";
		}
		else {
			cout << "The light is now off.\n";
		}

	}

	if(false) {
		//	pointer can point to other things
		int scoreA = 1234;
		int scoreB = 4321;
		int& rScore = scoreA;
		cout << rScore << endl;
		//	rScore = scoreB;
		//	^^^^ same is scoreA = scoreB
		cout << rScore << endl;

		cout << "\nNow with Pointers!\n";
		int* pScore = &scoreA;
		cout << *pScore << endl;
		pScore = &scoreB;
		cout << *pScore << endl;
		//	constant pointers can only point to one thing (like references)
		cout << "\nA CONSTANT POINTER ONLY POINTS TO ONE VARIABLE\n";
		int* const pConstScore = &scoreA;
		cout << "pConstScore = " << *pConstScore << endl;
		//	pConstScore = &scoreB; //	changing it to not allowed.

		//	pointers to a constant are read-only, but can point to other things
		cout << "\nPOINTER TO A CONSTANT IS READ-ONLY\n";
		const int* pReadScore = &scoreA;
		cout << "pReadScore = " << *pReadScore << endl;
		pReadScore = &scoreB;
		cout << "pReadScore = " << *pReadScore << endl;
		//	a constant pointer to a constant is read-only and cannot be changed.
			//	(like a constant reference)
		cout << "\nA CONSTANT POINTER TO A CONSTANT IS BOTH OF THOSE\n";
		const int* const pLockDownScore = &scoreB;
		cout << "pLockDownScore = " << *pLockDownScore << endl;
		//	a pointer works like an iterator, it'll point to an item in an array or vector
		vector<string> inv;
		inv.push_back("Sword");
		inv.push_back("Axe");
		inv.push_back("Banana");

		const string* pScondItem = &inv[1];

		cout << "\nOur second item in our inventory is a(n) " << *pScondItem << ".\n";
		cout << "\nOur third item in our inventory is a(n) " << *(pScondItem + 1) << ".\n";

		cout << "Here are the memory addresses of our inventory:\n";
		string* pIter = &inv[0];
		for(int i = 0; i < inv.size(); i++) {
			cout << pIter + i << endl;
		}
	}

	if(true) {
		//	an array is a pointer (OH MY GOD!!!!!!)
		const int MAX_SIZE = 5;
		int idNumbers[MAX_SIZE];
		cout << "\nThe memory address of idNumbers: " << &idNumbers << endl;
		cout << "\nThe memory address of idNumbers: " << idNumbers << endl;

		//	adding things to our array
		idNumbers[0] = 111111;
		idNumbers[1] = 123456;
		idNumbers[2] = 222222;
		idNumbers[3] = 555888;
		idNumbers[4] = 636363;

		//	you can add 1 to a pointer and it will point to the next memory address.
		cout << "The 4th number is our array is " << *(idNumbers + 3) << endl;

		// for (int i = 0; i < MAX_SIZE; i++) {
		// 	cout << *(idNumbers + i) << endl;
		// }
		display(idNumbers, MAX_SIZE);

		//	create a function that accepts an array and adds a random number to the numbers indside
		cout << "\nBreaking idNumbers...\n";
		breakIDNumbers(idNumbers, MAX_SIZE);
		for(int i = 0; i < MAX_SIZE; i++){
			cout << *(idNumbers + i) << endl;
		}
		display(idNumbers, MAX_SIZE);
	}
}

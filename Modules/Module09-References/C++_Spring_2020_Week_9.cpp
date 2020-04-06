#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

//	create a function that returns a random number between 1 and 3
	//	pseudocode
		//	create a random number, constrain it with % modulas
		//	return the ransdom number, just like in rollDie();

//	return type, function name, (prameters), {code block}
int randomNumber() {
	int number = rand() % 3 + 1;
	return number;
}

//	use that returned value in a switch statement to
//	have the computer say one of three phrases

void addName(vector<string>& givenVec, string givenName) {
	givenVec.push_back(givenName);
}

void DisplayNames(const vector<string>& givenVec) {
	vector<string>::const_iterator iter;
	for(iter = givenVec.begin(); iter != givenVec.end(); iter++){
		cout << *iter << endl;
	}
}

string& refToIndex(vector<string>& givenVec, int index) {
	return givenVec[index];
}

int main () {
	if(false) {
		srand(time(0));
		cout << "Welcome to chapter 6!\n";
		cout << randomNumber();
		cout << randomNumber();
		cout << randomNumber();
		cout << randomNumber();
		cout << randomNumber();
		switch(randomNumber()) {
			case 1:
				cout << "Blah blah blan";
				break;
			case 2:
				cout << "Some text\n";
				break;
			case 3:
				cout << "More textn";
				break;
			default:
				cout << "Your in no mans land\n";
				break;
	}
}

	if(false) {
		int powerLevel = 100;
		int& rPower = powerLevel;

		cout << "Power level is: " << powerLevel << ".\n"; //	100
		cout << "rPower = " << rPower << ".\n";		//	100

		string shipName = "1701D";
		string& rShipName = shipName;

		cout << "shipName = " << shipName << ".\n";	//	1710D
		cout << "rShipName = " << rShipName << ".\n";	//	1701D

		rShipName = "Star Lord";
		cout << "shipName = " << shipName << ".\n";	//	Star Lord
		cout << "rShipName = " << rShipName << ".\n";	//	Star Lord

		cout << "there are " << rShipName.size() << " letters in " << rShipName << ".\n";
 	}

	if(true) {
		vector<string> names;
		names.push_back("Mike");
		names.push_back("Booker");
		names.push_back("Makavaile");

		addName(names, "Vail");

		cout << "\nNames: \n";
		DisplayNames(names);

		string& playerName = refToIndex(names, 2);
		cout << "\nPlayer name = " << playerName << ".\n";
		playerName = "Other name";
		DisplayNames(names);
		cout << "\nPlayer name = " << playerName << ".\n";
	}

	return 0;
}

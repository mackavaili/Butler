//  Keep Adeventuring
//  Mike Vail

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

//  The player is told a story prompting them to seek treasure on an adventure
void startAdv() {
    cout << "You wake up...";
}

//  The player is asked if they would like to go adventuring
char keepAdv(string question) {
	char input;
	do {
		cout << question << endl;
		cin >> input;
	} while(input != 'y' && input != 'n');
	return input;
}
int RollDie(int health = 20, int min = 1) {
	return rand() % health + min;
}
int treasureAdd(int treasure = 0) {
    return rand() % treasure + 3;
}


int main() {
    srand(time(0));
    cout << "You wake up...";

    if(keepAdv("Would you like to go adventuring?") == 'y') {
		cout << "Let's go adventuring.\n";
	} else {
		cout << "Have a nice day!\n";
	}

    cout << "Your health is ";
	cout << RollDie(2) << ".\n";

	cout << "and you have " << treasureAdd() << " treasure.";
}

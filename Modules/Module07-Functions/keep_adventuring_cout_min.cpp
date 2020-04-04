//  Keep Adeventuring
//  Mike Vail ( mvail@butlercc.edu )

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int playerHealth = 20;
int playerRoll;
int enemyRoll;
int treasureRoll;
int totalTreasure;

void startAdv() {
    cout << "startAdv\n";
}

char keepAdv(string question) {
	cout << "keepAdv [ y ] [ n ]";
	char input;
	do {
		cout << question << endl;
		cin >> input;
	} while(input != 'y' && input != 'n');
	return input;
}

int RollDie(int max = 8, int min = 1) {
	return rand() % max + min;
}

void advNumbers() {
	enemyRoll = RollDie();
	playerRoll = RollDie();
	treasureRoll = RollDie();
	if(playerRoll > enemyRoll) {
		totalTreasure += treasureRoll;
		cout << "blocked\nhealth=" << playerHealth << "[]treasure=" << totalTreasure << "\n";
	}
 	else {
		cout << "hit\nlost hp=" << enemyRoll << "\n";
		playerHealth -= enemyRoll;
		cout << "health=" << playerHealth << "[]treasure=" << totalTreasure << "\n";
	} if(playerHealth < 1) {
		cout << "died[]treasure=" << totalTreasure << endl;
	}
}

int main() {
    startAdv();
	while (playerHealth > 0) {
	    if(keepAdv("\n\n") == 'y') {
			cout << "Begin\n";
			advNumbers();
		} else {
			cout << "return home[]treasure=" << totalTreasure << endl;
			break;
		}
	}
	return 0;
}

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

//**	=============================	**//
//**	The player is told a story prompting them to seek treasure on an adventure
//**	=============================	**//

void startAdv() {
    cout << "You wake up in a old shack. You hear noises outside.\n";
	cout << "You open the door to a fog covered forest\n";
}

//**	=============================	**//
//**	The player is asked if they would like to go adventuring
//**	=============================	**//

char keepAdv(string question) {
	cout << "Would you like to go adventuring? [ y ] [ n ]";
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
	//**	=============================	**//
	//**	If the player says yes, numbers for an enemy attack, their own block,
	//**	and an amount of treasure are randomly generated
	//**	=============================	**//
	enemyRoll = RollDie();
	playerRoll = RollDie();
	treasureRoll = RollDie();
	//**	=============================	**//
	//**	If the player's block is higher than the enemy attack, they have successfully blocked and they receive the treasure
	//**	=============================	**//
	if(playerRoll > enemyRoll) {
		cout << "You have successful blocked and gained treasure!\n";
		totalTreasure += treasureRoll;
		//**	=============================	**//
		//**	The player is then told their health and amount of totalTreasure and asked if they would like to adventure again
		//**	=============================	**//
		cout << "Your health is now " << playerHealth << " and you have " << totalTreasure << " treasure.\n";
	}
	//**	=============================	**//
	//**	However, if the attack is higher, that number is subtracted from their health and they do not get the treasure
	//**	=============================	**//
 	else {
		cout << "You did not successful block.\n";
		cout << "You lose " << enemyRoll << " hp.\n";
		playerHealth -= enemyRoll;
		cout << "Your health is now " << playerHealth << " and you have " << totalTreasure << " treasure.\n";
	}
}

int main() {
    startAdv();
	//**	=============================	**//
	//**	They can continue to adventure as long as their health is greater than zero
	//**	=============================	**//
	while (playerHealth > 0) {
	    if(keepAdv("\n") == 'y') {
			cout << "Let's go adventuring.\n";
			advNumbers();
		} else {
			cout << "You return home with " << totalTreasure << "!\n";
			break;
		}
	}

	//**	=============================	**//
	//**	at which point the ending is run and they are told that they are dead
	//**	=============================	**//

	cout << "You died with " << totalTreasure << " treasure in your pocket!";
	return 0;
}

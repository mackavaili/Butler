/*
    pseudocode for chapter 3 homework assignment

    create an array of strings with a size of 10.
    explain the story to the player, whatever story you wish to tell.
        the player starts with 3 items.
        over the course of several adventures,
        1.  the player gains 3 items and has to name each of them.
            for example: BunnySword or FlameGuitar
             - because of cin limitations, the name can only be one word.
        2.  the player uses 1 item, making it go away.
        3. at each change in inventory - show the changes with a for loop that ignores strings that have "" no characters.

        For the final challenge, the player must give up their most treasured item to the bridge troll (or similar) to get past the bridge.
            The player will have to search for that item inside of a for loop.
*/
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main () {
	srand(time(0));

	cout << "You start your adventure in the forest of Wichita.\n";
	cout << "You have the following items in your inventory.\n";

// list current items
	string inv[10];
	int invItems = 0;
	inv[invItems++] = "Bow";
	inv[invItems++] = "Axe";
	inv[invItems++] = "Sword";

	cout << "\nCurrent Inventory: \n";
	for(int i = 0; i < invItems; i++) {
		cout << i + 1 << ". " << inv[i] << endl;
	}

// start of an encounter
cout << "As you walk down the path you see a bright light.\n";
cout << "The light begins to turn a bright red and moves closer.\n";
cout << "The light shoots fire in your direction. You must protect yourself.\n";
cout << "What weapon would you like to use?\n";

// list inventory with added item
	cout << "\nCurrent Inventory: \n";
	for(int i = 0; i < invItems; i++) {
		cout << i + 1 << ". " << inv[i] << endl;
	}



	for(int i = 0; i < invItems; i++) {
		string weaponPick;
		cin >> weaponPick;
		if(inv[invItems] == weaponPick) {
			cout << "You take out your " << weaponPick << "!\n";
			break;
		}
		if(inv[invItems] != weaponPick) {
			cout <<"You don't have that!\n";
		}
		else {
			continue;
		}
	}

cout << "You pick up a shield. What would you like to call it?\n";

// adding an item to inventory
	string input;
	cin >> input;
	inv[invItems++] = input;

// list inventory with added item
	cout << "\nCurrent Inventory: \n";
	for(int i = 0; i < invItems; i++) {
		cout << i + 1 << ". " << inv[i] << endl;
	}

// search for an item
cout << "What do you want to search for in your inventory?\n";
string playerInput;
cin >> playerInput;

	for(int i = 0; i < invItems; i++) {
		if(inv[i] == playerInput) {
			cout << "You have " << playerInput << "!\n";
			cout << "You hand over " << playerInput << " to the troll.\n";
			inv[invItems] = playerInput;
			// list inventory with removed item
				cout << "\nCurrent Inventory: \n";
				for(int i = 0; i < invItems; i++) {
					cout << i + 1 << ". " << inv[i] << endl;
				}
		}

		else {
			continue;
		}
	}
}

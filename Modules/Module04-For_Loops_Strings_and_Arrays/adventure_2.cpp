#include <iostream>
#include <string>

using namespace std;

int main () {
		/* --------------
		//	create an array of strings with a size of 10
		---------------*/
		string items[10];

		/* --------------
		//	the player starts with 3 items
		---------------*/
		int totalItems = 0;
		items[totalItems++] = "Blade";
		items[totalItems++] = "Bow";
		items[totalItems++] = "Ring";

		/* --------------
		//	explain the story to the player, whatever story you wish to tell
		---------------*/
		cout << "You awake in a forest covered in fog.\n";
		cout << "The smell of sweat and blood fill your nose.\n";
		cout << "In front of you is a small pond. You walk over to see your reflection.\n\n";
		cout << "||-- What would you like to be called? --||\n";

		string playerName;
		cin >> playerName;

		cout << "\nYou slowly remember your name is " << playerName << ".\n";

		// list current items
		cout << "You notice that you are currently carrying: \n";
				for(int i = 0; i < totalItems; i++)
				{
				cout << i + 1 << ". " << items[i] << "\n";
				}

		//	start adventure #1
		cout << "\nTo your right you see a shield and pick it up.\n";

		//	Naming the item player just picked up
		cout << "\n||-- What would you like to call this Shield? --||\n";
		cout << "||-- One word only such as 'Shield' or 'ShieldAmerica'--||\n";
		string weaponNaming;
		cin >> weaponNaming;
		items[totalItems++] = weaponNaming;
		cout << "\nYou haved named this item " << weaponNaming << "!\n";


		// list current items
		cout << "Here is your current items: \n";
				for(int i = 0; i < totalItems; i++)
				{
				cout << i + 1 << ". " << items[i] << "\n";
				}
		//	End of adventure #1


		//	start adventure #2
		cout << "\nIn the middle of the pond you notice ripples begining to form.\n";
		cout << "Suddenly, the tentacles of a large creature swipe at you.\n";
		cout << "You must defend yourself!\n\n||-- What item would you like to use? --||\n";
		string advtwoChoice;
		cin >> advtwoChoice;

				if(advtwoChoice == "Blade") {
					cout << "\nYou pull your Blade out and stap at the creature.\n";
					cout << "One the creatures tentacles grabs you and carrys you into the air.\n";
					cout << "You shove your Blade into the creatures tentacles and begin to saw back and forth.\n";
					cout << "The blade breaks as the creature tosses you across the pond and it disappears under the water.\n";
					cout << "As you standup you see a Sword on the edge of the pond and pick it up.\n";
					/* --------------
					//	the player uses 1 item, making it go away
					---------------*/
					items[0] = "";
				}
				else if(advtwoChoice == "Bow") {
					cout << "\nYou pull your Bow out and start shooting arrows.\n";
					cout << "One of the arrows hit the creatures tentacles.\n";
					cout << "The creature grabs you as you fire 2 more arrows hitting it in its eyes.\n";
					cout << "It tosses you across the pond and you land on your bow \nbreaking it as the creature disappears under the water.\n";
					cout << "As you standup you see a Sword on the edge of the pond and pick it up.\n";
					/* --------------
					//	the player uses 1 item, making it go away
					---------------*/
					items[1] = "";
				}
				else if(advtwoChoice == "Ring") {
					cout << "\nYou pull the ring from your pocket and slide it on your finger.\n";
					cout << "The world turns black and white as the creature slips beneath the water.\n";
					cout << "With out warning, Ringwraiths fly down and you are eaten by a fell beast.\n";
					cout << "You might want to use a pointy weapon next time.\n";
					return 0;
				}
				else if(advtwoChoice == items[3]) {
					cout << "\nDid you really think that was going to work?\n";
					cout << "The creature beats you to death.\n";
					return 0;
				}
				else {
					cout << "You choose poorly!\n";
					return 0;
				}

		//	Naming the item player just picked up
		cout << "\n||-- What would you like to name it? --||\n";
		cin >> weaponNaming;
		items[totalItems++] = weaponNaming;
		cout << "\nYou haved named this item " << weaponNaming << "!\n";

		/* --------------
		// at each change in inventory - show the changes with a for loop
		// that ignores strings that have "" no characters
		---------------*/
		cout << "Here is your current items: \n";
				for(int i = 0; i < totalItems; i++)
				{
				cout << i + 1 << ". " << items[i] << "\n";
				}
		//	End of adventure #2


	 	//	Start adventure #3
		cout << "You walk away from the pond, down a path cut in the forest.\n";
		cout << "It seems like you are walking forever when you come to a river.\n";
		cout << "There is a bridge but it looks very old.\n";
		cout << "You start to cross the bridge when a troll climbs from under it.\n";
		cout << "He tells you inorder to cross you must give him something of yours.\n";

		/* --------------
		// the player must give up their most treasured item
		// the player will have to search for that item inside of a for loop
		// -------------*/
		cout << "\n||-- What do you want to give the troll? --||\n";
		string searchItem;
		cin >> searchItem;

				for(int i = 0; i < totalItems; i++) {
		    		if(items[i] == searchItem) {
		            cout << "You have a " << searchItem << " and give it to the troll!\n";
								items[i] = "";
		        }
				    		if(items[i] != "") {
				        }
					      else {
					      	continue;
					      }
        }

		/* --------------
		// at each change in inventory - show the changes with a for loop
		// that ignores strings that have "" no characters
		---------------*/
		cout << "\nHere is your current items: \n";
				for(int i = 0; i < totalItems; i++) {
						cout << i + 1 << ". " << items[i] << "\n";
				}

		cout << "\nIn return for the " << searchItem << ", the troll gives you a helmet.\n";
		items[totalItems++] = "Helmet";

						cout << "\n||-- What would you like to name it? --||\n";
						cin >> weaponNaming;
						items[totalItems++] = weaponNaming;
						cout << "\nYou haved named this item " << weaponNaming << "!\n";

		cout << "You pick up " << items[6] << " and cross the bridge on your way to another adventure.\n";


		/* --------------
		// at each change in inventory - show the changes with a for loop
		// that ignores strings that have "" no characters
		---------------*/
		cout << "Here is your current items: \n";
				for(int i = 0; i < totalItems; i++)
				{
				cout << i + 1 << ". " << items[i] << "\n";
				}
		//	End of adventure #3

		cout << "THE END!";
		return 0;
}

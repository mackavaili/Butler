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
        string playerName = "Mike";
        cout << "A string is a array of charaters.\n";
        cout << "The first letter in the players name is \n";
        cout <<  playerName[0] << ".\n";  // computers start couning at 0
        cout << "The 2nd letter in the players name is \n" <<  playerName[1] << ".\n";
        cout << "The 3rd letter in the players name is \n" <<  playerName[2] << ".\n";
        cout << "The 4th letter in the players name is \n" <<  playerName[3] << ".\n";
        cout << "The 5th letter in the players name is \n" <<  playerName[4] << ".\n";

        cout << "Using a for loop to add a space between each letter of the player's name.\n";
        cout << "Also use playerName.size() [" << playerName.size() << "].\n";
        for(int i = 0; i < playerName.size(); i++) {
          cout << playerName[i] << " ";
        }

				break;
			}
      case 3: {
        cout << "More strings.\n";
        string phrase = "Search your feeling";

        cout << phrase << "\n";

        phrase[15] = 'r';
        cout << phrase << "\n";
        if(phrase.find("your") == string::npos) {
          cout << "The phrase 'your' is not in the phrase.\n";
        } else {
          // find the spot where its starts
          int startLocation = phrase.find("your");
          phrase[startLocation++] = 'm';
          phrase[startLocation++] = 'y';
          phrase.erase(startLocation, 2);
          cout << phrase << "\n";
        }

        cout << "Erasing the entire phrase...\n";
        phrase.erase();

        string firstName = "Darth";
        string lastName = "Vader";
        phrase = firstName + " " + lastName + "!!!";
        cout << phrase << "\n";

        break;
      }
      case 4: {
        cout << "Hello Arrays!\n";
        // new 'list' of strings, size of 5
        string inventory[5];

        int totalItems = 0;
        inventory[totalItems++] = "Mustard";
        inventory[totalItems++] = "EyeDrops";
        inventory[totalItems++] = "GuitarHero3";

        cout << "Here are your items!\n";
        for(int i = 0; i < totalItems; i++) {
          cout << i + 1 << ". " << inventory[i] << "\n";
        }

        cout << "You stop for lunch, use that mustard.\n";
        inventory[0] = "Empty Mustard Packet";

        cout << "Here are your items!\n";
        for(int i = 0; i < totalItems; i++) {
          cout << i + 1 << ". " << inventory[i] << "\n";
        }

        cout << "You find another item in the store\n";
        // add another item to the inventory, and show your inventory

        inventory[totalItems++] = "Cheetos";
        cout << "You also throw away your empty mustard packet.\n";
        inventory[0] = "";

        cout << "What do you want to search for in your inventory?\n";
        string playerInput;
        cin >> playerInput;

        for(int i = 0; i < totalItems; i++) {
          if(inventory[i] == playerInput) {
            cout << "You have " << playerInput << "!\n";
            cout << "You eat the " << playerInput << " immediately!!\n";
            inventory[i] = "Empty bag of " + playerInput;
          }
          if(inventory[i] != "") {
            cout <<"- " << inventory[i] << "\n";
          }
          else {
            continue;
          }
        }

        break;
      }
			default: {
				cout << "That is not one of the options! Please try again!\n";
				break;
		}
	}
}

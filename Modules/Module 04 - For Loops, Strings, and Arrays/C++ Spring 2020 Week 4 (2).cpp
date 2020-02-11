#include <iostream>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <thread>

using namespace std;

int main () {

		// seed random number generator
		srand(time(0));

		cout << "Hello World.\n";
		int choice = 0;
		do {

				cout << "What would you like to do? Press 0 to quit.\n";
				cin >> choice;

				int counter = 0;
				int randomNumber = (rand() % 5) + 7;		//	rand()

					if(choice == 1) {
							cout << "Warmup!\n";
							//	a while loop that counts to a random number between 7 and 11.
							while(counter++ < randomNumber) {
								cout  << counter << " ";
							}
							cout << endl;
					}
					else if(choice == 2) {
						cout << "All about for loops.\n";
						//	for (initialization or setup; test; action) {code}
						cout << "What number would you like to skip?\n";
						int skipNum;
						cin >> skipNum;
						for(int i = 0; i < 10; i++) {
							if(i + 1 == skipNum) {
								cout << "HAHA, We are skipping this number!!!\n";
								continue;
							}
							cout << i + 1 << " ";
							if(i == 15) {
								break;
							}
						}
						cout << endl;
					}
					else if(choice == 3) {
						cout << "Nested for loop!\n";
						for(int y = 0; y < 6; y++) {
							for(int x = 0; x < 4; x++) {
								cout << "x=" << x << "," << "y=" << y << "  ";
							}
							cout << endl;
						}
					}
					else if(choice == 4) {
						cout << "All about strings!\n";
						string myName = "Brian Foster";
						cout << "My name has " << myName.size() << " letters.\n";
						string super = "Super";
						string duper = "Duper";
						string dots = "!!!!";

						string dadPhrase = super + " " + duper + dots;
						cout << "The phrase is " << dadPhrase << endl;
						cout << "The phrase has " << dadPhrase.size() << " charaters.\n";
						//	stings are just arrays of charaters
						dadPhrase[8] = 'd';
						cout << "The phrase is " << dadPhrase << endl;

						cout << "[Finding start of word 'Duper'...]\n";
						cout << "Duper start at dadPhrase[" << dadPhrase.find("Duder") << "].\n";
						cout << "What a stupid word!\n";
						dadPhrase.erase(6,5);
						cout << "The phrase is now '" << dadPhrase << "'.\n";
					}
					else if(choice == 5) {
						cout << "Arrays!\n";

						const int MAX_ITEMS = 3;
						string inv[MAX_ITEMS];

						// what makes an array an array? [] square brackets
						//	string bananas[500];

						inv[0] = "Master Sword";
						inv[1] = "Green Tunic";
						inv[2] = "Hylain Shield";

						cout << "Your items:\n";
						//	number the list...
						for(int i = 0; i < MAX_ITEMS; i++) {
							cout << i + 1 << ". " << inv[i] << endl;
						}

						cout << "You need to go to the fire temple, you change your tunic.\n";
						inv[1] = "Fireproof Tunic";
						cout << "Your items:\n";
						for(int i = 0; i < MAX_ITEMS; i++) {
							cout << i + 1 << ". " << inv[i] << endl;
						}

						cout << "inv[0] has " << inv[0].size() << " characters.\n";
						cout << "Can I change the letter in inv[2]\n";
						inv[2][0] = 'X';
						cout << inv[2] << endl;

					}
					else if(choice == 6) {

							int totalNames = 10;
							string input;

							cout << "Welcome to the name saver program.\n";
							cout << "Hour many names would you like to save?\n";
							cin >> totalNames;
							string names[totalNames]; 	// array of string objects

							for(int i = 0; /* i < totalNames*/; i++) {
								cout << "Enter a name: \n";
								cin >> input;
								if(input == "quit") {
									break;
								} else {
									if(i >= totalNames) {
										cout << "Can't add anymore names. The list is full.\n";
									}
									names[i] = input;
								}
								cout << "\n";
								//	use a for loop to display all current names;
								cout << "Current names in list\n";
								for(int i = 0; i < totalNames; i++) {
									cout << i + 1 << ". " << names[i] << endl;
								}

							}
					}
					else if(choice == 7) {
						//	Using a collection initializer
						string food[] = {"Pizza", "Chezburger", "Soylent", "Bananas", "Tacos"};
						cout << "You should eat " << food[rand() % 5] << " for dinner!\n";
					}

					}while(choice != 0);

}

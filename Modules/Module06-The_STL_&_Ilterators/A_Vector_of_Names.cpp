#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

int main () {
	string playerInput;
	int choice;
	vector<string> names(0);

	names.push_back("Mike");
	names.push_back("Ray");
	names.push_back("Randy");
		do {
			cout << "What program would you like to run?\n";
			cout << "[ 1 ] = Add Name\n";
			cout << "[ 2 ] = Change Name\n";
			cout << "[ 3 ] = Remove Name\n";
			cout << "[ 4 ] = Quit\n";
			vector<string>::iterator changeIter;
			vector<string>::const_iterator readIter;
			cin >> choice;

			// add names
				if(choice == 1) {
					cout << "Currently there are " << names.size() << " names: \n";
						for(int i = 0; i < names.size(); i++) {
							cout << i + 1 << ". " << names[i] << endl;
						}
					readIter = names.end();
					cout << "What name would you like to add?\n";
					string addName;
					cin >> addName;

					names.insert(readIter, addName);

					cout << "Currently there are " << names.size() << " names: \n";
						for(int i = 0; i < names.size(); i++) {
							cout << i + 1 << ". " << names[i] << endl;
						}
				}
			// change names
			else if(choice == 2) {
				cout << "\nCurrently there are " << names.size() << " names: \n";
					for(int i = 0; i < names.size(); i++) {
						cout << "[ " << i + 1 << " ]" << names[i] << endl;
					}
				cout << "What name would you like to replace?\n";
				cout << "Pick a number.\n";
				int n;
				cin >> n;

				vector<string>::iterator changeIter;
				vector<string>::const_iterator readIter;

				cout << "You choose the name " << *readIter << " to replace.\n";
				cout << "What would you like to replace it with?\n";

				string nameReplaceWith;
				cin >> nameReplaceWith;

				cout << "\nCurrently there are " << names.size() << " names: \n";
					for(int i = 0; i < names.size(); i++) {
						cout << i + 1 << ". " << names[i] << endl;
					}
			}
			// remove name
			else if(choice == 3) {
				cout << "Currently there are " << names.size() << " names: \n";
					for(int i = 0; i < names.size(); i++) {
						cout << i + 1 << ". " << names[i] << endl;
					}
				cout << "What name would you like to remove?\n";
				string playerInput;
				cin >> playerInput;

				if(playerInput == "Mike") {
					for(int i = 0; i < names.size(); i++) {
						if(names[i] == "Mike") {
							names[i] = names[names.size() - 1];
							names.pop_back();
						}
					}
				}
				if(playerInput == "Ray") {
					for(int i = 0; i < names.size(); i++) {
						if(names[i] == "Ray") {
							names[i] = names[names.size() - 1];
							names.pop_back();
						}
					}
				}
				if(playerInput == "Randy") {
					for(int i = 0; i < names.size(); i++) {
						if(names[i] == "Randy") {
							names[i] = names[names.size() - 1];
							names.pop_back();
						}
					}
				}
			// list names with the one removed
			cout << "Currently there are " << names.size() << " names: \n";
				for(int i = 0; i < names.size(); i++) {
					cout << i + 1 << ". " << names[i] << endl;
				}
			}
			else if(choice == 4){
				cout << "\nThanks for playing. Have a nice day!";
				break;
			}
			else {
				cout << "\n--== That is not one of the options! ==--\n\n";
			}
		}
	while (true);
return 0;
}

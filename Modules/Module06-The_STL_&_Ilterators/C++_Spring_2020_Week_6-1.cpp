#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <queue>

using namespace std;

int main() {
	cout << "Welcome to Chapter 4.\n";
	cout << "We are talking about vectors todau.\n";
	cout << "Which program would you like to run?\n";
	cout << "(1-5)>>";
	int programChoice = 0;
	cin >> programChoice;

	if(programChoice == 1) {
	// first bit of code here
		cout << "[Creating a vector]\n";
		vector<string> inv;

		// add three items to the vector...
		inv.push_back("Master Sword");
		inv.push_back("Ocarina");
		inv.push_back("Health Potion");

		cout << "\nYour Inventory:\n";
		for(int i = 0; i < inv.size(); i++) {
			cout << inv[i] << endl;
		}

		// add three more items to your Inventory
		inv.push_back("Deku Nut");
		inv.push_back("Boomerang");
		inv.push_back("Mana Potion");

		// cout there are " x " items in my Inventory
		cout << "\nThis pack is getting heavy!\n";
		cout << "There are " << inv.size() << " items in your Inventory.\n";

		cout << "\nYour Inventory:\n";
		for(int i = 0; i < inv.size(); i++) {
			cout << i + 1 << ". " << inv[i] << endl;
		}

		cout << "\nYou are low on mana and use mana potion,\nconsuming it!\n";
		inv.pop_back();	// removes the last item from the vector

		cout << "\nYour Inventory:\n";
		for(int i = 0; i < inv.size(); i++) {
			cout << i + 1 << ". " << inv[i] << endl;
		}

		cout << "You plant your deku nut and it turns into a Deku Tree.\n";
		inv[3] = "Deku Tree";

		cout << "\nYour Inventory:\n";
		for(int i = 0; i < inv.size(); i++) {
			cout << i + 1 << ". " << inv[i] << endl;
		}

		string name = "MAKAVAILE";
		cout << "There are " << name.size() << " letters in the name " << name << ".\n";

		cout << "There are " << inv[4].size() << " letters in the item.\n";


		cout << "\nOh no! A shadow knight has stolden all of your items!\n";
		while(inv.size() > 0) {
			inv.pop_back();
		}

		cout << "\nYour Inventory:\n";
		for(int i = 0; i < inv.size(); i++) {
			cout << i + 1 << ". " << inv[i] << endl;
		}
	}

	if(programChoice == 2) {
		cout << "Let's talk about Iterators!!\n\n";
		vector<int> scores;
		scores.push_back(1000);
		scores.push_back(2000);
		scores.push_back(3000);
		scores.push_back(4000);

		// making iterator
		vector<int>::iterator iter;

		cout << "Here are the High Scores\n";
		for(iter = scores.begin(); iter != scores.end(); iter++) {
			cout << *iter << endl;
		}

		cout << "\nLet's deconstrect this a little.\n";
		cout << "\nPointing Intr to score.begin().\n";
		iter = scores.begin();
		// oops, can't just cout intr
		// cout << "Sending iter to cout: " << intr << endl;
		cout << "\nIntr is pointing at this value: " << *iter << endl;
		cout << "That is also called 'dereferencing iter'.\n";

		cout << "Adding 1 to iter and dereferencing it.\n";
		iter++;
		cout << *iter << endl;

		cout << "Scores.begin() is pointing at " << *scores.begin() << endl;
		cout << "Scores.end() is pointing at " << *(scores.end() - 1) << endl;

		vector<string> inv;
		inv.push_back("banana");
		inv.push_back("apple");
		inv.push_back("orange");

		vector<string>::iterator myIter;
		cout << "Doing weird stuff now.\n";

		myIter = inv.begin();

		// compare these two. use the one that is easier to read. less clever
		cout << (*myIter).size() << endl;
		cout << myIter->size() << endl;

		inv.insert(inv.begin(), "plum");

		for(myIter = inv.begin(); myIter != inv.end(); ++myIter) {
			cout << *myIter << endl;
		}

		for(myIter = inv.begin(); myIter != inv.end(); ++myIter) {
			if(*myIter == "apple") {
				cout << "We have eaten the apple.\n";
				inv.erase(myIter);
			}
		}
		for(myIter = inv.begin(); myIter != inv.end(); ++myIter) {
			cout << *myIter << endl;
		}

	}

	if(programChoice == 3) {
		cout << "Here are a few algorithms.\n";
		vector<string> names;
		names.push_back("Harry Potter");
		names.push_back("Hermione Granger");
		names.push_back("Professor Mcgonagall");
		names.push_back("Albus Dumbledore");

		vector<string>::iterator changeIter;
		vector<string>::const_iterator readIter;


		cout << "\nHere are some names.\n";
		for(readIter = names.begin(); readIter != names.end(); ++readIter) {
			cout << "- " << *readIter << endl;
		}

		cout << "\nHere they are changing postitions with random_shuffle.\n";
		srand(time(0));
		random_shuffle(names.begin(), names.end());

		cout << "\nHere are some names.\n";
		for(readIter = names.begin(); readIter != names.end(); ++readIter) {
			cout << "- " << *readIter << endl;
		}

		cout << "\nSorting names.\n";
		sort(names.begin(), names.end());

		cout << "\nHere are some names.\n";
		for(readIter = names.begin(); readIter != names.end(); ++readIter) {
			cout << "- " << *readIter << endl;
		}

		cout << "\nReversing the order.\n";
		reverse(names.begin(), names.end());

		cout << "\nHere are some names.\n";
		for(readIter = names.begin(); readIter != names.end(); ++readIter) {
			cout << "- " << *readIter << endl;
		}
	}

	if(programChoice == 4) {
		cout << "Creating a vector of strings named favs.\n";
		vector<string> favs;

		cout << "The current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Half Life 2");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Dishonored");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Diablo II");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Quake 3");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Skyrim");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nadding a favor to favs.\n";
		favs.push_back("Red Dead");
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		favs.reserve(100);
		cout << "\nThe current size of favs is " << favs.size() << ".\n";
		cout << "The current capacity of favs is " << favs.capacity() << ".\n";

		cout << "\nRemoving everything from favs....\n";

		while(!favs.empty()) {
			favs.pop_back();
			cout << "\nThe current size of favs is " << favs.size() << ".\n";
			cout << "The current capacity of favs is " << favs.capacity() << ".\n";
		}
		// size is the number of items in the vector
		// capacity is number of available spots in memory
	}

	if(programChoice == 5) {
		cout << "A queue is FIFO - First in, First out.\n";
		cout << "Here we are at the DMV.\n";
		cout << "Some people are arriving.\n\n";

		// don't forget to #include <queue>
		queue<string> people;
		people.push("Brian");
		people.push("Darryl");
		people.push("Jon");

		cout << people.front() << " is at the front of the line.\n";
		people.pop();

		cout << "Next in line is " << people.front() << endl;
		people.pop();
		cout << "Now the person at the front of the line is " << people.front() << endl;
		people.pop();

		if(!people.empty()) {
			cout << people.front() << " is next!\n";
		}
	}
	else {
		cout << "That was not on of the options.\n";
	}
return 0;
}

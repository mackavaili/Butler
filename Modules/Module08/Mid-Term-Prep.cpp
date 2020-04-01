#include <iostream>
#include <string>
using namespace std;

void Chapter1() {
	cout << "This is where I'll demo all the lessons from Chaptep 1.\n";
}

int main() {
	cout << "\nLet's get started.\n";
	cout << "We have 5 chapters under our belt so far.\n";
	cout << "Chapter 1 covered Types, Variables, and Standard I/O.\n";
	//	arithmatic operators, creating variables, constants
	cout << "Chapter 2 covered Truth, Branching, and the Game Loop.\n";
	//	if, else if, else, booleans, switch, while, do while, break, continue
	//	logical operators NOT, AND, OR - random numbers
	cout << "Chapter 3 covered For Loops, Strings, and Arrays.\n";
	//	for loops, strings, arrays, multi-dimensional arrays
	//	for the m-dimensional array, inventory with descriptions?
	cout << "Chapter 4 covered the Standard Template  Library.\n";
	//	vectors, iterators, algorithms
	cout << "Chapter 5 covered Functions!\n\n";
	//	creating functions, parameters, return values, scope, global variables,
	//	default arguments, overloading functions, inlining functions
	cout << "For fun and for practice, I'll build this into a switch statement.\n";

	int input = 0;
	while(input < 1 || input > 5) {
		cout << "What Chapter should we cover?\n [1-5] >> ";
		cin >> input;
	}

	switch(input) {
		case 1: Chapter1() break;
		case 2: Chapter2() break;
		case 3: Chapter3() break;
		case 4: Chapter4() break;
		case 5: Chapter5() break;
		case default: cout << "That's not one of the options.\n"; break;
	}

	return 0;
}

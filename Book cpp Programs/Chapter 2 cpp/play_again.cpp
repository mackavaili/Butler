// Play Again
// Demonstrates while loops

#include <iostream>
using namespace std;

int main() {
char again='y';
while (again == 'y') {
	cout << "\nPlayed an exciting game**";
	cout << "\nDo you want to play again? (y/n): ";
	cin >> again;
}

cout << "Okay, bye.\n";
return 0;
}
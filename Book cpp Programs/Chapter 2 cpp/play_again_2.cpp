// Play Aagin 2.0
// demonstartes do loops

#include <iostream>
using namespace std;

int main() {
char again;
do {
	cout << "\n**Played a exciting game**";
	cout << "\nDo you want to play again? (y/n): ";
	cin >> again;
}
while (again == 'y');

cout << "\nOkay, bye.";
return 0;
}
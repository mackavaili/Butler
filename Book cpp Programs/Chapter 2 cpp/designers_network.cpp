// Designers Network
// Demonstrates logical operators

#include <iostream>
#include <string>
using namespace std;

int main() {
	string username;
	string password;
	bool success;

	cout << "\tGame Designers Network\n";

	do {
		cout << "\nUsername: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;
		if (username == "S.Meier" && password == "civil")
		{
			cout << "Hey Sid";
			success = true;
		}

		else if (username == "M.Vail" && password == "makavaile")
		{
			cout << "Sup Mike.";
			success = true;
		}

		else if (username == "guest" && password == "guest")
		{
			cout << "Welcome Guest";
			success = true;
		}

		else {
			cout << "\nYour login failed.";
			success = false;
		}
	}
	while (!success);
	return 0;

}
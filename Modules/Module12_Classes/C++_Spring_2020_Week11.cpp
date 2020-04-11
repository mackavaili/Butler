#include <iostream>
#include <string>
#include <vector>

using namespace std;

//	build me a global string
//	add in main() send the size of the string to cout.

//	build a function that accepts a string
//	then uses a for loop to add a space in between each letter

void addSpace(string input) {
	for(int i = 0; i < input.size(); i++) {
		cout << input[i] << " ";
	}
	cout << endl;
}

string name = "Darth Vader";

class Robot {
public:
	static int totalRobots;

	void greeting() {
		cout << "My name is " << name << ". My charge is " << charge << ".\n";
	}
	Robot(string givenName = "Robot", int givenCharge = 10) {
		cout << "\nA new robot approaches!\n";
		charge = givenCharge;
		name = givenName;
		totalRobots++;	//	add one to total rovot count.
	}
	void SetCharge(int givenCharge) {
		if(givenCharge < 0) {
			charge = 0;
		} else {
		charge = givenCharge;
		}
	}
	//	a constant function is read-only
	int GetCharge() const {
		return charge;
	}
	void SetName(string givenName) {
		name = givenName;
	}
	//	member functions
	string GetName () const {
		return name;
	}

private:
	int charge;		//	data members
	string name;	//	data members
};

int Robot::totalRobots = 0;

int main() {
	cout << "Hello World!\n";
	//	.size() is a member function of every string
	cout << "There are " << name.size() << " letters in " << name << endl;
	addSpace("JOIN THE DARK SIDE!!!!");

	Robot cp3o;
	cout << "Assigning a charge to cp3o and making sure it sticks.\n";
	cp3o.SetCharge(9);
	cout << "cp3o's charge is " << cp3o.GetCharge() << endl;

	cout << "Assigning a name to cp3o and making sure it sticks.\n";
	cp3o.SetName("C-P3O");
	cout << "cp3o's name is " << cp3o.GetName() << endl;
	cp3o.greeting();

	Robot r2d2;
	cout << "Assigning a charge to r2d2 and making sure it sticks.\n";
	r2d2.SetCharge(42);
	cout << "r2d2's charge is " << r2d2.GetCharge() << endl;

	cout << "Assigning a name to r2d2 and making sure it sticks.\n";
	r2d2.SetName("R2-D2");
	cout << "r2d2's name is " << r2d2.GetName() << endl;
	r2d2.greeting();

	Robot ig88("IG-88", 9001);
	ig88.greeting();

	cout << "There are " << ig88.totalRobots << " robots in the game.\n";

	for(int i = 0; i < 10; i++) {
		Robot rob;
	}

	cout << "There are " << ig88.totalRobots << " robots in the game.\n";

	vector<Robot> army;

	army.push_back(ig88);
	army.push_back(Robot("Banana Man", 256));

	cout << "The second robot in our army is named " << army[1].GetName() << ".\n";
}

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

//	combind classes
//	use friend functions
//	overload operators
//	dynamically allocate and free memory
//	avoid memory leaks

class ship {
	//	declare friend function
	friend void Debug(const ship& givenShip);
	friend ostream& operator<<(ostream& os, const ship& givenShip);
private:
	int speed;	//	m_Speed
	int damage;
	string name;
public:
	ship(string givenName = "Titanic", int givenSpeed = 5, int givenDamage = 200) {
		name = givenName;
		speed = givenSpeed;
		damage = givenDamage;
	}
	string GetName() { return name; }
	int GetSpeed() { return speed; }
	int GetDamage() { return damage; }
};

void Debug(const ship& givenShip) {
	cout << "Debugging " << givenShip.name << ".\n";
	cout << "Speed = " << givenShip.speed << ".\n";
	cout << "Damage = " << givenShip.damage << ".\n";
}

ostream& operator<<(ostream& os, const ship& givenShip) {
	os << "Ship Object - ";
	os << "Name: " << givenShip.name;
	return os;
}

class navy {
private:
	vector<ship> ships;		//	m_Ships
public:
	navy(int spaces = 1) {
		ships.reserve(spaces);
	}
	void Add(const ship& givenShip) { ships.push_back(givenShip); }
	void DisplayAllShips() {
		for(int i = 0; i < ships.size(); i++) {
			cout << i + 1 << ". " << ships[i].GetName() << ".\n";
		}
	}
};

int* intOnHeap() {
	int* pTemp = new int(20);
	return pTemp;
}

int main() {
	srand(time(0));
	if(false) {

	}
	if(false) {
		ship xWing("X-Wing");
		cout << "My first ship's name is " << xWing.GetName() << ".\n";

		Debug(xWing);

		cout << "\nCreating Imperial Navy!\n";
		navy impNavy(4);
		impNavy.Add(ship("NCC 1701 C", 1, 2000));
		impNavy.Add(ship("Hope", 0, 9999));
		impNavy.Add(ship("FireFly", 10, 600));
		impNavy.Add(ship("T-Wing", 5, 20));

		cout << "Calling all ships in the imperial navy!\n";
		impNavy.DisplayAllShips();

		cout << xWing << endl;

	}
	if(true) {
		int age = 30;			//	new int on stack, automatically assigned

		int* pHeap = new int;	//	new int on heap, manually assigned
		*pHeap = 10;			//	assigning a value to our new int on the heap
		cout << "pHeap value = " << *pHeap << ".\n";	//	should be 10

		int* pHeap2 = intOnHeap();
		cout << "pHeap2 value = " << *pHeap2 << ".\n";	//	should be 20

		cout << "Freeing up the memory that we manually assigned.\n";
		cout << "Gotta clean up your messes!\n";
		delete pHeap;
		delete pHeap2;

	}
}

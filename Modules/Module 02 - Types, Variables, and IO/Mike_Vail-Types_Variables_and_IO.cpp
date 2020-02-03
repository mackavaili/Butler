#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

// 1. Variables (int)
int userHealth, userAge, userOxy = 75, userRad = 4;
// 8. Constants
const int courseOdds = 10;
// 1. Variables (float)
float userFuel = 23.7;

cout << "You wake up weightless. Floating in a ship.\n";
cout << "You hear loud beeping from a console.\n";
cout << "You type in BOOT and hit enter on the keyboard.\n";

// 1. Variables (string)
string input;
// 6. Input from Player #1
cin >> input;

	if (input == "BOOT" || "boot") {
		cout << "CPU clock is 792MHz\n";
		cout << "DDR clock is 696MHz with 1T mode\n";
		cout << "DDR check pass!\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "U-boot-gc0e883b-dirty(m8_k2_v1@uboot) (Mar 14 2044 - 16:30:10)\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "Net:  Meson_Wireless (-unavailable-)\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << "Starting kernel ...\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		cout << "oxygen         [ " << userOxy << " Hg ]\n";
		cout << "fuel           [ " << userFuel << " gal]\n";
		cout << "radiation      [ " << userRad << "  mSv]\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		cout << ".\t.\t.\t.\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(2000));
		cout << "Name Please.\n";
	}
	else {
		cout << "Invalid operation. Program terminated.\n";
		return 0;
	}

// 6. Input from Player #2
string userName;
cin >> userName;

cout << "I don't have anyone named " << userName << " in my database.\n";
cout << "Well " << userName << " lets add you. What is your age?\n";
		
cin >> userAge;
userHealth = userAge + 35;

// 1. Variables (bool) I understand what bool does, just not sure how to use it right
bool fuelRemaining;
if (fuelRemaining <= 20.0)
	cout << "Fuel levels look OK!\n";
else
	cout << "Were getting low on fuel.\n";

cout << "Let me check your health.\n";
cout << "Current health level is at " << userHealth << " %.\n";
cout << "There is debris ahead. Should I find a new course?\n";
cout << "[  YES  ] or [  NO  ]\n";

cin >> input;

	if (input == "YES") {
		cout << "It will take three maneuvers to clear the debris.\n";
		cout << "I will need you to fire the engine each time.\n";
		cout << "Each maneuvers will use 7.2 gal of fuel.\n";
		// 2. Modulus Operator
		cout << "Course 1 will add 3 mSv and has a " << courseOdds % 3 << "% of failure.\n";
		cout << "Course 2 will add 4 mSv and has a " << courseOdds % 4 << "% of failure.\n";
		cout << "Course 3 will add 8 mSv and has a " << courseOdds % 6 << "% of failure.\n";
	}
	else if (input == "NO") {
		// 5. Combined Assignment operator -=
		userFuel -= 6.3;
		cout << "You will slowly die of radiation as the debris rip the ship apart.\n";
		cout << "We are leaking fuel. Currently at " << userFuel << " gal.\n";
		cout << "Good Bye " << userName << ".\n";
		return 0;
	}	
	else {
		// 5. Combined Assignment operator +=
		userRad += 20;
		cout << "We do not have time for this! Your radiation level has gone up to " << userRad << " mSv.\n";
		cout << "Incoming debris.\n";
		return 0;
	}

// 7. Enumerators
enum course {low_rads = 1, mid_rads, high_rads};
cout << "What course do you want: 1 - 2 - 3\n";

int rads = 4;
int course;
cin >> course;

	if (course == low_rads)
		// 4. Decrement Operator
		cout << "You will be at " << userRad + --rads << " mSv and have " << userFuel - 7.2 << " gal of fuel. Lets begin!\n";

		else if (course == mid_rads)
		cout << "You will be at " << userRad + userRad << " mSv and have " << userFuel - 7.2 << " gal of fuel. Lets begin!\n";

		else if (course == high_rads)
		// 3. Increment Operator
		cout << "You will be at " << userRad + userRad + rads++ << " mSv and have " << userFuel - 7.2 << " gal of fuel. Lets begin!\n";

}
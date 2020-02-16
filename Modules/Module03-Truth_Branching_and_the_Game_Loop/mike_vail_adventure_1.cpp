#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

// set up the game: int health = 10, attack, block
int playerHealth = 10, turns = 0, blockingNumber, attackNumber;

int main() {
    // seed the random number generator
    srand (time (0));

    // welcome the player
    cout << "Welcome. What is your name?\n>>";
    string playerName;
    cin >> playerName;
    cout << "Before we begin " << playerName << ", I need to know what class you would like to use.\n\n";
    cout << "[ 1 ] Assassin - A member of the Dark Brotherhood.\n";
    cout << "[ 2 ] Archer - A silent hunter of all.\n";
    cout << "[ 3 ] Mage - A student at The College of Winterhold.\n";
    cout << "[ 4 ] Knight - A warrior for Solitude.\n";
    cout << "Please type in a class number.\n\n>>";

    string playerClass;
    cin >> playerClass;
        
    if (playerClass == "1") {
            cout << "The masters of sneak attacks. You choose to be an Assassin.\nYou will start with " << playerHealth << " health.\n";
            playerClass = "Assassin";
        } else if (playerClass == "2") {
            cout << "You like to kill from a distance. You choose to be an Archer.\nYou will start with " << playerHealth << " health.\n";
            playerClass = "Archer";
        } else if (playerClass == "3") {
            cout << "Magic is your weapon. You choose to be a Mage.\nYou will start with " << playerHealth << " health.\n";
            playerClass = "Mage";
        } else if (playerClass == "4") {
            cout << "Sword and shield is your weapon. You choose to be a Knight.\nYou will start with " << playerHealth << " health.\n";
            playerClass = "Knight";
        } else {
            cout << "!! That is not one of the options !!\n!! You have failed !!\n";
            return 0;
        }

    cout << "Let's start your adventure " << playerName << " the " << playerClass << ".\n\n";
    cout << "You start off in front of the doors to the Boulderfall Cave.\n";
    cout << "As you enter the cave you hear the shuffling of feet.\n";
    cout << "You walk forward into the opening and see a Necromancer leaning over a table.\n";
    cout << "He is not aware of you yet. What would you like to do?\n\n";
    cout << "[ 1 ] Attack before he see you.\n";
    cout << "[ 2 ] Walk closer to him.\n\n";
        
    int firstChoise;
    cin >> firstChoise;
        
    if (firstChoise == 1) {
        cout << "You want to attack.\n\nYou draw your weapon and as you do the Necromancer turns to walk away. Your stike misses.\n";
        cout << "The Necromancer draws a short blade.\n";
        } else if (firstChoise == 2) {
            cout << "You want to get closer.\n\nAs you walk closer to the Necromancer your shadow is cast on the wall.\n";
            cout << "The Necromancer turns and draws a short blade.\n";
        } else {
            cout << "!! That was not one of the options !!\n";
            cout << "The Necromancer turns and draws a short blade.\n";
        }
        
    // start the loop and 1 to turns
    // keep looping while health is greater than zero
    // and fewer than 4 turns have happened
    while (playerHealth >= 1 && turns < 4) {
        // start the encounter
        cout << "Pick a number for blocking.\n>>";
        cin >> blockingNumber;
        cout << "Pick a number for attacking.\n>>";
        cin >> attackNumber;
        int randomNum = rand() / 365;
        
        // randomly generate numbers for block (range = 0-4)
        blockingNumber = randomNum % blockingNumber;
        // randomly generate numbers for attack (range = 0-4)
        attackNumber = randomNum % attackNumber + 1;
            
            // if block is greater or equal to attack, successful block
            if (blockingNumber >= attackNumber) {
                turns++;
                cout << "\nYou blocked the attack!\n";
                cout << "Your health is at " << playerHealth << ".\n\n";
                // used for testing
                // cout << "The blocking number was " << blockingNumber << ".\n";
                // cout << "The attack number was " << attackNumber << ".\n";
                // cout << "This is turn number " << turns << ".\n\n";
                    continue;
                // otherwise, subtract attack value from health
                } else if (playerHealth -= attackNumber) {
                    turns++;
                    cout << "\nYou were hit and lost " << attackNumber << " hit points.\n";
                    cout << "Your health is now at " << playerHealth << ".\n\n";
                //  used for testing
                //  cout << "The blocking number was " << blockingNumber << ".\n";
                //  cout << "The attack number was " << attackNumber << ".\n";
                //  cout << "Your number was " << randomNum << ".\n";
                //  cout << "This is turn number " << turns << ".\n\n";
                    continue;
                }
        }
        
    // if health is greater than 0, congratulate player
    if (playerHealth >= 1) {
            cout << "The Necromancer put his blade away and ask for mercy.\n";
            cout << "You survived this encounter. Congratulations " << playerName << "!\n";
        // otherwise, tell the player they're dead.
        } else if (playerHealth <= 0) {
            cout << "You were killed by the Necromancer. You are not the dovahkiin.\n";
            cout << "[  END GAME  ]\n";
        }
    return 0;
}

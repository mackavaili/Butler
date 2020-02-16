#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main () {
    srand (time (0));
    cout << "Welcome to Chapter 2!\n";
    cout << "Do you want to keep playing.\n [  yes  or  no  ]\n";
    bool keepPlaying = true;
    string playerInput;
    cin >> playerInput;

    if (playerInput == "yes") {
        keepPlaying = true;
    }
    else {
        keepPlaying = false;
    }

    if (false) {
        cout << "This is the first example in this class.\n";
        cout << "booleans, more if statements! switch statements.\n";
        cout << "while, and do-while loops, random numbers.\n";

        cout << "I am thinking of a number between 1 and 10.\n";
        cout << "Can you guess it?\n";

        int playerGuess;
        cin >> playerGuess;

        if (playerGuess == 5) {
            cout << "You've guessed it! It was 5.\n";
        }
        else if (playerGuess > 10) {
            cout << "I'm thinking of a number below 10.\n";
            cout << "oh well. I'm tring of playing.\n";
            cout << "Dumb human.\n";
        }
        else if (playerGuess < 0) {
            cout << "No negtive numbers.\n";
        } else {
        cout << "You didn't guess it.\nIt was 5\n";
        }
    }

    if (false && keepPlaying) {
        cout << "AND operator && \n"; //both must be true
        cout << "OR operator || \n"; //only one must be true
        cout << "NOT operator ! \n"; //NOT true if false

        bool hasKey;
        bool hasHammer;

        cout << "You approach a locked door.\n";
        if (hasKey || hasHammer) {
            cout << "You have unlocked the door.\n";
            if (!hasKey) {
                cout << "You are fatigued from using that hammer.\n";
            }
        } else {
            cout << "The door is still locked.\n";
        }
    }

    if (false && keepPlaying){
        cout << "A switch statement is like a set of if statements.\n";
        cout << "What level would you like to start at?\n";
        int levelChoise;
        cin >> levelChoise;

        switch (levelChoise) {
            case 1: cout << "Loading level 1..\n";
                    break;
            case 2: cout << "Loading level 2...\n";
                    break;
            case 3: cout << "Loading level 3...\n";
                    break;
            default:
                    cout << "I'm sorry, that isn't one of the options.\n";
                    break;
        }
    }

    if (false && keepPlaying) {
        cout << "Loops!\n";
        cout << "Counting to ten!\n";

        int counter = 0;

        while (counter < 11) {
            cout << counter++ << " ";
        }
        cout << "\n";

        string playerInput = "no";


       // typing anything other than 'yes' keeps program looping
        while (playerInput != "yes") {
       // typing 'no' keeps program looping
       // while (playerInput == "no") {
            cout << "Are we there yet?\n";
            cin >> playerInput;
            if (playerInput == "no" || playerInput == "yes") {
                // continue skips next block of code
                continue;
            } else if (playerInput == "STOP") {
                cout << "You hert my feelings!\n";
                break;
            } else {
                cout << "That is not one of the options.\n";
                playerInput = "no";
            }
        }

        // count down from 25 then print DONE!
        int count = 25;

        do {
            cout << count-- << " ";
        } while (count > 0);
        cout << "\nDONE!\n";
    }

    if (false && keepPlaying) {
        cout << "Ramdom Numbers.\n";
        cout << "Random numbers requires a few #includes statementss.\n";
        cout << "#include <ctime> and #include <cstdlib>\n";
        cout << "Random numbers work  like this: \n";
        cout << "current time + 54 + 112 / 3 * 678 + 5 - 16666 / 12 = \n";
        // step 1 - seed the random number generator
        //srand (time (0));
        //step 2 - generate a readom number
        cout << rand() << ".\n";
    }

    //skills test - build a loop that puts put random number
    if (false && keepPlaying) {

    int counter = 0; // start counting from 0

    srand (time (0)); //seed the random number

    while (counter < 50) { //stop counting at 50
        // add 1 to the counter and give a new random number
        //print both number to the screen
        cout << counter++ << " " << rand() << ".\n";
        }
    }

    if (true) {
        cout << "Here is a random between 1 and 100.\n";
        int randomNum = rand() % 100 + 1;
        cout << randomNum << ".\n";

        cout << "Roll the dice!\n";
        int dieRoll = rand() % 6 + 1;
        cout << "You dice roll is " << dieRoll << ".\n";
    }

    return 0;
}

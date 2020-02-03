#include <iostream>
using namespace std;          //  using directive
//using std::cout;            //  using declaration
//using std::endl;            //  using declaration

int main () {   //   { curly brace }
  if (false) {
    cout << "Hello World!\n";     //  string literal
    cout << "This is a new line.\n";
    cout << "Enter a number and press [enter]\n";

    //  cread a veriable of the type int (integer)
    int creditHours = 0;    //  camelCase
                            //  veriable will start lowercase

    //  get input from the player
    cin >> creditHours;

    // let the player know you have learned how many credit hours they are taking.
    cout << "You are enrolled in " << creditHours << " credit hours.\n";

    if (creditHours % 3 != 0) {   //  if the remainder of creditHours / 3 is NOT 0...
      //  notice that the player has a non-standered number of hours.
      cout << "I see that you have " << creditHours % 3 << " hours left over though.\n";
    }

    cout << "It sounds like you are taking " << creditHours / 3 << " classes.\n";
    cout << "Over the course if the semester you should be spending "; 
    cout << creditHours * 16 << " hours here at College.\n";

    if (creditHours > 12) {
        cout << "Holy Crap that is a lot.\n";
    } else {
        cout << "You have chosen a reasonable course load, though I am sure it will ";
        cout << "still be challenging.\n";
    }

    cout << "I have been to College already! Here is the math!\n";
    cout << "25 + 5 * 10 = " << 25 + 5 * 10 << "!\n";
    cout << "(25 + 5) * 10 = " << (25 + 5) * 10 << "!\n";  

    cout << "Oh my gosh, I haven't even gotten your name yet! What is it?\n";

    string playerName;

    // cin doesn't allow for spaces.
    cin >> playerName;

    cout << playerName << ", it is wonderful to meet you!\n";
  }

  if (false) {

    cout << "New code after the break!\n";
    bool narratorIsRude = false;

    
    if(narratorIsRude) {
      cout << "What the hell do you want?\n";
    } else {
      cout << "Hello! How may I help you?\n";  
    }

    cout << "\n\n\t[Starting Adventure]\n";
    //  setting up variables
    string playerName = "Finn";
    int playerHealth = 100;
    unsigned int playerAge = 14;

    if (narratorIsRude) {
      cout << "WHAT IS YOUR NAME AND AGE?\n";
    } else {
      cout << "You are begining and adventure! What is your name and age, adventurer?\n";
    }

    cout << "name = ";
    cin >> playerName;
    cout << "age = ";
    cin >> playerAge;


    cout << "[" << playerName << " , aged " << playerAge << " years, ";
    cout << "sets out on an adventure with " << playerHealth << " health.]\n";

    //  Right off the bat playerName is attacked by a WereBear! playerName lose 37 health.
    cout << "Right off the bat " << playerName << " is attacked by a WereBear!\n";
    cout << playerName << " loses 37 health!\n";
    //  playerHealth - 37;    //  this does nothing to playerHealth
    //  playerHealth = playerHealth - 37;
    playerHealth -= 37;   //  combined assignment operator
    cout << playerName << "'s health is now " << playerHealth <<  ".\n";

    cout << "What will you do now? Press 1 to attack and 2 to flee.\n";
    int choice = 0;

    cin >> choice;

    if (choice == 1)  {
      cout << "That was a terrible idea!! You have died.\n";
    } else if (choice == 2) {
      cout << "You book it away from the WereBear and cross a river to safty.\n";
    }
    else {
      cout << "That is not one of the options. While you were fumbling, the WereBear ";
      cout << "ate your legs.\n";
    }
  }

  int turns = 1;
  cout << "turns = " << turns << endl;

  turns += 1;
  cout << "turns = " << turns << endl;

  //  increment operator

  turns++;
  cout << "turns = " << turns << endl;

  //  decrement operator
  turns--;
  turns--;
  cout << "turns = " << turns << endl;

  turns++;
  turns++;
  turns++;
  turns++;
  turns++;
  turns++;
  turns++;
  cout << "turns = " << turns << endl;

  //  enumerators or enums for short

  enum rupees {GREEN = 1, BLUE = 5, YELLOW = 10, RED = 20, PURPLE = 50, SILVER = 100};

  cout << "You collect a yellow rupee!\n";

  int totalRupees = 0;
  totalRupees += YELLOW;
  cout << "You now have " << totalRupees << " rupees.\n";

  const int MAX_HEALTH = 100;

  if (playerHealth > MAX_HEALTH)  {
    playerHealth = MAX_HEALTH;
    MAX_HEALTH = 130;
  }

}
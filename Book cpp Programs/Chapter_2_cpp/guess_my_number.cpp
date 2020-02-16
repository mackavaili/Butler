#include <iostream>
#include <string>
using namespace std;

int main() {
  if(false) {
    // 1 I ask the user for there favortie food
    cout << "What is your favortie food?\n";
    string favFood;
    cin >> favFood;
    // 2 ask the user for there favortie movie
    cout << "What is your favortie movie?\n";
    string favMovie;
    cin >> favMovie;
    // 3 add the two together and suggest that they
    // try ... i really want to know
    // do something with that
    cout << "But have you tried " << favFood << favMovie << "?\n";
  }

  if(false)	{
    cout << "Let's do some math.\n";
    cout << "We have basic operators like +, -, /, *\n";

    int playerHealth = 10;
    int playerGold = 0;
    int playerXP = 0;

    cout << "You, the player, are going to battle a Demon Lord.\n";
    cout << "I sure hope you have a weapon!\n";
    cout << "Demon Lord attacts you with a death stare.\n";
    playerHealth = playerHealth - 8;
    if(playerHealth < 1) {
      cout << "You have been defeated! You will be remembered.\n";
      return 0;
    }
    cout << "You now have " << playerHealth << " health.\n";
    cout << "Player sneezes.\n";
    cout << "Demon Lord catches cold and goes home.\n";
    playerXP += 50;
    cout << "Your experience has increased to " << playerXP << ".\n";
    cout << "Villagers give you 100 gold / 2 because you gave their Demon Lord a cold.\n";
    playerGold += 100 / 2;
    cout << "You now have " << playerGold << " gold.\n";

    cout << "You find a wild MODULUS operator. It gives you the remainder of a division problem.\n";
    cout << "The remainder of your gold divided by 7 is " << playerGold % 7 << ".\n";
    cout << "This operator will be more useful when we have radom numbers.\n";

		cout << "a complex math problem can be solved by suing parenthesis.\n";
		cout << "5 + 5 * 13 = " << 5 + 5 * 13 << ".\n";
		cout << "(5 + 5) * 13 = " << (5 + 5) * 13 << ".\n";

  }

	if(true)	{
		cout << "This tells the story of the Demon Lord.\n";
		cout << "Recently given a cold by a uncouth adventurer.\n";
		cout << "He decideds to go to CVS for medicine to control his symptoms.\n";

		// constant variable
		const int FLU_MED_COST = 5;
		int demonLordCash = 666;

		cout << "CVS has flu meds for " << FLU_MED_COST << " dollors.\n";
		cout << "Should Demon Lord purchase these meds?\n('YES' or 'NO')\n";

		string input;
		cin >> input;

		if(input == "YES") {
			cout << "The Demon Lord gets the meds.\n";
			demonLordCash -= FLU_MED_COST;
			cout << "Demon Lord now has " << demonLordCash << " cash on claw\n";
		}
		else if(input == "NO") {
			cout << "The Demon Lord would rather have his 5 dollars. The Demon Lord gos home and waits.\n";
			cout << "Demon Lord now has " << demonLordCash << " cash on claw\n";
		}
		else {
			cout << "Will I can't interpret that! The Demon Lord will never know what to do.\n";
			cout << "Demon Lord dies and the story ends.\n";
			return 0;
		}
		if(false)	{
			cout << "This single line will run even without a {code block}.\n";
			cout << "However - this line of code will run regardless of the if statement.\n";
		}
	}

	if(false) {
		cout << "Our adventurer is stuck in a galditorial arean.\n";
		cout << "Four battles must be won before our adventurer can escape!\n";
		int totalBattles = 0;
		int playerHealth = 100;

		cout << "Fight!\n";
		totalBattles++;
		playerHealth -= 15;
		cout << "The adventurer has completed " << totalBattles << " battles.\n";
		cout << "The adventurer's health is " << playerHealth << ".\n";
		if(totalBattles == 4) {
			cout << "The adventurer heads home.\n";
			return 0;
		}

		cout << "Fight!\n";
		totalBattles++;
		playerHealth -= 30;
		cout << "The adventurer has completed " << totalBattles << " battles.\n";
		cout << "The adventurer's health is " << playerHealth << ".\n";
		if(totalBattles == 4) {
			cout << "The adventurer heads home.\n";
			return 0;
		}

		cout << "Fight!\n";
		totalBattles++;
		playerHealth -= 25;
		cout << "The adventurer has completed " << totalBattles << " battles.\n";
		cout << "The adventurer's health is " << playerHealth << ".\n";
		if(totalBattles == 4) {
			cout << "The adventurer heads home.\n";
			return 0;
		}

		cout << "Fight!\n";
		totalBattles++;
		playerHealth -= 13;
		cout << "The adventurer has completed " << totalBattles << " battles.\n";
		cout << "The adventurer's health is " << playerHealth << ".\n";
		if(totalBattles == 4) {
			cout << "The adventurer looks for a health pack.\n";
			// return 0;
		}
	}
	if(false) {
		enum difficulty {NOVICE = 1, EASY, NORMAL, HARD, UNBEATABLE};
		cout << "NORMAL + HARD = " << NORMAL + HARD << ".\n";

		cout << "Choose your diffeculty: \n1 = NOVICE\n2 = EASY\n3 = NORMAL\n";
		cout << "4 = HARD\n5 = UNBEATABLE\n";
		int diffChoice;
		cin >> diffChoice;

		if(diffChoice == NOVICE)
		cout << "Enjoy!\n";

		else if(diffChoice == EASY)
		cout << "Have fun!\n";

		else if(diffChoice == NORMAL)
		cout << "The standard!\n";

		else if(diffChoice == HARD)
		cout << "Brace yourself!\n";

		else if(diffChoice == UNBEATABLE)
		cout << "Your going to die!\n";
	}
}
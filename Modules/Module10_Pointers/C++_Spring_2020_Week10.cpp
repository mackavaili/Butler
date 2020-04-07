#include <iostream>
#include <string>
#include <vector>
using namespace std;

//  build a vector of strings with a elemental damage types
//  ask the player which damage type they would like to use by choosing a number
    //  corresponding to the index of the vector
    //  create a function named attack that accepts a constant reference
        //  to a vector of strings and an index
    //  have the function send an attack with the chosen damage type to the console
        //  example: "The player attacks with Fire damage!"

void attack(const vector<string>& givenVec, int index) {
    cout << "The player attacks with " << givenVec[index] << " damage!\n";
}

int main () {
    cout << "Hello World!\n";

    vector<strings> dmgTypes;
    int damageType = 0;

    dmgTypes.push_back("Ice")
    dmgTypes.push_back("Lava")
    dmgTypes.push_back("Meanness")
    dmgTypes.push_back("Book")

    cout << "Damage types: \n";
    for(int i = 0; i < dmgTypes.size(); i++) {
        cout << i + 1 << dmgTypes[i] << endl;
    }

    cout << "What damage type would you like to use?\n";

    cin >> damageType;

    attack(dmgTypes,damageType);

}

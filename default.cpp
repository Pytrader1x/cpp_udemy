// Created on Will's iPad.

#include <iostream>
#include <vector>
using namespace std;

class Player
{   public:

    string name;
    int health;
    int xp;

    Player(string name_val="None",int health_val=1, int xp_val=0);

}; // end class declaration


// Player::Player(string name_val,int health_val, int xp_val)
//     :name(name_val),health(health_val), xp (xp_val){
//         cout << "Three args constructor" << endl;
//     }

int main() {

    Player empty;
    Player frank("Frank");
    Player villain{"Villain", 100, 55};
    

    cout << villain.name << endl;
    cout << villain.name << " has health of " << villain.health << endl;

    cout << empty.name << endl;
    cout << empty.name << " has health of " << empty.health << endl;
    cout << empty.xp << endl;

    cout << frank.name << endl;
    cout << frank.name << " has health of " << frank.health << endl;
    string new_name = "Fredrick";
    cout << "Changing name of " << frank.name << " to " <<  new_name << endl;
    frank.name = new_name;
    cout << frank.name << endl;

    

    return 0;
}
// Created on Will's iPad.

#include <iostream>
#include <vector>
using namespace std;

class Player
{   
    private:
    string name;
    int health;
    int xp;
    public:
    string get_name();
    int get_health() {return health;};
    int get_xp(){return xp;};

    // //default constructor
    Player(string name_val="None",int health_val=1, int xp_val=0);
    
    // //copy consgtructor
    Player(const Player &source);
    ~Player() {cout << "Destructor called for "<< name<< endl;}
}; // end class declaration

string Player::get_name(){
    return name;
}

Player::Player(string name_val,int health_val, int xp_val)
    :name(name_val),health(health_val), xp (xp_val){
        cout << "Three args constructor for " << name_val << endl;
    }

Player::Player(const Player &source)
    :name(source.name+"_clone"), health(source.health), xp(source.xp){

        cout << "Copy constructor - made a copy of " << source.name << endl;

        }

void display_player(Player p){
    cout << "-----\nName " << p.get_name() << endl;
    cout << "Health " << p.get_health() << endl;
    cout << "XP " << p.get_xp() << "\n-----" << endl;
}

int main() {

    // Player empty;

    // display_player(empty);

    // Player frank("Frank");
    Player villain{"Villain", 100, 55};

    display_player(villain);

    Player villain_clone{villain};
    display_player(villain);
    // cout << villain.get_name() << endl;
    

    return 0;
}